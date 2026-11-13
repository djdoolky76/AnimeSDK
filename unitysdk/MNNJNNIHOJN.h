#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define MNNJNNIHOJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2001E0)

inline static constexpr unsigned int MNNJNNIHOJN_TypeDefinitionIndex = 73821;

	class MNNJNNIHOJN : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::System::String* PHAJKALJLFP; // 0x18
		::RPG::GameCore::GameEntityList* GKHDCODGAMF; // 0x20
		::System::Boolean CAGCHKJHMPD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNJNNIHOJN_CTOR_OFFSET))(this);
		}

	};
