#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNIAFCPFLFN.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

class BDIGDABPLBK;
class BKCJAIFHNKF;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define KCBEGMCCKCA_DBGODNLMEDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1514C130)

inline static constexpr unsigned int KCBEGMCCKCA_DBGODNLMEDL_TypeDefinitionIndex = 66328;

class KCBEGMCCKCA_DBGODNLMEDL : public ::System::Object
{
public:
	::BDIGDABPLBK* COPHHMAFMNE; // 0x10
	::System::Func_3<::LGCNEDCMPKM, ::KNIAFCPFLFN, ::System::Boolean>* IPIPKJGPLOD; // 0x18
	::BKCJAIFHNKF* JAKJOMIHHGM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBEGMCCKCA_DBGODNLMEDL__CTOR_OFFSET))(this);
	}
};
