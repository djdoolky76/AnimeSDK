#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNFAOBLNAE;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ELNPPPDBHKC_MJLKGKMJBBH_JPNKMCGPCHK_OFFSET UNITYSDK_OFFSET(0x14276A60)
#define ELNPPPDBHKC_MJLKGKMJBBH__CTOR_OFFSET UNITYSDK_OFFSET(0x14276A50)

inline static constexpr unsigned int ELNPPPDBHKC_MJLKGKMJBBH_TypeDefinitionIndex = 48234;

class ELNPPPDBHKC_MJLKGKMJBBH : public ::System::Object
{
public:
	::System::Func_1<::System::Collections::Generic::IEnumerable_1<::EFNFAOBLNAE*>*>* CNOKOKGOHHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_MJLKGKMJBBH__CTOR_OFFSET))(this);
	}

	::EFNFAOBLNAE* JPNKMCGPCHK()
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_MJLKGKMJBBH_JPNKMCGPCHK_OFFSET))(this);
	}
};
