#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCEJFGMOHGP.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimFloatingSpiritPropSpawnerParam; }

#define BCNGHBDEDBL_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0x162E8F30)
#define BCNGHBDEDBL_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x162E6EB0)
#define BCNGHBDEDBL_BCPMNLEHCGM_OFFSET UNITYSDK_OFFSET(0x162E6860)
#define BCNGHBDEDBL_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x162E5CF0)
#define BCNGHBDEDBL_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0x162E8BD0)
#define BCNGHBDEDBL_CLEAR_OFFSET UNITYSDK_OFFSET(0x162E5D40)
#define BCNGHBDEDBL_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x162E63D0)
#define BCNGHBDEDBL_CTOR_OFFSET UNITYSDK_OFFSET(0x162E8FE0)
#define BCNGHBDEDBL_DFMIBAIHGJK_OFFSET UNITYSDK_OFFSET(0x162E7950)
#define BCNGHBDEDBL_EDPLMMPGFCM_OFFSET UNITYSDK_OFFSET(0x162E5E00)
#define BCNGHBDEDBL_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0x162E8870)
#define BCNGHBDEDBL_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x162E6F60)
#define BCNGHBDEDBL_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x162E6F00)
#define BCNGHBDEDBL_IFJENEEHPIC_OFFSET UNITYSDK_OFFSET(0x162E79E0)
#define BCNGHBDEDBL_JFIPENIIJMG_OFFSET UNITYSDK_OFFSET(0x162E8550)
#define BCNGHBDEDBL_JHBCPJDPIDG_OFFSET UNITYSDK_OFFSET(0x162E7C70)
#define BCNGHBDEDBL_JKFEFMMHNKM_OFFSET UNITYSDK_OFFSET(0x162E8640)
#define BCNGHBDEDBL_MJKHLIAHJGL_OFFSET UNITYSDK_OFFSET(0x162E86E0)
#define BCNGHBDEDBL_OCENCOOIHHC_OFFSET UNITYSDK_OFFSET(0x162E85C0)
#define BCNGHBDEDBL_OJCMIPNEJAA_OFFSET UNITYSDK_OFFSET(0x162E8050)

inline static constexpr unsigned int BCNGHBDEDBL_TypeDefinitionIndex = 77047;

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
