#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/EOAHOOCNDHM.h"

class LCFAKNCOMEF;

#define CKFLGJCHOGH_DODPCCAIBOA_OFFSET UNITYSDK_OFFSET(0x19713C00)
#define CKFLGJCHOGH_OGFNIDFLFOC_OFFSET UNITYSDK_OFFSET(0x19713A40)

inline static constexpr unsigned int CKFLGJCHOGH_TypeDefinitionIndex = 68204;

class CKFLGJCHOGH : public ::System::Object
{
public:
	static ::LCFAKNCOMEF* OGFNIDFLFOC(::EOAHOOCNDHM BHFGOMNDBCF)
	{
		return ((::LCFAKNCOMEF*(*)(::EOAHOOCNDHM))((::PBYTE)hIl2Cpp + CKFLGJCHOGH_OGFNIDFLFOC_OFFSET))(BHFGOMNDBCF);
	}

	static ::DPKOIBEFPAO DODPCCAIBOA(::EOAHOOCNDHM BHFGOMNDBCF)
	{
		return ((::DPKOIBEFPAO(*)(::EOAHOOCNDHM))((::PBYTE)hIl2Cpp + CKFLGJCHOGH_DODPCCAIBOA_OFFSET))(BHFGOMNDBCF);
	}
};
