#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCEJFGMOHGP.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimFloatingSpiritPropSpawnerParam; }

#define BCNGHBDEDBL_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0x162DC6F0)
#define BCNGHBDEDBL_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x162DA670)
#define BCNGHBDEDBL_BCPMNLEHCGM_OFFSET UNITYSDK_OFFSET(0x162DA020)
#define BCNGHBDEDBL_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x162D94B0)
#define BCNGHBDEDBL_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0x162DC390)
#define BCNGHBDEDBL_CLEAR_OFFSET UNITYSDK_OFFSET(0x162D9500)
#define BCNGHBDEDBL_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x162D9B90)
#define BCNGHBDEDBL_CTOR_OFFSET UNITYSDK_OFFSET(0x162DC7A0)
#define BCNGHBDEDBL_DFMIBAIHGJK_OFFSET UNITYSDK_OFFSET(0x162DB110)
#define BCNGHBDEDBL_EDPLMMPGFCM_OFFSET UNITYSDK_OFFSET(0x162D95C0)
#define BCNGHBDEDBL_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0x162DC030)
#define BCNGHBDEDBL_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x162DA720)
#define BCNGHBDEDBL_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x162DA6C0)
#define BCNGHBDEDBL_IFJENEEHPIC_OFFSET UNITYSDK_OFFSET(0x162DB1A0)
#define BCNGHBDEDBL_JFIPENIIJMG_OFFSET UNITYSDK_OFFSET(0x162DBD10)
#define BCNGHBDEDBL_JHBCPJDPIDG_OFFSET UNITYSDK_OFFSET(0x162DB430)
#define BCNGHBDEDBL_JKFEFMMHNKM_OFFSET UNITYSDK_OFFSET(0x162DBE00)
#define BCNGHBDEDBL_MJKHLIAHJGL_OFFSET UNITYSDK_OFFSET(0x162DBEA0)
#define BCNGHBDEDBL_OCENCOOIHHC_OFFSET UNITYSDK_OFFSET(0x162DBD80)
#define BCNGHBDEDBL_OJCMIPNEJAA_OFFSET UNITYSDK_OFFSET(0x162DB810)

inline static constexpr unsigned int BCNGHBDEDBL_TypeDefinitionIndex = 77046;

	class BCNGHBDEDBL : public ::CCEJFGMOHGP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_BPMGPFLHPLC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_CLEAR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void HBJBCBJAHOJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_HBJBCBJAHOJ_OFFSET))(this, a1);
		}

		::System::Void IFJENEEHPIC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_IFJENEEHPIC_OFFSET))(this, a1);
		}

		::System::Int32 JFIPENIIJMG(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_JFIPENIIJMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 OCENCOOIHHC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_OCENCOOIHHC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 JKFEFMMHNKM(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_JKFEFMMHNKM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single DFMIBAIHGJK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_DFMIBAIHGJK_OFFSET))(this, a1, a2);
		}

		::System::Void OJCMIPNEJAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_OJCMIPNEJAA_OFFSET))(this);
		}

		::System::Void JHBCPJDPIDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_JHBCPJDPIDG_OFFSET))(this);
		}

		::System::Void MJKHLIAHJGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_MJKHLIAHJGL_OFFSET))(this);
		}

		::System::Void BCPMNLEHCGM(::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_BCPMNLEHCGM_OFFSET))(this, a1);
		}

		::System::Void FNHOOMOJJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_FNHOOMOJJJO_OFFSET))(this);
		}

		::System::Void CFDCFBDGKEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_CFDCFBDGKEB_OFFSET))(this);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

		::System::Void EDPLMMPGFCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNGHBDEDBL_EDPLMMPGFCM_OFFSET))(this);
		}

	};
