#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFKKEDPMKKF;
namespace RPG::Client { class ActivitySwordTrainingEndingHIntInfo; }
namespace RPG::GameCore { class SwordTrainingStoryLineRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xCF07780)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF07820)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET_EXAMDAYLIST_OFFSET UNITYSDK_OFFSET(0xCF07A30)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xCF07A10)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCF07A50)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_SET_EXAMDAYLIST_OFFSET UNITYSDK_OFFSET(0xCF07A40)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xCF07A20)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO__INITEXAMDAYS_OFFSET UNITYSDK_OFFSET(0xCF07830)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingEndingHIntInfo_TypeDefinitionIndex = 63354;

	class ActivitySwordTrainingEndingHIntInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ExamDayList_k__BackingField; // 0x10
		::System::UInt32 _StoryLineID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivitySwordTrainingEndingHIntInfo* Create(::HFKKEDPMKKF* a1)
		{
			return ((::RPG::Client::ActivitySwordTrainingEndingHIntInfo*(*)(::HFKKEDPMKKF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_SET_STORYLINEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ExamDayList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET_EXAMDAYLIST_OFFSET))(this);
		}

		::System::Void set_ExamDayList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_SET_EXAMDAYLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingStoryLineRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingStoryLineRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO_GET__ROW_OFFSET))(this);
		}

		::System::Void _InitExamDays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGENDINGHINTINFO__INITEXAMDAYS_OFFSET))(this);
		}

	};
}
