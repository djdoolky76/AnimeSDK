#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CJCMPKCGFEG_JLIEJJPGPHL_GEMMNABPGPM_OFFSET UNITYSDK_OFFSET(0x159DDD00)
#define CJCMPKCGFEG_JLIEJJPGPHL__CTOR_OFFSET UNITYSDK_OFFSET(0x159DDCF0)

inline static constexpr unsigned int CJCMPKCGFEG_JLIEJJPGPHL_TypeDefinitionIndex = 48977;

class CJCMPKCGFEG_JLIEJJPGPHL : public ::System::Object
{
public:
	::System::Int32 HLLCIFAKLPJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCMPKCGFEG_JLIEJJPGPHL__CTOR_OFFSET))(this);
	}

	::System::Boolean GEMMNABPGPM(::System::Object* MMNIPHGBHJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJCMPKCGFEG_JLIEJJPGPHL_GEMMNABPGPM_OFFSET))(this, MMNIPHGBHJF);
	}
};
