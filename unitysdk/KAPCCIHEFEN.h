#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBattleUltraInsertPhase.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
class EKFMIDBJDIA;
class ILMMNCLCDIM;
class LHLJIHEKIOH;
class LIIAKHPGLPO;
class MJNGFEGNCOA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAPCCIHEFEN_AIHMEEABDAM_OFFSET UNITYSDK_OFFSET(0xBB6FF10)
#define KAPCCIHEFEN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB71150)
#define KAPCCIHEFEN_EFOJKPKCCJB_OFFSET UNITYSDK_OFFSET(0xBB6FE40)
#define KAPCCIHEFEN_EJKOKAANOGI_OFFSET UNITYSDK_OFFSET(0xBB6FFB0)
#define KAPCCIHEFEN_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0xBB70B90)
#define KAPCCIHEFEN_HEABJPMCGEF_OFFSET UNITYSDK_OFFSET(0xBB70C70)
#define KAPCCIHEFEN_HNOOPKPAPMD_OFFSET UNITYSDK_OFFSET(0xBB71050)
#define KAPCCIHEFEN_IJBCICJHBPN_OFFSET UNITYSDK_OFFSET(0xBB71060)
#define KAPCCIHEFEN_JNOAHLOPGPI_OFFSET UNITYSDK_OFFSET(0xBB70B30)
#define KAPCCIHEFEN_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xBB6FD10)
#define KAPCCIHEFEN_MDMNELAJNMM_OFFSET UNITYSDK_OFFSET(0xBB71070)
#define KAPCCIHEFEN_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBB6F890)
#define KAPCCIHEFEN_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBB6FAD0)
#define KAPCCIHEFEN_PFJOJBGLCFI_OFFSET UNITYSDK_OFFSET(0xBB70EB0)
#define KAPCCIHEFEN_PIOPGKOHBHC_OFFSET UNITYSDK_OFFSET(0xBB707C0)

inline static constexpr unsigned int KAPCCIHEFEN_TypeDefinitionIndex = 55411;

	class KAPCCIHEFEN : public ::System::Object
	{
	public:
		::LHLJIHEKIOH* KMIGOEPKMOI; // 0x10
		::LIIAKHPGLPO* KGMAOIPOLEH; // 0x18
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::ILMMNCLCDIM* JFMNNJKEGDA; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AEFBOHJDBBC; // 0x30
		::System::Collections::Generic::List_1<::CENEFPOMFKG*>* JCILLBAHIIM; // 0x38
		::RPG::GameCore::FixPoint NIMJOKGLPEK; // 0x40
		::RPG::GameCore::FixPoint DMIIPFEILFN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Boolean EJKOKAANOGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_EJKOKAANOGI_OFFSET))(this);
		}

		::System::Void JNOAHLOPGPI(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_JNOAHLOPGPI_OFFSET))(this, a1);
		}

		::System::Void PIOPGKOHBHC(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_PIOPGKOHBHC_OFFSET))(this, a1);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HEABJPMCGEF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_HEABJPMCGEF_OFFSET))(this, a1);
		}

		::System::Void PFJOJBGLCFI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_PFJOJBGLCFI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint HNOOPKPAPMD()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_HNOOPKPAPMD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IJBCICJHBPN()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_IJBCICJHBPN_OFFSET))(this);
		}

		::System::Boolean EFOJKPKCCJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_EFOJKPKCCJB_OFFSET))(this);
		}

		::System::Boolean AIHMEEABDAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_AIHMEEABDAM_OFFSET))(this);
		}

		::RPG::GameCore::RtBattleUltraInsertPhase MDMNELAJNMM()
		{
			return ((::RPG::GameCore::RtBattleUltraInsertPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCCIHEFEN_MDMNELAJNMM_OFFSET))(this);
		}

	};
