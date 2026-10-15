#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class EONDIOOGHIA;
namespace System { class String; }

#define CPKHHHPKFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54CE00)
#define CPKHHHPKFBN_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1C54CDC0)
#define CPKHHHPKFBN_GET_ENTRANCEBIGICONPATH_OFFSET UNITYSDK_OFFSET(0x1C54CD80)
#define CPKHHHPKFBN_GET_ENTRANCESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C54CDA0)
#define CPKHHHPKFBN_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C54CCA0)
#define CPKHHHPKFBN_GET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0x1C54CD40)
#define CPKHHHPKFBN_GET_LEVELEASY_OFFSET UNITYSDK_OFFSET(0x1C54CD00)
#define CPKHHHPKFBN_GET_LEVELHARD_OFFSET UNITYSDK_OFFSET(0x1C54CD20)
#define CPKHHHPKFBN_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1C54CCC0)
#define CPKHHHPKFBN_GET_PERFECTREMAINROUND_OFFSET UNITYSDK_OFFSET(0x1C54CD60)
#define CPKHHHPKFBN_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C54CCE0)
#define CPKHHHPKFBN_GET_TUTORIALGUIDEID_OFFSET UNITYSDK_OFFSET(0x1C54CDE0)
#define CPKHHHPKFBN_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1C54CDD0)
#define CPKHHHPKFBN_SET_ENTRANCEBIGICONPATH_OFFSET UNITYSDK_OFFSET(0x1C54CD90)
#define CPKHHHPKFBN_SET_ENTRANCESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C54CDB0)
#define CPKHHHPKFBN_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C54CCB0)
#define CPKHHHPKFBN_SET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0x1C54CD50)
#define CPKHHHPKFBN_SET_LEVELEASY_OFFSET UNITYSDK_OFFSET(0x1C54CD10)
#define CPKHHHPKFBN_SET_LEVELHARD_OFFSET UNITYSDK_OFFSET(0x1C54CD30)
#define CPKHHHPKFBN_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1C54CCD0)
#define CPKHHHPKFBN_SET_PERFECTREMAINROUND_OFFSET UNITYSDK_OFFSET(0x1C54CD70)
#define CPKHHHPKFBN_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C54CCF0)
#define CPKHHHPKFBN_SET_TUTORIALGUIDEID_OFFSET UNITYSDK_OFFSET(0x1C54CDF0)

	class CPKHHHPKFBN : public ::System::Object
	{
	public:
		::System::String* _EntranceBigIconPath_k__BackingField; // 0x10
		::System::String* _EntranceSmallIconPath_k__BackingField; // 0x18
		::EONDIOOGHIA* _LevelHard_k__BackingField; // 0x20
		::EONDIOOGHIA* _LevelEasy_k__BackingField; // 0x28
		::System::UInt32 _Order_k__BackingField; // 0x30
		::System::UInt32 _TutorialGuideID_k__BackingField; // 0x34
		::System::UInt32 _LeadingRoleID_k__BackingField; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x3C
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x40
		::System::UInt32 _PerfectRemainRound_k__BackingField; // 0x44
		::RPG::Client::TextID _Title_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_ORDER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_TITLE_OFFSET))(this, a1);
		}

		::EONDIOOGHIA* get_LevelEasy()
		{
			return ((::EONDIOOGHIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_LEVELEASY_OFFSET))(this);
		}

		::System::Void set_LevelEasy(::EONDIOOGHIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EONDIOOGHIA*))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_LEVELEASY_OFFSET))(this, a1);
		}

		::EONDIOOGHIA* get_LevelHard()
		{
			return ((::EONDIOOGHIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_LEVELHARD_OFFSET))(this);
		}

		::System::Void set_LevelHard(::EONDIOOGHIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EONDIOOGHIA*))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_LEVELHARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeadingRoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_LEADINGROLEID_OFFSET))(this);
		}

		::System::Void set_LeadingRoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_LEADINGROLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PerfectRemainRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_PERFECTREMAINROUND_OFFSET))(this);
		}

		::System::Void set_PerfectRemainRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_PERFECTREMAINROUND_OFFSET))(this, a1);
		}

		::System::String* get_EntranceBigIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_ENTRANCEBIGICONPATH_OFFSET))(this);
		}

		::System::Void set_EntranceBigIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_ENTRANCEBIGICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_EntranceSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_ENTRANCESMALLICONPATH_OFFSET))(this);
		}

		::System::Void set_EntranceSmallIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_ENTRANCESMALLICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Void set_ActivityModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_ACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TutorialGuideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_GET_TUTORIALGUIDEID_OFFSET))(this);
		}

		::System::Void set_TutorialGuideID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKHHHPKFBN_SET_TUTORIALGUIDEID_OFFSET))(this, a1);
		}

	};
