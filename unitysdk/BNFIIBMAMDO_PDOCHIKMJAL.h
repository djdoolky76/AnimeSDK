#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PALNMBCNNKP;
namespace System { template <typename T> class Action_1; }

#define BNFIIBMAMDO_PDOCHIKMJAL_OIONJNCAPGI_OFFSET UNITYSDK_OFFSET(0xFF8F1D0)
#define BNFIIBMAMDO_PDOCHIKMJAL__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8F1C0)

inline static constexpr unsigned int BNFIIBMAMDO_PDOCHIKMJAL_TypeDefinitionIndex = 80864;

class BNFIIBMAMDO_PDOCHIKMJAL : public ::System::Object
{
public:
	::System::Action_1<::PALNMBCNNKP*>* EFGDHJCMKMG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_PDOCHIKMJAL__CTOR_OFFSET))(this);
	}

	::System::Void OIONJNCAPGI(::System::Boolean EBFCACIEKBC, ::PALNMBCNNKP* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PALNMBCNNKP*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_PDOCHIKMJAL_OIONJNCAPGI_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};
