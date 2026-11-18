#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHDIEAGFJD_EMLBADPICPI.h"
#include "unitysdk/System/Object.h"

class JNHDIEAGFJD;

#define JNHDIEAGFJD_BGFBPPHCFFE_DIBOLJPDIBA_OFFSET UNITYSDK_OFFSET(0x1A47F9F0)
#define JNHDIEAGFJD_BGFBPPHCFFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47F9E0)

inline static constexpr unsigned int JNHDIEAGFJD_BGFBPPHCFFE_TypeDefinitionIndex = 91140;

class JNHDIEAGFJD_BGFBPPHCFFE : public ::System::Object
{
public:
	::JNHDIEAGFJD* KLHPEBKNIFB; // 0x10
	::System::Int32 MGMDLMBEDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHDIEAGFJD_BGFBPPHCFFE__CTOR_OFFSET))(this);
	}

	::System::Boolean DIBOLJPDIBA(::JNHDIEAGFJD_EMLBADPICPI MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JNHDIEAGFJD_EMLBADPICPI))((::PBYTE)hIl2Cpp + JNHDIEAGFJD_BGFBPPHCFFE_DIBOLJPDIBA_OFFSET))(this, MOBNMDEDJIP);
	}
};
