#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNFAOBLNAE;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ELNPPPDBHKC_JMIPIAHMEFN_NIGOMFENHMC_OFFSET UNITYSDK_OFFSET(0x17245660)
#define ELNPPPDBHKC_JMIPIAHMEFN__CTOR_OFFSET UNITYSDK_OFFSET(0x17245650)

inline static constexpr unsigned int ELNPPPDBHKC_JMIPIAHMEFN_TypeDefinitionIndex = 48231;

class ELNPPPDBHKC_JMIPIAHMEFN : public ::System::Object
{
public:
	::System::Func_1<::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>*>* CNOKOKGOHHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JMIPIAHMEFN__CTOR_OFFSET))(this);
	}

	::EFNFAOBLNAE* NIGOMFENHMC()
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JMIPIAHMEFN_NIGOMFENHMC_OFFSET))(this);
	}
};
