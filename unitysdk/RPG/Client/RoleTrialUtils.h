#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROLETRIALUTILS_CANSTARTROLETRIAL_OFFSET UNITYSDK_OFFSET(0x1AD10EB0)
#define RPG_CLIENT_ROLETRIALUTILS_GETACTIVITYAVATARDEMOSTAGES_OFFSET UNITYSDK_OFFSET(0x1AD10E30)
#define RPG_CLIENT_ROLETRIALUTILS_GETSORTEDAVATARDEMOLIST_OFFSET UNITYSDK_OFFSET(0x1AD10760)
#define RPG_CLIENT_ROLETRIALUTILS_ISAVATARDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x1AD110A0)
#define RPG_CLIENT_ROLETRIALUTILS_ISAVATARNEEDSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x1AD110F0)
#define RPG_CLIENT_ROLETRIALUTILS_TRYGETCOLLABORATIONAVATARDEMOACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1AD10BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialUtils_TypeDefinitionIndex = 69832;

	class RoleTrialUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>* GetSortedAvatarDemoList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_GETSORTEDAVATARDEMOLIST_OFFSET))();
		}

		static ::System::UInt32 TryGetCollaborationAvatarDemoActivityID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_TRYGETCOLLABORATIONAVATARDEMOACTIVITYID_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetActivityAvatarDemoStages(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_GETACTIVITYAVATARDEMOSTAGES_OFFSET))(a1);
		}

		static ::System::Boolean CanStartRoleTrial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_CANSTARTROLETRIAL_OFFSET))();
		}

		static ::System::Boolean IsAvatarDisplayOnly(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_ISAVATARDISPLAYONLY_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarNeedShowEntrance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_ISAVATARNEEDSHOWENTRANCE_OFFSET))(a1);
		}

	};
}
