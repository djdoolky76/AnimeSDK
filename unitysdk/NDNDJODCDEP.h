#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEDPJHPMPJB;

#define NDNDJODCDEP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB531A0)
#define NDNDJODCDEP_GET_RULE_OFFSET UNITYSDK_OFFSET(0xBB531B0)

inline static constexpr unsigned int NDNDJODCDEP_TypeDefinitionIndex = 80713;

	class NDNDJODCDEP : public ::System::Object
	{
	public:
		::JEDPJHPMPJB* _Rule_k__BackingField; // 0x10
		::System::Void _ctor(::JEDPJHPMPJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEDPJHPMPJB*))((::PBYTE)hIl2Cpp + NDNDJODCDEP_CTOR_OFFSET))(this, a1);
		}

		::JEDPJHPMPJB* get_Rule()
		{
			return ((::JEDPJHPMPJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNDJODCDEP_GET_RULE_OFFSET))(this);
		}

	};
