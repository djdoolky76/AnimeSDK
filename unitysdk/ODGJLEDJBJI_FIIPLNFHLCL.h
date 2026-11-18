#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define ODGJLEDJBJI_FIIPLNFHLCL_AEDHMAGOPKP_OFFSET UNITYSDK_OFFSET(0xE0EF340)
#define ODGJLEDJBJI_FIIPLNFHLCL_GNGGIGODLJM_OFFSET UNITYSDK_OFFSET(0xE0EF650)
#define ODGJLEDJBJI_FIIPLNFHLCL__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EF330)

inline static constexpr unsigned int ODGJLEDJBJI_FIIPLNFHLCL_TypeDefinitionIndex = 73481;

class ODGJLEDJBJI_FIIPLNFHLCL : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18
	::System::UInt32 EBLLOAONOIP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_FIIPLNFHLCL__CTOR_OFFSET))(this);
	}

	::System::Void AEDHMAGOPKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_FIIPLNFHLCL_AEDHMAGOPKP_OFFSET))(this);
	}

	::System::Void GNGGIGODLJM(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_FIIPLNFHLCL_GNGGIGODLJM_OFFSET))(this, DJCNCELJPOM);
	}
};
