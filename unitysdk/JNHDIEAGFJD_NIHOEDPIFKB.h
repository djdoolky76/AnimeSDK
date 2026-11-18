#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHDIEAGFJD_EMLBADPICPI.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define JNHDIEAGFJD_NIHOEDPIFKB_LOOONOFDPKP_OFFSET UNITYSDK_OFFSET(0x1A47FA30)
#define JNHDIEAGFJD_NIHOEDPIFKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47FA20)

inline static constexpr unsigned int JNHDIEAGFJD_NIHOEDPIFKB_TypeDefinitionIndex = 91143;

class JNHDIEAGFJD_NIHOEDPIFKB : public ::System::Object
{
public:
	::System::Func_2<::System::Object*, ::System::Boolean>* FJDOCPKEACA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHDIEAGFJD_NIHOEDPIFKB__CTOR_OFFSET))(this);
	}

	::System::Boolean LOOONOFDPKP(::JNHDIEAGFJD_EMLBADPICPI MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JNHDIEAGFJD_EMLBADPICPI))((::PBYTE)hIl2Cpp + JNHDIEAGFJD_NIHOEDPIFKB_LOOONOFDPKP_OFFSET))(this, MOBNMDEDJIP);
	}
};
