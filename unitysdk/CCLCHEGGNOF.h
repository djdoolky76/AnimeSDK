#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLHIKGINAHB.h"
namespace RPG::GameCore { class ICharacterRowData; }

#define CCLCHEGGNOF_CTOR_OFFSET UNITYSDK_OFFSET(0xD0B7C60)

inline static constexpr unsigned int CCLCHEGGNOF_TypeDefinitionIndex = 58892;

	class CCLCHEGGNOF : public ::HLHIKGINAHB
	{
	public:
		::RPG::GameCore::ICharacterRowData* MLEMJHLPFJM; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLCHEGGNOF_CTOR_OFFSET))(this);
		}

	};
