#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightOrbEntityData; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1CB300)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__DISPLAYCLASS11_0__GETORBCOUNTBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xD1CBF10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData___c__DisplayClass11_0_TypeDefinitionIndex = 64447;

	class GridFightOrbServerData___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightOrbType type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOrbCountByType_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__DISPLAYCLASS11_0__GETORBCOUNTBYTYPE_B__0_OFFSET))(this, a1);
		}

	};
}
