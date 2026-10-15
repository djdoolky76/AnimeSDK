#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
namespace RPG::Client { class RogueKeywordInfo; }

#define PLDEEFFDJFD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E5AF0)

inline static constexpr unsigned int PLDEEFFDJFD_TypeDefinitionIndex = 67088;

	class PLDEEFFDJFD : public ::EBIMENNAEIE
	{
	public:
		::RPG::Client::RogueKeywordInfo* JDDDOAKKMJN; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueKeywordInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueKeywordInfo*))((::PBYTE)hIl2Cpp + PLDEEFFDJFD_CTOR_OFFSET))(this, a1, a2);
		}

	};
