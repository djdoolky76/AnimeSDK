#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class IDPGPICONFN;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LIADPOMIFJK_AMFAMEOOEGC_BLIANFKDKPI_OFFSET UNITYSDK_OFFSET(0x11F13300)
#define LIADPOMIFJK_AMFAMEOOEGC__CTOR_OFFSET UNITYSDK_OFFSET(0x11F132F0)

inline static constexpr unsigned int LIADPOMIFJK_AMFAMEOOEGC_TypeDefinitionIndex = 75096;

class LIADPOMIFJK_AMFAMEOOEGC : public ::System::Object
{
public:
	::System::Action_2<::System::UInt32, ::System::Single>* JIEAEEEGBHC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADPOMIFJK_AMFAMEOOEGC__CTOR_OFFSET))(this);
	}

	::System::Void BLIANFKDKPI(::IDPGPICONFN* JFLIMKIKLJE, ::AEMCAOEICDG* JPHJGLCFFLH)
	{
		return ((::System::Void(*)(::PVOID, ::IDPGPICONFN*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_AMFAMEOOEGC_BLIANFKDKPI_OFFSET))(this, JFLIMKIKLJE, JPHJGLCFFLH);
	}
};
