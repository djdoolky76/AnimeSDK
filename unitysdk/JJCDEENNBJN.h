#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPlayerMoveModifierConfig; }

#define JJCDEENNBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA1360)

inline static constexpr unsigned int JJCDEENNBJN_TypeDefinitionIndex = 43458;

	class JJCDEENNBJN : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPlayerMoveModifierConfig* ALMAIAIDFHM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCDEENNBJN_CTOR_OFFSET))(this);
		}

	};
