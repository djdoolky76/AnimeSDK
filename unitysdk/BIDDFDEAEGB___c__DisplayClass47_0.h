#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapNpcDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS47_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB49C6B0)
#define BIDDFDEAEGB___C__DISPLAYCLASS47_0__ADDLOCALNPCMONSTERDEF_B__0_OFFSET UNITYSDK_OFFSET(0xB49E040)

inline static constexpr unsigned int BIDDFDEAEGB___c__DisplayClass47_0_TypeDefinitionIndex = 62119;

	class BIDDFDEAEGB___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::RPG::Client::MapNpcDef* npcMonsterDef; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS47_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddLocalNpcMonsterDef_b__0(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS47_0__ADDLOCALNPCMONSTERDEF_B__0_OFFSET))(this, a1);
		}

	};
