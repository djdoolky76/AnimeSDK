#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAnchorType.h"
#include "unitysdk/System/Object.h"
class KGAHHFHMPBP;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define KGAHHFHMPBP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB3C47D0)
#define KGAHHFHMPBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C46B0)
#define KGAHHFHMPBP_ELKFFEIOGDN_OFFSET UNITYSDK_OFFSET(0xB3C48C0)
#define KGAHHFHMPBP_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0xB3C4920)
#define KGAHHFHMPBP_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xB3C4B50)
#define KGAHHFHMPBP_GET_EFFECTPATH2V1LOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xB3C4B20)
#define KGAHHFHMPBP_GET_EFFECTPATH2V1TEAMMATE_OFFSET UNITYSDK_OFFSET(0xB3C4B30)
#define KGAHHFHMPBP_GET_EFFECTPATHENEMY_OFFSET UNITYSDK_OFFSET(0xB3C4B10)
#define KGAHHFHMPBP_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0xB3C4B00)
#define KGAHHFHMPBP_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0xB3C4B60)
#define KGAHHFHMPBP_GET_FADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xB3C4B80)
#define KGAHHFHMPBP_GET_FADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xB3C4B90)
#define KGAHHFHMPBP_GET_HAS2V1SPECIALVERSION_OFFSET UNITYSDK_OFFSET(0xB3C4B40)
#define KGAHHFHMPBP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB3C4850)
#define KGAHHFHMPBP_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0xB3C4A40)
#define KGAHHFHMPBP_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0xB3C4970)
#define KGAHHFHMPBP_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0xB3C4B70)

inline static constexpr unsigned int KGAHHFHMPBP_TypeDefinitionIndex = 76040;

	class KGAHHFHMPBP : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _EffectRoot_k__BackingField; // 0x10
		::System::String* _EffectPath2v1Teammate_k__BackingField; // 0x18
		::System::String* _FadeOutAnimation_k__BackingField; // 0x20
		::System::String* _EffectPathEnemy_k__BackingField; // 0x28
		::System::String* _EffectPath2v1LocalPlayer_k__BackingField; // 0x30
		::System::String* _FadeInAnimation_k__BackingField; // 0x38
		::System::String* _EffectPath_k__BackingField; // 0x40
		::System::Boolean _Has2v1SpecialVersion_k__BackingField; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single PGMIOKKLHIE; // 0x4C
		::System::Single KIPAGNCANAJ; // 0x50
		::RPG::GameCore::DiceCombatAnchorType _AnchorType_k__BackingField; // 0x54
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_CTOR_OFFSET))(this, a1);
		}

		static ::KGAHHFHMPBP* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::KGAHHFHMPBP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean ELKFFEIOGDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_ELKFFEIOGDN_OFFSET))(this);
		}

		::System::Void EPHFABNKFGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_EPHFABNKFGJ_OFFSET))(this);
		}

		::System::Void NOFHFKNDBAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_NOFHFKNDBAO_OFFSET))(this);
		}

		::System::Void LNGDBLEKGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_LNGDBLEKGHG_OFFSET))(this);
		}

		::System::String* get_EffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_EFFECTPATH_OFFSET))(this);
		}

		::System::String* get_EffectPathEnemy()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_EFFECTPATHENEMY_OFFSET))(this);
		}

		::System::String* get_EffectPath2v1LocalPlayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_EFFECTPATH2V1LOCALPLAYER_OFFSET))(this);
		}

		::System::String* get_EffectPath2v1Teammate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_EFFECTPATH2V1TEAMMATE_OFFSET))(this);
		}

		::System::Boolean get_Has2v1SpecialVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_HAS2V1SPECIALVERSION_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatAnchorType get_AnchorType()
		{
			return ((::RPG::GameCore::DiceCombatAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_ANCHORTYPE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_EffectRoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_EFFECTROOT_OFFSET))(this);
		}

		::System::Void set_EffectRoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_SET_EFFECTROOT_OFFSET))(this, a1);
		}

		::System::String* get_FadeInAnimation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_FADEINANIMATION_OFFSET))(this);
		}

		::System::String* get_FadeOutAnimation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHHFHMPBP_GET_FADEOUTANIMATION_OFFSET))(this);
		}

	};
