#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class EONDIOOGHIA;
namespace System { class String; }

#define CPKHHHPKFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C51E940)
#define CPKHHHPKFBN_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1C51E900)
#define CPKHHHPKFBN_GET_ENTRANCEBIGICONPATH_OFFSET UNITYSDK_OFFSET(0x1C51E8C0)
#define CPKHHHPKFBN_GET_ENTRANCESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C51E8E0)
#define CPKHHHPKFBN_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C51E7E0)
#define CPKHHHPKFBN_GET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0x1C51E880)
#define CPKHHHPKFBN_GET_LEVELEASY_OFFSET UNITYSDK_OFFSET(0x1C51E840)
#define CPKHHHPKFBN_GET_LEVELHARD_OFFSET UNITYSDK_OFFSET(0x1C51E860)
#define CPKHHHPKFBN_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1C51E800)
#define CPKHHHPKFBN_GET_PERFECTREMAINROUND_OFFSET UNITYSDK_OFFSET(0x1C51E8A0)
#define CPKHHHPKFBN_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C51E820)
#define CPKHHHPKFBN_GET_TUTORIALGUIDEID_OFFSET UNITYSDK_OFFSET(0x1C51E920)
#define CPKHHHPKFBN_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1C51E910)
#define CPKHHHPKFBN_SET_ENTRANCEBIGICONPATH_OFFSET UNITYSDK_OFFSET(0x1C51E8D0)
#define CPKHHHPKFBN_SET_ENTRANCESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C51E8F0)
#define CPKHHHPKFBN_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C51E7F0)
#define CPKHHHPKFBN_SET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0x1C51E890)
#define CPKHHHPKFBN_SET_LEVELEASY_OFFSET UNITYSDK_OFFSET(0x1C51E850)
#define CPKHHHPKFBN_SET_LEVELHARD_OFFSET UNITYSDK_OFFSET(0x1C51E870)
#define CPKHHHPKFBN_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1C51E810)
#define CPKHHHPKFBN_SET_PERFECTREMAINROUND_OFFSET UNITYSDK_OFFSET(0x1C51E8B0)
#define CPKHHHPKFBN_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C51E830)
#define CPKHHHPKFBN_SET_TUTORIALGUIDEID_OFFSET UNITYSDK_OFFSET(0x1C51E930)

inline static constexpr unsigned int CPKHHHPKFBN_TypeDefinitionIndex = 41912;

	class CPKHHHPKFBN : public ::System::Object
	{
	public:
		::EONDIOOGHIA* _LevelEasy_k__BackingField; // 0x10
		::EONDIOOGHIA* _LevelHard_k__BackingField; // 0x18
		::System::String* _EntranceSmallIconPath_k__BackingField; // 0x20
		::System::String* _EntranceBigIconPath_k__BackingField; // 0x28
		::RPG::Client::TextID _Title_k__BackingField; // 0x30
		::System::UInt32 _Order_k__BackingField; // 0x40
		::System::UInt32 _LeadingRoleID_k__BackingField; // 0x44
		::System::UInt32 _TutorialGuideID_k__BackingField; // 0x48
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x4C
		::System::UInt32 _ID_k__BackingField; // 0x50
		::System::UInt32 _PerfectRemainRound_k__BackingField; // 0x54
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
