#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapPropDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS48_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A0A40)
#define BIDDFDEAEGB___C__DISPLAYCLASS48_0__ADDLOCALPROPDEF_B__0_OFFSET UNITYSDK_OFFSET(0xB4A2110)

inline static constexpr unsigned int BIDDFDEAEGB___c__DisplayClass48_0_TypeDefinitionIndex = 62120;

	class BIDDFDEAEGB___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::RPG::Client::MapPropDef* mapPropDef; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS48_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddLocalPropDef_b__0(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS48_0__ADDLOCALPROPDEF_B__0_OFFSET))(this, a1);
		}

	};
