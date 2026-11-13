#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x17BE3190)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GETTICKLODBOUNDS_OFFSET UNITYSDK_OFFSET(0x17BE2F30)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x17BE2ED0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GET_INSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x17BE2E70)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GET_POSITIONSCALELIST_OFFSET UNITYSDK_OFFSET(0x17BE2E90)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GET_RANDOMNUMBERSLIST_OFFSET UNITYSDK_OFFSET(0x17BE2EB0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_SET_INSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x17BE2E80)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_SET_POSITIONSCALELIST_OFFSET UNITYSDK_OFFSET(0x17BE2EA0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_SET_RANDOMNUMBERSLIST_OFFSET UNITYSDK_OFFSET(0x17BE2EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimatorMonoPlugin_TypeDefinitionIndex = 72446;

	class Effect_FallingAnimatorMonoPlugin
	{
	public:
		::System::Int32 RandomSeed; // 0x30
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* ParticleDatas; // 0x38
		::RPG::Client::TAUtils::SimpleTransform RelativeTransform; // 0x40
		::UnityEngine::Vector2 SizeMinMax; // 0x64
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* ScaleAlongHeight; // 0x70
		::UnityEngine::AnimationCurve* ScaleAlongRadius; // 0x78
		::System::Single SizeDiscardThreshold; // 0x80
		::System::Single Radius; // 0x84
		::System::Single Height; // 0x88
		::System::Single Thickness; // 0x8C
		::UnityEngine::Vector2 AngleMinMax; // 0x90
		::System::Single SpotAngle; // 0x98
		::System::Int32 MaxInstanceCount; // 0x9C
		::System::Single MinDistance; // 0xA0
		::System::Boolean SingleScattering; // 0xA4
		::System::Byte _padding2[0x3];
		::System::Int32 m_instanceCount; // 0xA8
		::UnityEngine::Vector3 ShakeRange; // 0xAC
		::System::Single ShakeFrequency; // 0xB8
		::System::Single RotationRange; // 0xBC
		::System::Single RotationFrequency; // 0xC0
		::System::Single FallSpeed; // 0xC4
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_positionScaleList; // 0xC8
		::System::Collections::Generic::List_1<::System::Single>* m_randomNumbersList; // 0xD0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Int32 get_InstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GET_INSTANCECOUNT_OFFSET))(this);
		}

		::System::Void set_InstanceCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_SET_INSTANCECOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_PositionScaleList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GET_POSITIONSCALELIST_OFFSET))(this);
		}

		::System::Void set_PositionScaleList(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_SET_POSITIONSCALELIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Single>* get_RandomNumbersList()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GET_RANDOMNUMBERSLIST_OFFSET))(this);
		}

		::System::Void set_RandomNumbersList(::System::Collections::Generic::List_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_SET_RANDOMNUMBERSLIST_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::UnityEngine::Bounds GetTickLodBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORMONOPLUGIN_GETTICKLODBOUNDS_OFFSET))(this);
		}

	};
}
