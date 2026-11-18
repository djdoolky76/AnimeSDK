#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNFIIBMAMDO;
class ILOCAIBFJIJ;
namespace System { template <typename T> class Action_1; }

#define BNFIIBMAMDO_PDFEMHHEPIP_JCAOFONGADH_OFFSET UNITYSDK_OFFSET(0x11520150)
#define BNFIIBMAMDO_PDFEMHHEPIP__CTOR_OFFSET UNITYSDK_OFFSET(0x11520140)

inline static constexpr unsigned int BNFIIBMAMDO_PDFEMHHEPIP_TypeDefinitionIndex = 80867;

class BNFIIBMAMDO_PDFEMHHEPIP : public ::System::Object
{
public:
	::System::Action_1<::ILOCAIBFJIJ*>* NLDBMJLMDFL; // 0x10
	::BNFIIBMAMDO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_PDFEMHHEPIP__CTOR_OFFSET))(this);
	}

	::System::Void JCAOFONGADH(::System::Boolean EBFCACIEKBC, ::ILOCAIBFJIJ* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ILOCAIBFJIJ*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_PDFEMHHEPIP_JCAOFONGADH_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};
