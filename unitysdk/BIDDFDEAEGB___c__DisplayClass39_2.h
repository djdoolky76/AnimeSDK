#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapPropDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS39_2_CTOR_OFFSET UNITYSDK_OFFSET(0xB49BB20)
#define BIDDFDEAEGB___C__DISPLAYCLASS39_2___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__2_OFFSET UNITYSDK_OFFSET(0xB49DF80)

inline static constexpr unsigned int BIDDFDEAEGB___c__DisplayClass39_2_TypeDefinitionIndex = 62114;

	template <typename T1, typename T2>
	class BIDDFDEAEGB___c__DisplayClass39_2 : public ::System::Object
	{
	public:
		::RPG::Client::MapPropDef* mapPropDef; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS39_2_CTOR_OFFSET))(this);
		}

		::System::Boolean __InitServerHoyoGroupClientEntityDef_b__2(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS39_2___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__2_OFFSET))(this, a1);
		}

	};
