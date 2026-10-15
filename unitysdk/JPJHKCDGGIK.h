#pragma once
#include "unitysdk/unitysdk.h"
class BFBIICACCMB;
class MNBNFBAMKKI;
namespace RPG::GameCore { class TaskContext; }

#define JPJHKCDGGIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x12B90)

inline static constexpr unsigned int JPJHKCDGGIK_TypeDefinitionIndex = 53726;

	struct alignas(8) JPJHKCDGGIK
	{
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x10
		::BFBIICACCMB* FJCAKOIDONG; // 0x18
		::MNBNFBAMKKI* ILIIOLJMKME; // 0x20
		/*
		::System::Boolean Equals(::JPJHKCDGGIK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPJHKCDGGIK))((::PBYTE)hIl2Cpp + JPJHKCDGGIK_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
