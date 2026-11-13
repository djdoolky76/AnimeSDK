#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelTriggerInfo; }

#define JLHCGPJHMIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1A140)

inline static constexpr unsigned int JLHCGPJHMIL_TypeDefinitionIndex = 44633;

	class JLHCGPJHMIL : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelTriggerInfo* BIBDONOMAHG; // 0x10
		::System::Boolean FHMMAOOCOPN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHCGPJHMIL_CTOR_OFFSET))(this);
		}

	};
