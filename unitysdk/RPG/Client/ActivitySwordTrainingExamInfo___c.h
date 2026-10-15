#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5B4200)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5B4240)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__STARTEXAM_B__4_0_OFFSET UNITYSDK_OFFSET(0xC5B4250)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamInfo___c_TypeDefinitionIndex = 61946;

	class ActivitySwordTrainingExamInfo___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3E850);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3E858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C_CTOR_OFFSET))(this);
		}

		::System::Void _StartExam_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMINFO___C__STARTEXAM_B__4_0_OFFSET))(this);
		}

	};
}
