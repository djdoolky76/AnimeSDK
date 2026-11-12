#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class SwordTrainingMoodRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGMOODDATA_ADDMOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xEC20630)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEC20BE0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GETDISPLAYMOODVALUE_OFFSET UNITYSDK_OFFSET(0xEC206D0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GETEFFECTTIPS_OFFSET UNITYSDK_OFFSET(0xEC20840)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GETMOODROW_OFFSET UNITYSDK_OFFSET(0xEC20770)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GET_MOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xEC20BC0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_GET_MOODVALUE_OFFSET UNITYSDK_OFFSET(0xEC20BA0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_INIT_OFFSET UNITYSDK_OFFSET(0xEC1AB80)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SETMOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xEC1A970)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SETMOODVALUE_OFFSET UNITYSDK_OFFSET(0xEC1C5A0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SET_MOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xEC20BD0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SET_MOODVALUE_OFFSET UNITYSDK_OFFSET(0xEC20BB0)
#define RPG_CLIENT_SWORDTRAININGMOODDATA_SUBMOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xEC20680)
#define RPG_CLIENT_SWORDTRAININGMOODDATA__INITMOOD_OFFSET UNITYSDK_OFFSET(0xEC20950)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingMoodData_TypeDefinitionIndex = 63394;

	class SwordTrainingMoodData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _Moodintervals; // 0x10
		::System::UInt32 _MoodMaxValue_k__BackingField; // 0x18
		::System::UInt32 _MoodValue_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_INIT_OFFSET))(this);
		}

		::System::Void SetMoodValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SETMOODVALUE_OFFSET))(this, a1);
		}

		::System::Void AddMoodMaxValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_ADDMOODMAXVALUE_OFFSET))(this, a1);
		}

		::System::Void SubMoodMaxValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SUBMOODMAXVALUE_OFFSET))(this, a1);
		}

		::System::Void SetMoodMaxValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SETMOODMAXVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 GetDisplayMoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GETDISPLAYMOODVALUE_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingMoodRow* GetMoodRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingMoodRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GETMOODROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetEffectTips(::RPG::GameCore::SwordTrainingMoodRow* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::SwordTrainingMoodRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GETEFFECTTIPS_OFFSET))(this, a1);
		}

		::System::Void _InitMood()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA__INITMOOD_OFFSET))(this);
		}

		::System::UInt32 get_MoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GET_MOODVALUE_OFFSET))(this);
		}

		::System::Void set_MoodValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SET_MOODVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MoodMaxValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_GET_MOODMAXVALUE_OFFSET))(this);
		}

		::System::Void set_MoodMaxValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMOODDATA_SET_MOODMAXVALUE_OFFSET))(this, a1);
		}

	};
}
