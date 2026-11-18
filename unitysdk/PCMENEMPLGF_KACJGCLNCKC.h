#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class OENILDODCBF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define PCMENEMPLGF_KACJGCLNCKC_KBMMOAHMLNB_OFFSET UNITYSDK_OFFSET(0x15533500)
#define PCMENEMPLGF_KACJGCLNCKC__CTOR_OFFSET UNITYSDK_OFFSET(0x155334F0)

inline static constexpr unsigned int PCMENEMPLGF_KACJGCLNCKC_TypeDefinitionIndex = 62843;

class PCMENEMPLGF_KACJGCLNCKC : public ::System::Object
{
public:
	::System::Func_2<::OENILDODCBF*, ::System::Boolean>* KPOHOGAEDEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_KACJGCLNCKC__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> KBMMOAHMLNB(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_KACJGCLNCKC_KBMMOAHMLNB_OFFSET))(this, JNDDJMAHNAI);
	}
};
