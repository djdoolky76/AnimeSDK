#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapEntityDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB498080)
#define BIDDFDEAEGB___C__DISPLAYCLASS33_0__REMOVESERVERENTITYDEF_B__0_OFFSET UNITYSDK_OFFSET(0xB49DEF0)

inline static constexpr unsigned int BIDDFDEAEGB___c__DisplayClass33_0_TypeDefinitionIndex = 62111;

	class BIDDFDEAEGB___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::RPG::Client::MapEntityDef* entityDef; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveServerEntityDef_b__0(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS33_0__REMOVESERVERENTITYDEF_B__0_OFFSET))(this, a1);
		}

	};
