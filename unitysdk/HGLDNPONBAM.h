#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterPropertyType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCounterType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FODPNNIJCJI;
class GKMKOMHLGDC;
class HGLDNPONBAM_IJCPNDEKHKF;
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }

#define HGLDNPONBAM_AGJKJJFJKOI_OFFSET UNITYSDK_OFFSET(0x1C453BD0)
#define HGLDNPONBAM_CCPIHJFNMEL_OFFSET UNITYSDK_OFFSET(0x1C455910)
#define HGLDNPONBAM_CHNGBCDOEIG_OFFSET UNITYSDK_OFFSET(0x1C454C40)
#define HGLDNPONBAM_CJOGBLCLPLP_OFFSET UNITYSDK_OFFSET(0x1C4541B0)
#define HGLDNPONBAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C455E60)
#define HGLDNPONBAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4545E0)
#define HGLDNPONBAM_EBMFGNFFIEA_OFFSET UNITYSDK_OFFSET(0x1C453120)
#define HGLDNPONBAM_FDIJNKBNLIE_OFFSET UNITYSDK_OFFSET(0x1C455E50)
#define HGLDNPONBAM_GET_ACTIVEUNITTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C455E30)
#define HGLDNPONBAM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C455DD0)
#define HGLDNPONBAM_GET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x1C455DB0)
#define HGLDNPONBAM_GET_SCEPTERROW_OFFSET UNITYSDK_OFFSET(0x1C455DF0)
#define HGLDNPONBAM_GET_SCEPTERSTATE_OFFSET UNITYSDK_OFFSET(0x1C455E10)
#define HGLDNPONBAM_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x1C455430)
#define HGLDNPONBAM_HHPFNDFBJLP_OFFSET UNITYSDK_OFFSET(0x1C455320)
#define HGLDNPONBAM_IALDEDGPBAL_OFFSET UNITYSDK_OFFSET(0x1C4557F0)
#define HGLDNPONBAM_IHCFFNABEMK_OFFSET UNITYSDK_OFFSET(0x1C454F80)
#define HGLDNPONBAM_IMALICBFKKC_OFFSET UNITYSDK_OFFSET(0x1C4554B0)
#define HGLDNPONBAM_IMNPLMHDHOA_OFFSET UNITYSDK_OFFSET(0x1C454CE0)
#define HGLDNPONBAM_JFKEBDJDJDK_OFFSET UNITYSDK_OFFSET(0x1C454690)
#define HGLDNPONBAM_JODBHOFJNOF_OFFSET UNITYSDK_OFFSET(0x1C454BE0)
#define HGLDNPONBAM_KPPJNIEKPFK_OFFSET UNITYSDK_OFFSET(0x1C453560)
#define HGLDNPONBAM_MEOOALCMFNA_OFFSET UNITYSDK_OFFSET(0x1C455D50)
#define HGLDNPONBAM_NEALCIOGMLP_OFFSET UNITYSDK_OFFSET(0x1C454850)
#define HGLDNPONBAM_NHLKEALIKKE_OFFSET UNITYSDK_OFFSET(0x1C455650)
#define HGLDNPONBAM_OEGLCDPHMOB_OFFSET UNITYSDK_OFFSET(0x1C454DB0)
#define HGLDNPONBAM_OMPFMLGFNPI_OFFSET UNITYSDK_OFFSET(0x1C4550A0)
#define HGLDNPONBAM_PHIIIIEBGNG_OFFSET UNITYSDK_OFFSET(0x1C454A40)
#define HGLDNPONBAM_SET_ACTIVEUNITTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C455E40)
#define HGLDNPONBAM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C455DE0)
#define HGLDNPONBAM_SET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x1C455DC0)
#define HGLDNPONBAM_SET_SCEPTERROW_OFFSET UNITYSDK_OFFSET(0x1C455E00)
#define HGLDNPONBAM_SET_SCEPTERSTATE_OFFSET UNITYSDK_OFFSET(0x1C455E20)
#define HGLDNPONBAM_TICK_OFFSET UNITYSDK_OFFSET(0x1C454630)

