#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6F60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass53_0_TypeDefinitionIndex = 65983;

	class GridFightEffectController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18
		::System::Int32 remain; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

	};
}
