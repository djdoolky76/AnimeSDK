#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEDPJHPMPJB;

#define ILDDCJNPKPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1649BDC0)
#define ILDDCJNPKPL_GET_RULE_OFFSET UNITYSDK_OFFSET(0x1649BDD0)

inline static constexpr unsigned int ILDDCJNPKPL_TypeDefinitionIndex = 80713;

	class ILDDCJNPKPL : public ::System::Object
	{
	public:
		::JEDPJHPMPJB* _Rule_k__BackingField; // 0x10
		::System::Void _ctor(::JEDPJHPMPJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEDPJHPMPJB*))((::PBYTE)hIl2Cpp + ILDDCJNPKPL_CTOR_OFFSET))(this, a1);
		}

		::JEDPJHPMPJB* get_Rule()
		{
			return ((::JEDPJHPMPJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDDCJNPKPL_GET_RULE_OFFSET))(this);
		}

	};
