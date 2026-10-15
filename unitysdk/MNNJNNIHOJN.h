#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define MNNJNNIHOJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA13350)

inline static constexpr unsigned int MNNJNNIHOJN_TypeDefinitionIndex = 71801;

	class MNNJNNIHOJN : public ::System::Object
	{
	public:
		::System::String* PHAJKALJLFP; // 0x10
		::RPG::GameCore::GameEntityList* GKHDCODGAMF; // 0x18
		::System::String* BDACPPLKLGL; // 0x20
		::System::Boolean CAGCHKJHMPD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNJNNIHOJN_CTOR_OFFSET))(this);
		}

	};
