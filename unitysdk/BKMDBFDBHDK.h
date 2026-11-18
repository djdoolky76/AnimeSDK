#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFGIFLBJDIL.h"
#include "unitysdk/System/ValueType.h"

class PJEJIAEDLFG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKMDBFDBHDK_HICLAEIBFLJ_OFFSET UNITYSDK_OFFSET(0x747F90)
#define BKMDBFDBHDK__CTOR_OFFSET UNITYSDK_OFFSET(0x747F70)

inline static constexpr unsigned int BKMDBFDBHDK_TypeDefinitionIndex = 63332;

struct alignas(8) BKMDBFDBHDK
{
	::PJEJIAEDLFG* PIHFPFDGOLO; // 0x10
	::IFGIFLBJDIL HNPIKCPLFEA; // 0x18
	::System::Int32 EKMILFJKBHJ; // 0x1C
	::System::Collections::Generic::List_1<::System::Object*>* ONMGOPIFBLB; // 0x20

	::System::Void _ctor(::PJEJIAEDLFG* LHPFMGBDFPN, ::IFGIFLBJDIL FGHKMFMBOHI, ::System::Int32 GANEOPMENCL, ::System::Collections::Generic::List_1<::System::Object*>* GJGHDIGHNON)
	{
		return ((::System::Void(*)(::PVOID, ::PJEJIAEDLFG*, ::IFGIFLBJDIL, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BKMDBFDBHDK__CTOR_OFFSET))(this, LHPFMGBDFPN, FGHKMFMBOHI, GANEOPMENCL, GJGHDIGHNON);
	}

	::System::Boolean HICLAEIBFLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMDBFDBHDK_HICLAEIBFLJ_OFFSET))(this);
	}
};
