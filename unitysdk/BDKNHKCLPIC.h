#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/RPG/Client/ExpeditionBattleReportSourceType.h"
#include "unitysdk/System/Object.h"
class LBPCONKMBIK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDKNHKCLPIC_CTOR_OFFSET UNITYSDK_OFFSET(0x162FD8E0)
#define BDKNHKCLPIC_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x162FD580)
#define BDKNHKCLPIC_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x162FD540)
#define BDKNHKCLPIC_GET_ROUTERECORDMAP_OFFSET UNITYSDK_OFFSET(0x162FD5A0)
#define BDKNHKCLPIC_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x162FD560)
#define BDKNHKCLPIC_MPLBEHHLFJI_OFFSET UNITYSDK_OFFSET(0x162FD5B0)
#define BDKNHKCLPIC_OFJKCPKFEAG_OFFSET UNITYSDK_OFFSET(0x162FD7B0)
#define BDKNHKCLPIC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x162FD840)
#define BDKNHKCLPIC_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x162FD590)
#define BDKNHKCLPIC_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x162FD550)
#define BDKNHKCLPIC_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x162FD570)

inline static constexpr unsigned int BDKNHKCLPIC_TypeDefinitionIndex = 63837;

	class BDKNHKCLPIC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LBPCONKMBIK*>* _RouteRecordMap_k__BackingField; // 0x10
		::System::Boolean _IsNewRecord_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::ExpeditionBattleReportSourceType _SourceType_k__BackingField; // 0x1C
		::System::UInt32 _MapID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_SET_MAPID_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleReportSourceType get_SourceType()
		{
			return ((::RPG::Client::ExpeditionBattleReportSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::RPG::Client::ExpeditionBattleReportSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleReportSourceType))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_GET_ISNEWRECORD_OFFSET))(this);
		}

		::System::Void set_IsNewRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_SET_ISNEWRECORD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LBPCONKMBIK*>* get_RouteRecordMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LBPCONKMBIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_GET_ROUTERECORDMAP_OFFSET))(this);
		}

		::System::UInt32 MPLBEHHLFJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_MPLBEHHLFJI_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRank OFJKCPKFEAG()
		{
			return ((::RPG::Client::ExpeditionBattleRank(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_OFJKCPKFEAG_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKNHKCLPIC_PJPFIHFAHGO_OFFSET))(this);
		}

	};