inline static constexpr unsigned int HGLDNPONBAM_TypeDefinitionIndex = 58890;

	class HGLDNPONBAM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::FODPNNIJCJI* JJLDMANFGFG; // 0x18
		::Il2CppArray<::GKMKOMHLGDC*>* KGLOIHNOFCM; // 0x20
		::Il2CppArray<::System::Object*>* KHFBEGBEDAN; // 0x28
		::HGLDNPONBAM_IJCPNDEKHKF* OLPKAFKGJLC; // 0x30
		::RPG::GameCore::RogueMagicScepterRow* _ScepterRow_k__BackingField; // 0x38
		::RPG::GameCore::TurnBasedAbilityComponent* POLIHAMFHCI; // 0x40
		::System::UInt32 _Level_k__BackingField; // 0x48
		::RPG::GameCore::TaskState _ScepterState_k__BackingField; // 0x4C
		::System::UInt32 _ActiveUnitTriggerCount_k__BackingField; // 0x50
		::System::Boolean OICPIBMDKDA; // 0x54
		::System::Byte _padding0[0x3];
		::System::UInt32 _ScepterID_k__BackingField; // 0x58
		static ::RPG::GameCore::BattleRogueMagicData_Scepter** StaticGet_NILMNDJNOAA()
		{
			return (::RPG::GameCore::BattleRogueMagicData_Scepter**)UnitySDK::FromName("", "HGLDNPONBAM")->GetStaticField(0x69360);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_CTOR_OFFSET))(this);
		}

		::System::Void EBMFGNFFIEA(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + HGLDNPONBAM_EBMFGNFFIEA_OFFSET))(this, a1);
		}

		::System::Void KPPJNIEKPFK(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + HGLDNPONBAM_KPPJNIEKPFK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGLDNPONBAM_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskState NEALCIOGMLP()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_NEALCIOGMLP_OFFSET))(this);
		}

		::System::Void PHIIIIEBGNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_PHIIIIEBGNG_OFFSET))(this);
		}

		::System::Void OEGLCDPHMOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_OEGLCDPHMOB_OFFSET))(this);
		}

		::System::Int32 IHCFFNABEMK(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HGLDNPONBAM_IHCFFNABEMK_OFFSET))(this, a1, a2);
		}

		::System::Void HHPFNDFBJLP(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + HGLDNPONBAM_HHPFNDFBJLP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint HAIEJENPAMD(::RPG::GameCore::RogueMagicScepterPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType))((::PBYTE)hIl2Cpp + HGLDNPONBAM_HAIEJENPAMD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint IMALICBFKKC(::RPG::GameCore::RogueMagicUnitCounterType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RogueMagicUnitCounterType))((::PBYTE)hIl2Cpp + HGLDNPONBAM_IMALICBFKKC_OFFSET))(this, a1);
		}

		::System::Void JFKEBDJDJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_JFKEBDJDJDK_OFFSET))(this);
		}

		::System::Void NHLKEALIKKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_NHLKEALIKKE_OFFSET))(this);
		}

		::System::Boolean JODBHOFJNOF(::HGLDNPONBAM_IJCPNDEKHKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGLDNPONBAM_IJCPNDEKHKF*))((::PBYTE)hIl2Cpp + HGLDNPONBAM_JODBHOFJNOF_OFFSET))(this, a1);
		}

		::System::Void AGJKJJFJKOI(::HGLDNPONBAM_IJCPNDEKHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLDNPONBAM_IJCPNDEKHKF*))((::PBYTE)hIl2Cpp + HGLDNPONBAM_AGJKJJFJKOI_OFFSET))(this, a1);
		}

		::System::Void CHNGBCDOEIG(::HGLDNPONBAM_IJCPNDEKHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLDNPONBAM_IJCPNDEKHKF*))((::PBYTE)hIl2Cpp + HGLDNPONBAM_CHNGBCDOEIG_OFFSET))(this, a1);
		}

		::System::Void IMNPLMHDHOA(::HGLDNPONBAM_IJCPNDEKHKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLDNPONBAM_IJCPNDEKHKF*))((::PBYTE)hIl2Cpp + HGLDNPONBAM_IMNPLMHDHOA_OFFSET))(this, a1);
		}

		::System::Void CJOGBLCLPLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_CJOGBLCLPLP_OFFSET))(this);
		}

		::System::Void IALDEDGPBAL(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HGLDNPONBAM_IALDEDGPBAL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CCPIHJFNMEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_CCPIHJFNMEL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint OMPFMLGFNPI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_OMPFMLGFNPI_OFFSET))(this);
		}

		::System::Boolean MEOOALCMFNA(::RPG::GameCore::RogueMagicScepterPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType))((::PBYTE)hIl2Cpp + HGLDNPONBAM_MEOOALCMFNA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScepterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_GET_SCEPTERID_OFFSET))(this);
		}

		::System::Void set_ScepterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGLDNPONBAM_SET_SCEPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGLDNPONBAM_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicScepterRow* get_ScepterRow()
		{
			return ((::RPG::GameCore::RogueMagicScepterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_GET_SCEPTERROW_OFFSET))(this);
		}

		::System::Void set_ScepterRow(::RPG::GameCore::RogueMagicScepterRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterRow*))((::PBYTE)hIl2Cpp + HGLDNPONBAM_SET_SCEPTERROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskState get_ScepterState()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_GET_SCEPTERSTATE_OFFSET))(this);
		}

		::System::Void set_ScepterState(::RPG::GameCore::TaskState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + HGLDNPONBAM_SET_SCEPTERSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActiveUnitTriggerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_GET_ACTIVEUNITTRIGGERCOUNT_OFFSET))(this);
		}

		::System::Void set_ActiveUnitTriggerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGLDNPONBAM_SET_ACTIVEUNITTRIGGERCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean FDIJNKBNLIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_FDIJNKBNLIE_OFFSET))(this);
		}

	};
