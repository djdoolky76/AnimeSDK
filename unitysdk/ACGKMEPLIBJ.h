#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACGKMEPLIBJ_EAttackState.h"
#include "unitysdk/OELKAFALAFH_EWindowType.h"
#include "unitysdk/RPG/Client/EInflatableFighterSide.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class DDIAHGAMCCG;
class EKJPBODJDFG;
class EMKMGGFFECN;
class IAFFJPHCLFK;
class JFDAODCOGBE;
class OCGOBFOOIAB;
class OELKAFALAFH;
namespace RPG::Client { class MonoInflatableFighter; }
namespace RPG::GameCore { class GameEntity; }

#define ACGKMEPLIBJ_BINNHFKCJHN_OFFSET UNITYSDK_OFFSET(0xB11FEF0)
#define ACGKMEPLIBJ_CBJDNCLCJPI_OFFSET UNITYSDK_OFFSET(0xB11FF10)
#define ACGKMEPLIBJ_CPMEFLDOBJN_OFFSET UNITYSDK_OFFSET(0xB11FF40)
#define ACGKMEPLIBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB11EE70)
#define ACGKMEPLIBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB11EFF0)
#define ACGKMEPLIBJ_DPEBMCNBHIF_OFFSET UNITYSDK_OFFSET(0xB11FF30)
#define ACGKMEPLIBJ_EFHEJBGHFML_OFFSET UNITYSDK_OFFSET(0xB11F9A0)
#define ACGKMEPLIBJ_FEOMNKHKMAC_OFFSET UNITYSDK_OFFSET(0xB11FDA0)
#define ACGKMEPLIBJ_FFICHBCNMLP_OFFSET UNITYSDK_OFFSET(0xB11FFA0)
#define ACGKMEPLIBJ_GET_CURRENTWINDOW_OFFSET UNITYSDK_OFFSET(0xB11FF80)
#define ACGKMEPLIBJ_GET_SIDE_OFFSET UNITYSDK_OFFSET(0xB11FF60)
#define ACGKMEPLIBJ_IEJKPNIMKCJ_OFFSET UNITYSDK_OFFSET(0xB11FF00)
#define ACGKMEPLIBJ_IFKHOCJCCDA_OFFSET UNITYSDK_OFFSET(0xB11F8B0)
#define ACGKMEPLIBJ_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0xB11F050)
#define ACGKMEPLIBJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB11F2E0)
#define ACGKMEPLIBJ_MABGGOOFLEJ_OFFSET UNITYSDK_OFFSET(0xB11FF20)
#define ACGKMEPLIBJ_NBACLDMDJHM_OFFSET UNITYSDK_OFFSET(0xB11FF50)
#define ACGKMEPLIBJ_NNGMOCFGPBN_OFFSET UNITYSDK_OFFSET(0xB11F930)
#define ACGKMEPLIBJ_PBDAMGFOOMK_OFFSET UNITYSDK_OFFSET(0xB11FC80)
#define ACGKMEPLIBJ_SET_CURRENTWINDOW_OFFSET UNITYSDK_OFFSET(0xB11FF90)
#define ACGKMEPLIBJ_SET_SIDE_OFFSET UNITYSDK_OFFSET(0xB11FF70)

