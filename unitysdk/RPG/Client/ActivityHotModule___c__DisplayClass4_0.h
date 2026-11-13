#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDKGIMLKJHA;
namespace RPG::Client { class ActivityHotModule; }
namespace RPG::Client { class IActivityHotData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D126760)
#define RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__GETACTIVITYHOTDATAS_B__0_OFFSET UNITYSDK_OFFSET(0x1D12C770)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotModule___c__DisplayClass4_0_TypeDefinitionIndex = 62925;

	class ActivityHotModule___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHotModule* __4__this; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* activityHotDatas; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*>* _GetActivityHotDatas_b__0(::NDKGIMLKJHA* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*>*(*)(::PVOID, ::NDKGIMLKJHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__GETACTIVITYHOTDATAS_B__0_OFFSET))(this, a1);
		}

	};
}
