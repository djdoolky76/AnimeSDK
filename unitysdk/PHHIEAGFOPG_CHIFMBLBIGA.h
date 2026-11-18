#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECBJHDFMMEA;

#define PHHIEAGFOPG_CHIFMBLBIGA_AGEINLNPCNO_OFFSET UNITYSDK_OFFSET(0x1B9E5B70)
#define PHHIEAGFOPG_CHIFMBLBIGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E5B60)

inline static constexpr unsigned int PHHIEAGFOPG_CHIFMBLBIGA_TypeDefinitionIndex = 79645;

class PHHIEAGFOPG_CHIFMBLBIGA : public ::System::Object
{
public:
	::System::Int32 HAHAJFAPNHA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHIEAGFOPG_CHIFMBLBIGA__CTOR_OFFSET))(this);
	}

	::System::Boolean AGEINLNPCNO(::ECBJHDFMMEA* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::ECBJHDFMMEA*))((::PBYTE)hIl2Cpp + PHHIEAGFOPG_CHIFMBLBIGA_AGEINLNPCNO_OFFSET))(this, PELAJIFDIPN);
	}
};