inline static constexpr unsigned int ACGKMEPLIBJ_TypeDefinitionIndex = 68675;

	class ACGKMEPLIBJ : public ::System::Object
	{
	public:
		::EMKMGGFFECN* DAGBGPPCEBF; // 0x10
		::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x18
		::OELKAFALAFH* KNNJLPDMAKL; // 0x20
		::EKJPBODJDFG* NKLIELJGPIK; // 0x28
		::DDIAHGAMCCG* ACJPLJPIAII; // 0x30
		::OCGOBFOOIAB* CDLBIMKEIID; // 0x38
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x40
		::IAFFJPHCLFK* HLPNEBNAACH; // 0x48
		::JFDAODCOGBE* EFJAIFDMFJH; // 0x50
		::System::Boolean CNODBJODICG; // 0x58
		::System::Boolean CIBOFGNDDMM; // 0x59
		::System::Byte _padding0[0x2];
		::System::Single MEBKEDPJJCA; // 0x5C
		::System::Int32 MDKBCGIALLD; // 0x60
		::RPG::Client::EInflatableFighterSide _Side_k__BackingField; // 0x64
		::System::Int32 GHJFABFLKEG; // 0x68
		::System::Single EPBIOPOKHJK; // 0x6C
		::System::Single JIOGMAEBGLH; // 0x70
		::OELKAFALAFH_EWindowType _CurrentWindow_k__BackingField; // 0x74
		::ACGKMEPLIBJ_EAttackState IECELJKDEJD; // 0x78
		::System::Void _ctor(::DDIAHGAMCCG* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::MonoInflatableFighter* a3, ::RPG::Client::EInflatableFighterSide a4, ::EKJPBODJDFG* a5)
		{
			return ((::System::Void(*)(::PVOID, ::DDIAHGAMCCG*, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoInflatableFighter*, ::RPG::Client::EInflatableFighterSide, ::EKJPBODJDFG*))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_DISPOSE_OFFSET))(this);
		}

		::System::Void JFMILGOGGHP(::RPG::Client::MonoInflatableFighter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_JFMILGOGGHP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NNGMOCFGPBN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_NNGMOCFGPBN_OFFSET))(this, a1);
		}

		::System::Void EFHEJBGHFML(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_EFHEJBGHFML_OFFSET))(this, a1);
		}

		::System::Void PBDAMGFOOMK(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_PBDAMGFOOMK_OFFSET))(this, a1);
		}

		::System::Void IFKHOCJCCDA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_IFKHOCJCCDA_OFFSET))(this, a1);
		}

		::System::Void FEOMNKHKMAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_FEOMNKHKMAC_OFFSET))(this);
		}

		::RPG::Client::MonoInflatableFighter* BINNHFKCJHN()
		{
			return ((::RPG::Client::MonoInflatableFighter*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_BINNHFKCJHN_OFFSET))(this);
		}

		::OCGOBFOOIAB* IEJKPNIMKCJ()
		{
			return ((::OCGOBFOOIAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_IEJKPNIMKCJ_OFFSET))(this);
		}

		::OELKAFALAFH* CBJDNCLCJPI()
		{
			return ((::OELKAFALAFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_CBJDNCLCJPI_OFFSET))(this);
		}

		::JFDAODCOGBE* MABGGOOFLEJ()
		{
			return ((::JFDAODCOGBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_MABGGOOFLEJ_OFFSET))(this);
		}

		::EMKMGGFFECN* DPEBMCNBHIF()
		{
			return ((::EMKMGGFFECN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_DPEBMCNBHIF_OFFSET))(this);
		}

		::IAFFJPHCLFK* CPMEFLDOBJN()
		{
			return ((::IAFFJPHCLFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_CPMEFLDOBJN_OFFSET))(this);
		}

		::System::Boolean NBACLDMDJHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_NBACLDMDJHM_OFFSET))(this);
		}

		::RPG::Client::EInflatableFighterSide get_Side()
		{
			return ((::RPG::Client::EInflatableFighterSide(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_GET_SIDE_OFFSET))(this);
		}

		::System::Void set_Side(::RPG::Client::EInflatableFighterSide a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EInflatableFighterSide))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_SET_SIDE_OFFSET))(this, a1);
		}

		::OELKAFALAFH_EWindowType get_CurrentWindow()
		{
			return ((::OELKAFALAFH_EWindowType(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_GET_CURRENTWINDOW_OFFSET))(this);
		}

		::System::Void set_CurrentWindow(::OELKAFALAFH_EWindowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::OELKAFALAFH_EWindowType))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_SET_CURRENTWINDOW_OFFSET))(this, a1);
		}

		::System::Int32 FFICHBCNMLP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKMEPLIBJ_FFICHBCNMLP_OFFSET))(this);
		}

	};
