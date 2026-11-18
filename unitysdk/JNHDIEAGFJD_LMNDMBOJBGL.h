#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHDIEAGFJD_EMLBADPICPI.h"
#include "unitysdk/System/Object.h"

class JNHDIEAGFJD;

#define JNHDIEAGFJD_LMNDMBOJBGL_EGDIOCAPCHA_OFFSET UNITYSDK_OFFSET(0x1309DED0)
#define JNHDIEAGFJD_LMNDMBOJBGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1309D990)

inline static constexpr unsigned int JNHDIEAGFJD_LMNDMBOJBGL_TypeDefinitionIndex = 91141;

class JNHDIEAGFJD_LMNDMBOJBGL : public ::System::Object
{
public:
	::JNHDIEAGFJD* KLHPEBKNIFB; // 0x10
	::System::Int32 MGMDLMBEDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHDIEAGFJD_LMNDMBOJBGL__CTOR_OFFSET))(this);
	}

	::System::Boolean EGDIOCAPCHA(::JNHDIEAGFJD_EMLBADPICPI MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JNHDIEAGFJD_EMLBADPICPI))((::PBYTE)hIl2Cpp + JNHDIEAGFJD_LMNDMBOJBGL_EGDIOCAPCHA_OFFSET))(this, MOBNMDEDJIP);
	}
};
