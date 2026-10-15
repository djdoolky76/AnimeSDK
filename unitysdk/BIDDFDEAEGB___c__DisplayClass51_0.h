#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapNpcDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A1040)
#define BIDDFDEAEGB___C__DISPLAYCLASS51_0__HASLOCALNPC_B__0_OFFSET UNITYSDK_OFFSET(0xB4A2140)

	class BIDDFDEAEGB___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::UInt32 instanceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasLocalNPC_b__0(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS51_0__HASLOCALNPC_B__0_OFFSET))(this, a1);
		}

	};
