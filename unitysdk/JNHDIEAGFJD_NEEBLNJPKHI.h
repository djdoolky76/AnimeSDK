#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHDIEAGFJD_EMLBADPICPI.h"
#include "unitysdk/System/Object.h"

class JNHDIEAGFJD;

#define JNHDIEAGFJD_NEEBLNJPKHI_ILOHPMHKAHD_OFFSET UNITYSDK_OFFSET(0x14FC4ED0)
#define JNHDIEAGFJD_NEEBLNJPKHI__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC4EC0)

inline static constexpr unsigned int JNHDIEAGFJD_NEEBLNJPKHI_TypeDefinitionIndex = 91142;

class JNHDIEAGFJD_NEEBLNJPKHI : public ::System::Object
{
public:
	::JNHDIEAGFJD* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHDIEAGFJD_NEEBLNJPKHI__CTOR_OFFSET))(this);
	}

	::System::Boolean ILOHPMHKAHD(::JNHDIEAGFJD_EMLBADPICPI MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JNHDIEAGFJD_EMLBADPICPI))((::PBYTE)hIl2Cpp + JNHDIEAGFJD_NEEBLNJPKHI_ILOHPMHKAHD_OFFSET))(this, MOBNMDEDJIP);
	}
};
