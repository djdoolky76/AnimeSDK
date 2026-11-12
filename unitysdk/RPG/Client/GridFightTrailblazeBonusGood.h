#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGood.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGoodDisplayType.h"
class AMNAMDLMADK;
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB6AD0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_GET_BONUSDROPLIST_OFFSET UNITYSDK_OFFSET(0xDCB6C70)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_GET_DISPLAYOBJ_OFFSET UNITYSDK_OFFSET(0xDCB6DF0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xDCB6C80)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_RESOLVECONSUMABLEDISPLAYOBJ_OFFSET UNITYSDK_OFFSET(0xDCB7130)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_RESOLVEDISPLAYOBJ_OFFSET UNITYSDK_OFFSET(0xDCB6EE0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_RESOLVEDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xDCB6D00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeBonusGood_TypeDefinitionIndex = 67282;

	class GridFightTrailblazeBonusGood : public ::RPG::Client::GridFightTrailblazeGood
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* _BonusDropList_k__BackingField; // 0x50
		::System::Void _ctor(::AMNAMDLMADK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AMNAMDLMADK*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* get_BonusDropList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_GET_BONUSDROPLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightTrailblazeGoodDisplayType get_DisplayType()
		{
			return ((::RPG::Client::GridFightTrailblazeGoodDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Object* get_DisplayObj()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_GET_DISPLAYOBJ_OFFSET))(this);
		}

		static ::RPG::Client::GridFightTrailblazeGoodDisplayType ResolveDisplayType(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::RPG::Client::GridFightTrailblazeGoodDisplayType(*)(::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_RESOLVEDISPLAYTYPE_OFFSET))(a1);
		}

		static ::System::Object* ResolveDisplayObj(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Object*(*)(::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_RESOLVEDISPLAYOBJ_OFFSET))(a1);
		}

		static ::System::Object* ResolveConsumableDisplayObj(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Object*(*)(::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSGOOD_RESOLVECONSUMABLEDISPLAYOBJ_OFFSET))(a1);
		}

	};
}
