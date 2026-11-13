#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityReCollectionItemData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8BF200)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BF240)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA___C___SORTLIST_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C8BF250)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityReCollectionData___c_TypeDefinitionIndex = 63307;

	class ActivityReCollectionData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityReCollectionItemData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityReCollectionItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38D00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortList_b__7_0(::RPG::Client::ActivityReCollectionItemData* a1, ::RPG::Client::ActivityReCollectionItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityReCollectionItemData*, ::RPG::Client::ActivityReCollectionItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA___C___SORTLIST_B__7_0_OFFSET))(this, a1, a2);
		}

	};
}
