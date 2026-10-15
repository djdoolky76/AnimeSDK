#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS88_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE005760)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS88_0__SHOWCOLLECTIONEXHIBITIONPAGEFROMCOLLECTIONBOOTHPROPPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xE011CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass88_0_TypeDefinitionIndex = 67805;

	class RogueTournModule___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::UInt32 collectionBoothID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS88_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowCollectionExhibitionPageFromCollectionBoothPropPromised_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS88_0__SHOWCOLLECTIONEXHIBITIONPAGEFROMCOLLECTIONBOOTHPROPPROMISED_B__0_OFFSET))(this);
		}

	};
}
