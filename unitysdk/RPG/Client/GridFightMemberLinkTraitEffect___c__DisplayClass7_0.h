#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightMemberLinkTraitEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC31D00)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__DISPLAYCLASS7_0__PLAYROLETRAITEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0x1CC34660)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberLinkTraitEffect___c__DisplayClass7_0_TypeDefinitionIndex = 67259;

	class GridFightMemberLinkTraitEffect___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightMemberLinkTraitEffect* __4__this; // 0x10
		::RPG::Client::GridFightEffectController* effectController; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* linkUIDs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayRoleTraitEffects_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__DISPLAYCLASS7_0__PLAYROLETRAITEFFECTS_B__0_OFFSET))(this);
		}

	};
}
