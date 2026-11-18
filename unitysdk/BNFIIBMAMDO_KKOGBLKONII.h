#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNFIIBMAMDO;
class ILOCAIBFJIJ;
namespace System { template <typename T> class Action_1; }

#define BNFIIBMAMDO_KKOGBLKONII_AIEMEHIFLNE_OFFSET UNITYSDK_OFFSET(0x16A015A0)
#define BNFIIBMAMDO_KKOGBLKONII__CTOR_OFFSET UNITYSDK_OFFSET(0x16A01590)

inline static constexpr unsigned int BNFIIBMAMDO_KKOGBLKONII_TypeDefinitionIndex = 80872;

class BNFIIBMAMDO_KKOGBLKONII : public ::System::Object
{
public:
	::BNFIIBMAMDO* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Boolean>* DMPEOJCCCLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_KKOGBLKONII__CTOR_OFFSET))(this);
	}

	::System::Void AIEMEHIFLNE(::System::Boolean EBFCACIEKBC, ::ILOCAIBFJIJ* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ILOCAIBFJIJ*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_KKOGBLKONII_AIEMEHIFLNE_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};
