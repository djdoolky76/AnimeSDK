#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapNpcDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A0460)
#define BIDDFDEAEGB___C__DISPLAYCLASS46_0__ADDLOCALNPCDEF_B__0_OFFSET UNITYSDK_OFFSET(0xB4A20B0)

inline static constexpr unsigned int BIDDFDEAEGB___c__DisplayClass46_0_TypeDefinitionIndex = 62118;

	class BIDDFDEAEGB___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::RPG::Client::MapNpcDef* npcDef; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddLocalNpcDef_b__0(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS46_0__ADDLOCALNPCDEF_B__0_OFFSET))(this, a1);
		}

	};
