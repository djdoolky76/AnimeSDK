#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/NGAONJJLNME.h"
class DDCIAPIJLIE;
namespace RPG::Client { class Effect_FallingAnimatorMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xD6EDFD0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD6EED30)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD6F15B0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6EEC50)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xD6EF460)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_IKBNLIEEFIE_OFFSET UNITYSDK_OFFSET(0xD6F0AF0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_JEJIGBACEDF_OFFSET UNITYSDK_OFFSET(0xD6EF4E0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD6EDF10)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_KPMJPNOEGIA_OFFSET UNITYSDK_OFFSET(0xD6EFC20)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_MAMCNIINFGL_OFFSET UNITYSDK_OFFSET(0xD6F0EB0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD6EEC00)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_MPJLDFCBLAH_OFFSET UNITYSDK_OFFSET(0xD6F0A10)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_OCHLCBPJEIB_OFFSET UNITYSDK_OFFSET(0xD6F0C20)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD6EDF80)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD6EED80)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimatorBehavior_TypeDefinitionIndex = 72441;

	class Effect_FallingAnimatorBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Single _TotalTime; // 0x38
		::System::Int32 _InstanceCount; // 0x3C
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* _RenderMatrices; // 0x40
		::UnityEngine::MaterialPropertyBlock* _Mpb; // 0x48
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> _PositionScale; // 0x50
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> _Matrices; // 0x60
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> _RandomNumbers; // 0x70
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> _ScaleAlongHeight; // 0x80
		::System::Byte _padding3[0x8];
		::DDCIAPIJLIE* _ThreadTask; // 0x90
		// static const ::System::Object CurveSampleCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void APIDHHKLGEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_APIDHHKLGEJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MAMCNIINFGL(::NGAONJJLNME a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGAONJJLNME, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_MAMCNIINFGL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JEJIGBACEDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_JEJIGBACEDF_OFFSET))(this);
		}

		::System::Void IKBNLIEEFIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_IKBNLIEEFIE_OFFSET))(this);
		}

		::System::Void OCHLCBPJEIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_OCHLCBPJEIB_OFFSET))(this);
		}

		::System::Void KPMJPNOEGIA(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_KPMJPNOEGIA_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::Single>* MPJLDFCBLAH(::UnityEngine::AnimationCurve* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_MPJLDFCBLAH_OFFSET))(a1, a2);
		}

		::RPG::Client::Effect_FallingAnimatorMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_FallingAnimatorMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
