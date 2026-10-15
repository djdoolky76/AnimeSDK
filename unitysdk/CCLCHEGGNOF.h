#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLHIKGINAHB.h"
namespace RPG::GameCore { class ICharacterRowData; }

#define CCLCHEGGNOF_CTOR_OFFSET UNITYSDK_OFFSET(0xC74EAF0)

inline static constexpr unsigned int CCLCHEGGNOF_TypeDefinitionIndex = 57662;

	class CCLCHEGGNOF : public ::HLHIKGINAHB
	{
	public:
		::RPG::GameCore::ICharacterRowData* MLEMJHLPFJM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLCHEGGNOF_CTOR_OFFSET))(this);
		}

	};
