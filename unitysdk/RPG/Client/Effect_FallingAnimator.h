#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_CPABPAKMAJD_OFFSET UNITYSDK_OFFSET(0xCD29530)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD2AA70)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD29700)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0xCD28C80)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_JGECDJIILGG_OFFSET UNITYSDK_OFFSET(0xCD295C0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_KPMJPNOEGIA_OFFSET UNITYSDK_OFFSET(0xCD29FC0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_MPJLDFCBLAH_OFFSET UNITYSDK_OFFSET(0xCD2A890)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_NPMHOKKPFED_OFFSET UNITYSDK_OFFSET(0xCD29370)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_OKAGLJMLCEP_OFFSET UNITYSDK_OFFSET(0xCD292D0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD296B0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD29660)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_REGENERATE_OFFSET UNITYSDK_OFFSET(0xCD28C30)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD29800)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimator_TypeDefinitionIndex = 70467;

	class Effect_FallingAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 randomSeed; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* particleDatas; // 0x20
		::RPG::Client::TAUtils::SimpleTransform relativeTransform; // 0x28
		::UnityEngine::Vector2 sizeMinMax; // 0x4C
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* scaleAlongHeight; // 0x58
		::System::Int32 AMAIIHILPKA; // 0x60
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* scaleAlongRadius; // 0x68
		::System::Single sizeDiscardThreshold; // 0x70
		::System::Single radius; // 0x74
		::System::Single height; // 0x78
		::System::Single thickness; // 0x7C
		::UnityEngine::Vector2 angleMinMax; // 0x80
		::System::Single spotAngle; // 0x88
		::System::Int32 maxInstanceCount; // 0x8C
		::System::Single minDistance; // 0x90
		::System::Boolean singleScattering; // 0x94
		::System::Byte _padding3[0x3];
		::System::Int32 m_instanceCount; // 0x98
		::UnityEngine::Vector3 shakeRange; // 0x9C
		::System::Single shakeFrequency; // 0xA8
		::System::Single rotationRange; // 0xAC
		::System::Single rotationFrequency; // 0xB0
		::System::Single fallSpeed; // 0xB4
		::System::Single DJIKPFCFAPO; // 0xB8
		::System::Byte _padding4[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_positionScaleList; // 0xC0
		::System::Collections::Generic::List_1<::System::Single>* m_randomNumbersList; // 0xC8
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* CFLNEKJJBHA; // 0xD0
		::UnityEngine::MaterialPropertyBlock* BEFHHGEFFJP; // 0xD8
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> DIPKIDKPKAI; // 0xE0
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> AOMGDFBAMAG; // 0xF0
		::System::Byte _padding6[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> MKBBHFEOIPP; // 0x100
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> BAECLGOCCDF; // 0x110
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_CTOR_OFFSET))(this);
		}

		::System::Void Regenerate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_REGENERATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 OKAGLJMLCEP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_OKAGLJMLCEP_OFFSET))(this);
		}

		::UnityEngine::Vector3 NPMHOKKPFED()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_NPMHOKKPFED_OFFSET))(this);
		}

		::UnityEngine::Quaternion CPABPAKMAJD()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_CPABPAKMAJD_OFFSET))(this);
		}

		::UnityEngine::Vector3 JGECDJIILGG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_JGECDJIILGG_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_UPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void KPMJPNOEGIA(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_KPMJPNOEGIA_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::Single>* MPJLDFCBLAH(::UnityEngine::AnimationCurve* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_MPJLDFCBLAH_OFFSET))(a1, a2);
		}

	};
}
