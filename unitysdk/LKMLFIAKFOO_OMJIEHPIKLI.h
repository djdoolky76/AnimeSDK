#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define LKMLFIAKFOO_OMJIEHPIKLI_EQUALS_OFFSET UNITYSDK_OFFSET(0x78D090)

inline static constexpr unsigned int LKMLFIAKFOO_OMJIEHPIKLI_TypeDefinitionIndex = 43588;

struct alignas(8) LKMLFIAKFOO_OMJIEHPIKLI
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::System::Single BPAMMHKFIJI; // 0x1C
	::System::Boolean MJIMNNFEKNB; // 0x20
	::System::Boolean ADNPFJMKDNM; // 0x21
	::System::Byte _padding0[0x6];
	::MoleMole::Battle::Entity* HPDIJCKCDLM; // 0x28

	/*
	::System::Boolean Equals(::LKMLFIAKFOO_OMJIEHPIKLI LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LKMLFIAKFOO_OMJIEHPIKLI))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_OMJIEHPIKLI_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
