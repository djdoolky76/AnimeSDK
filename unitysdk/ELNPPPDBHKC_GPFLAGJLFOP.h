#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNFAOBLNAE;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ELNPPPDBHKC_GPFLAGJLFOP_LPOHIKNJCIK_OFFSET UNITYSDK_OFFSET(0x1615F970)
#define ELNPPPDBHKC_GPFLAGJLFOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1615F960)

inline static constexpr unsigned int ELNPPPDBHKC_GPFLAGJLFOP_TypeDefinitionIndex = 48232;

class ELNPPPDBHKC_GPFLAGJLFOP : public ::System::Object
{
public:
	::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::EFNFAOBLNAE*>*>*>* CNOKOKGOHHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GPFLAGJLFOP__CTOR_OFFSET))(this);
	}

	::EFNFAOBLNAE* LPOHIKNJCIK()
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GPFLAGJLFOP_LPOHIKNJCIK_OFFSET))(this);
	}
};
