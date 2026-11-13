#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CED67F0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED6D20)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CED6750)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1CED63B0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONITEMCOMPOSEISNEWREFRESHED_OFFSET UNITYSDK_OFFSET(0x1CED69D0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONITEMCOMPOSEMAINTYPEREDDOTREFRESHED_OFFSET UNITYSDK_OFFSET(0x1CED6A20)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONREFRESHCOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET UNITYSDK_OFFSET(0x1CED6BA0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHISNEW_OFFSET UNITYSDK_OFFSET(0x1CED6400)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHMAINTYPEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1CED6BF0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHMAINTYPEREDDOT_OFFSET UNITYSDK_OFFSET(0x1CED6A70)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeRedDotFilter_TypeDefinitionIndex = 68779;

	class ItemComposeRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ItemComposeNewMainTypeUnlockList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* ItemComposeTypeIsNewList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* ItemComposeIsNewList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnItemComposeIsNewRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONITEMCOMPOSEISNEWREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _OnItemComposeMainTypeRedDotRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONITEMCOMPOSEMAINTYPEREDDOTREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshComposeFormulaUnlockTabRedDotRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONREFRESHCOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _RefreshIsNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHISNEW_OFFSET))(this);
		}

		::System::Void _RefreshMainTypeRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHMAINTYPEREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshMainTypeIsNewRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHMAINTYPEISNEWREDDOT_OFFSET))(this);
		}

	};
}
