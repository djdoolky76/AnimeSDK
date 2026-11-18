#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNHDIEAGFJD;

#define CJHNCLAAFMK_MAMHPKNANID_PAOKPMLOMEF_OFFSET UNITYSDK_OFFSET(0x14557530)
#define CJHNCLAAFMK_MAMHPKNANID__CTOR_OFFSET UNITYSDK_OFFSET(0x14557520)

inline static constexpr unsigned int CJHNCLAAFMK_MAMHPKNANID_TypeDefinitionIndex = 65617;

class CJHNCLAAFMK_MAMHPKNANID : public ::System::Object
{
public:
	::System::Int32 MGMDLMBEDJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHNCLAAFMK_MAMHPKNANID__CTOR_OFFSET))(this);
	}

	::System::Boolean PAOKPMLOMEF(::JNHDIEAGFJD* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::JNHDIEAGFJD*))((::PBYTE)hIl2Cpp + CJHNCLAAFMK_MAMHPKNANID_PAOKPMLOMEF_OFFSET))(this, HAAEBCOBKFF);
	}
};
