#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAnchorType.h"
#include "unitysdk/System/Object.h"
class KGAHHFHMPBP;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define KGAHHFHMPBP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC5B550)
#define KGAHHFHMPBP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC5B430)
#define KGAHHFHMPBP_ELKFFEIOGDN_OFFSET UNITYSDK_OFFSET(0xBC5B640)
#define KGAHHFHMPBP_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0xBC5B6A0)
#define KGAHHFHMPBP_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xBC5B8E0)
#define KGAHHFHMPBP_GET_EFFECTPATH2V1LOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xBC5B8B0)
#define KGAHHFHMPBP_GET_EFFECTPATH2V1TEAMMATE_OFFSET UNITYSDK_OFFSET(0xBC5B8C0)
#define KGAHHFHMPBP_GET_EFFECTPATHENEMY_OFFSET UNITYSDK_OFFSET(0xBC5B8A0)
#define KGAHHFHMPBP_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0xBC5B890)
#define KGAHHFHMPBP_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0xBC5B8F0)
#define KGAHHFHMPBP_GET_FADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xBC5B910)
#define KGAHHFHMPBP_GET_FADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xBC5B920)
#define KGAHHFHMPBP_GET_HAS2V1SPECIALVERSION_OFFSET UNITYSDK_OFFSET(0xBC5B8D0)
#define KGAHHFHMPBP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBC5B5D0)
#define KGAHHFHMPBP_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0xBC5B7C0)
#define KGAHHFHMPBP_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0xBC5B6F0)
#define KGAHHFHMPBP_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0xBC5B900)

inline static constexpr unsigned int KGAHHFHMPBP_TypeDefinitionIndex = 78368;

	class KGAHHFHMPBP : public ::System::Object
	{
	public:
		::System::String* _EffectPath_k__BackingField; // 0x10
		::System::String* _EffectPath2v1Teammate_k__BackingField; // 0x18
		::System::String* _FadeOutAnimation_k__BackingField; // 0x20
		::System::String* _EffectPath2v1LocalPlayer_k__BackingField; // 0x28
		::UnityEngine::GameObject* _EffectRoot_k__BackingField; // 0x30
		::System::String* _EffectPathEnemy_k__BackingField; // 0x38
		::System::String* _FadeInAnimation_k__BackingField; // 0x40
		::System::Single PGMIOKKLHIE; // 0x48
		::System::Boolean _Has2v1SpecialVersion_k__BackingField; // 0x4C
		::System::Byte _padding0[0x3];
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
