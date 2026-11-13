#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }

#define RPG_CLIENT_FARMUTILS___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAC7D0)
#define RPG_CLIENT_FARMUTILS___C__DISPLAYCLASS11_0__ISDROPPING_B__0_OFFSET UNITYSDK_OFFSET(0x1CBAC950)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmUtils___c__DisplayClass11_0_TypeDefinitionIndex = 65428;

	class FarmUtils___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 material; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsDropping_b__0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS___C__DISPLAYCLASS11_0__ISDROPPING_B__0_OFFSET))(this, a1);
		}

	};
}
