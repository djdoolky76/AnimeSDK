#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TAUtils { class MaterialPropertiesCollection_Property; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE18D090)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION___C__DISPLAYCLASS5_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0xE18FD80)

namespace RPG::Client::TAUtils
{
	class MaterialPropertiesCollection___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Int32 propertyID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::RPG::Client::TAUtils::MaterialPropertiesCollection_Property* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION___C__DISPLAYCLASS5_0__REMOVE_B__0_OFFSET))(this, a1);
		}

	};
}
