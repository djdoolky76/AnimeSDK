#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightRoleTraitEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS104_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6800)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS104_0___PLAYMEMBERLINKROLETRAITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB6810)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass104_0_TypeDefinitionIndex = 65968;

	class GridFightEffectController___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleTraitEffect*>* effects; // 0x18
		::RPG::Client::GridFightRoleTraitEffect* effect; // 0x20
		::System::UInt32 traitEffectID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS104_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayMemberLinkRoleTraitEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS104_0___PLAYMEMBERLINKROLETRAITEFFECT_B__0_OFFSET))(this);
		}

	};
}
