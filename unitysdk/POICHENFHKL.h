#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKIMJELKFJP.h"
#include "unitysdk/KIJLFGJIJGG.h"
#include "unitysdk/System/ValueType.h"

class BDIGDABPLBK;
namespace System { class String; }

#define POICHENFHKL_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x818780)
#define POICHENFHKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x818770)
#define POICHENFHKL__CTOR_OFFSET UNITYSDK_OFFSET(0x818750)

inline static constexpr unsigned int POICHENFHKL_TypeDefinitionIndex = 50950;

struct alignas(8) POICHENFHKL
{
	::System::Int32 DFOGMAHNMLK; // 0x10
	::KIJLFGJIJGG PGFGDBNHCOC; // 0x14
	::BDIGDABPLBK* MNHKFGNEADC; // 0x18
	::GKIMJELKFJP CEHGFFDBHOJ; // 0x20

	::System::Void _ctor(::System::Int32 DABCKBIAKHA, ::KIJLFGJIJGG JIACOAGLDEG, ::BDIGDABPLBK* HHIJHDFHPOI, ::GKIMJELKFJP JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::KIJLFGJIJGG, ::BDIGDABPLBK*, ::GKIMJELKFJP))((::PBYTE)hIl2Cpp + POICHENFHKL__CTOR_OFFSET))(this, DABCKBIAKHA, JIACOAGLDEG, HHIJHDFHPOI, JBCNPOHMGPE);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POICHENFHKL_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POICHENFHKL_DPIHOJBBGLA_OFFSET))(this);
	}
};
