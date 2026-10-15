#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBehaviorFlagStateAction; }
namespace RPG::GameCore { class RtDamageConstConfig; }
namespace RPG::GameCore { class RtDefenceConst; }
namespace RPG::GameCore { class RtDefenceStageRow; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace RPG::GameCore { class RtDefenceValueIncreasement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTDEFENCECONST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2D6C0)
#define RPG_GAMECORE_RTDEFENCECONST_EEBKFHGJGOO_OFFSET UNITYSDK_OFFSET(0x1DA2D920)
#define RPG_GAMECORE_RTDEFENCECONST_ENGOBAPCMEB_OFFSET UNITYSDK_OFFSET(0x1DA2DC40)
#define RPG_GAMECORE_RTDEFENCECONST_EOAHEOKCMAF_OFFSET UNITYSDK_OFFSET(0x1DA2DC00)
#define RPG_GAMECORE_RTDEFENCECONST_GNKOBMDFBBK_OFFSET UNITYSDK_OFFSET(0x1DA2D830)
#define RPG_GAMECORE_RTDEFENCECONST_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x1DA2D790)
#define RPG_GAMECORE_RTDEFENCECONST_IGOAOHJBBLL_1_OFFSET UNITYSDK_OFFSET(0x1DA2DA70)
#define RPG_GAMECORE_RTDEFENCECONST_IGOAOHJBBLL_OFFSET UNITYSDK_OFFSET(0x1DA2D8A0)
#define RPG_GAMECORE_RTDEFENCECONST_LMEAHGFFMIB_OFFSET UNITYSDK_OFFSET(0x1DA2D810)
#define RPG_GAMECORE_RTDEFENCECONST_MOCKHCFOPFG_OFFSET UNITYSDK_OFFSET(0x1DA2DB90)
#define RPG_GAMECORE_RTDEFENCECONST_NIOILGPPIIJ_OFFSET UNITYSDK_OFFSET(0x1DA2DBC0)
#define RPG_GAMECORE_RTDEFENCECONST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2D230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceConst_TypeDefinitionIndex = 18062;

	class RtDefenceConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarIDMin; // 0x10
		::System::UInt32 AvatarIDMax; // 0x14
		::System::UInt32 MonsterIDMin; // 0x18
		::System::UInt32 MonsterIDMax; // 0x1C
		::System::UInt32 BaseID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint BaseHp; // 0x28
		::RPG::GameCore::FixPoint StartCoin; // 0x30
		::System::String* MainLevelGraphPath; // 0x38
		::Il2CppArray<::RPG::GameCore::RtDefenceStageRow*>* StageList; // 0x40
		::Il2CppArray<::RPG::GameCore::RtDefenceUnitRow*>* UnitList; // 0x48
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>* FlagActions; // 0x50
		::RPG::GameCore::RtDefenceValueIncreasement* SummonCost; // 0x58
		::RPG::GameCore::RtDefenceValueIncreasement* UpgradeCost; // 0x60
		::RPG::GameCore::RtDamageConstConfig* DamageConst; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RtDefenceUnitRow*>* _UnitRowDict; // 0x70
		static ::RPG::GameCore::RtDefenceConst** StaticGet_Config()
		{
			return (::RPG::GameCore::RtDefenceConst**)UnitySDK::FromName("RPG.GameCore", "RtDefenceConst")->GetStaticField(0x1990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceConst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceConst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void LMEAHGFFMIB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_LMEAHGFFMIB_OFFSET))();
		}

		static ::RPG::GameCore::RtDefenceStageRow* GNKOBMDFBBK(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RtDefenceStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_GNKOBMDFBBK_OFFSET))(a1);
		}

		::RPG::GameCore::RtDefenceUnitRow* IGOAOHJBBLL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RtDefenceUnitRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_IGOAOHJBBLL_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtDefenceUnitRow* IGOAOHJBBLL_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RtDefenceUnitRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_IGOAOHJBBLL_1_OFFSET))(this, a1, a2);
		}

		::System::Void EEBKFHGJGOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_EEBKFHGJGOO_OFFSET))(this);
		}

		static ::System::Boolean MOCKHCFOPFG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_MOCKHCFOPFG_OFFSET))(a1);
		}

		static ::System::Boolean NIOILGPPIIJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_NIOILGPPIIJ_OFFSET))(a1);
		}

		static ::System::Boolean EOAHEOKCMAF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_EOAHEOKCMAF_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint ENGOBAPCMEB(::RPG::GameCore::RtDefenceValueIncreasement* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::RtDefenceValueIncreasement*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_ENGOBAPCMEB_OFFSET))(a1, a2);
		}

	};
}
