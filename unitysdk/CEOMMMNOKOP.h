#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/Rtcb_BreakActionOption.h"
class BAJEFKOPOPL;
class CENEFPOMFKG;
class FJNBODHINDM;
class MACGJKCMFKP;
namespace RPG::GameCore { class GameEntity; }

#define CEOMMMNOKOP_CAALLMKLGEH_1_OFFSET UNITYSDK_OFFSET(0xC9F6DE0)
#define CEOMMMNOKOP_CAALLMKLGEH_OFFSET UNITYSDK_OFFSET(0xC9F6D40)
#define CEOMMMNOKOP_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9F7A80)
#define CEOMMMNOKOP_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F7A70)
#define CEOMMMNOKOP_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xC9F6BA0)
#define CEOMMMNOKOP_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0xC9F7280)
#define CEOMMMNOKOP_HCAABDAILBF_OFFSET UNITYSDK_OFFSET(0xC9F6FC0)
#define CEOMMMNOKOP_HCNDCOADNCO_OFFSET UNITYSDK_OFFSET(0xC9F76C0)
#define CEOMMMNOKOP_LFJKNAEIODP_OFFSET UNITYSDK_OFFSET(0xC9F7310)
#define CEOMMMNOKOP_MAPIODKPIOO_OFFSET UNITYSDK_OFFSET(0xC9F6E50)
#define CEOMMMNOKOP_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC9F6C80)

inline static constexpr unsigned int CEOMMMNOKOP_TypeDefinitionIndex = 53949;

	class CEOMMMNOKOP : public ::KKEFMOKEJIF
	{
	public:
		::MACGJKCMFKP* IPEJMLAKNJH; // 0x18
		::BAJEFKOPOPL* KKANBKCEJEF; // 0x20
		static ::Il2CppArray<::System::Int32>** StaticGet_FDAGEJKFKMK()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "CEOMMMNOKOP")->GetStaticField(0x1D050);
		}

		static ::System::Single* StaticGet_BKEKAEMNGEK()
		{
			return (::System::Single*)UnitySDK::FromName("", "CEOMMMNOKOP")->GetStaticField(0x6960);
		}

		static ::System::Single* StaticGet_HLPCKFLBFCG()
		{
			return (::System::Single*)UnitySDK::FromName("", "CEOMMMNOKOP")->GetStaticField(0x6964);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEOMMMNOKOP_CCTOR_OFFSET))();
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void CAALLMKLGEH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_CAALLMKLGEH_OFFSET))(this, a1);
		}

		::System::Void CAALLMKLGEH_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_CAALLMKLGEH_1_OFFSET))(this, a1, a2);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HCAABDAILBF(::RPG::GameCore::Rtcb_BreakActionOption a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_HCAABDAILBF_OFFSET))(this, a1);
		}

		::System::Void MAPIODKPIOO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_MAPIODKPIOO_OFFSET))(this, a1, a2);
		}

		::System::Void LFJKNAEIODP(::RPG::GameCore::Rtcb_BreakActionOption a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_LFJKNAEIODP_OFFSET))(this, a1);
		}

		static ::System::Boolean HCNDCOADNCO(::FJNBODHINDM* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::FJNBODHINDM*, ::System::Int32))((::PBYTE)hIl2Cpp + CEOMMMNOKOP_HCNDCOADNCO_OFFSET))(a1, a2);
		}

	};
