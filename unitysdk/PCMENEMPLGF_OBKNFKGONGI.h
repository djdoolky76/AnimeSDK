#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class OENILDODCBF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define PCMENEMPLGF_OBKNFKGONGI_MBAKEDBPKJK_OFFSET UNITYSDK_OFFSET(0x17314700)
#define PCMENEMPLGF_OBKNFKGONGI__CTOR_OFFSET UNITYSDK_OFFSET(0x173146F0)

inline static constexpr unsigned int PCMENEMPLGF_OBKNFKGONGI_TypeDefinitionIndex = 62872;

class PCMENEMPLGF_OBKNFKGONGI : public ::System::Object
{
public:
	::System::Func_2<::OENILDODCBF*, ::System::Boolean>* KPOHOGAEDEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OBKNFKGONGI__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> MBAKEDBPKJK(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OBKNFKGONGI_MBAKEDBPKJK_OFFSET))(this, JNDDJMAHNAI);
	}
};
