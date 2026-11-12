#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPetPalEffect; }

#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC262B0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY___C__DISPLAYCLASS11_0___FETCHPETPALEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDC26310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPetPalEffectRepository___c__DisplayClass11_0_TypeDefinitionIndex = 66728;

	class GridFightPetPalEffectRepository___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 effID; // 0x10
		::System::UInt32 petPalID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FetchPetPalEffect_b__0(::RPG::Client::GridFightPetPalEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPetPalEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY___C__DISPLAYCLASS11_0___FETCHPETPALEFFECT_B__0_OFFSET))(this, a1);
		}

	};
}
