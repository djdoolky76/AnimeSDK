#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CakeRaceHandbookCatItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC91E110)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC91E150)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C___SYNCLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xC91E160)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookInfo___c_TypeDefinitionIndex = 63047;

	class CakeRaceHandbookInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::CakeRaceHandbookCatItem*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceHandbookCatItem*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65970);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncList_b__11_0(::RPG::Client::CakeRaceHandbookCatItem* a1, ::RPG::Client::CakeRaceHandbookCatItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C___SYNCLIST_B__11_0_OFFSET))(this, a1, a2);
		}

	};
}
