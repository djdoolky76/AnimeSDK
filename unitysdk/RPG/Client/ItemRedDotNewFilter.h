#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
namespace RPG::Client { class ItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMREDDOTNEWFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC2200)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDC2180)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xDDC2130)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0xDDC1330)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__CONTAINSITEMTYPE_OFFSET UNITYSDK_OFFSET(0xDDC1E90)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__UPDATEREDDOTNEW_OFFSET UNITYSDK_OFFSET(0xDDC1F50)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemRedDotNewFilter_TypeDefinitionIndex = 68781;

	class ItemRedDotNewFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* RedDotItemNewKeys; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _ContainsItemType(::RPG::GameCore::ItemSubType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemSubType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER__CONTAINSITEMTYPE_OFFSET))(this, a1);
		}

		::System::Void _UpdateRedDotNew(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER__UPDATEREDDOTNEW_OFFSET))(this, a1);
		}

	};
}
