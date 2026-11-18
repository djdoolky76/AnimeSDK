#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLFDEOIAKAP.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOBCKMHNJJC_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x128B6970)
#define BOBCKMHNJJC_GFKADDAHPPE_OFFSET UNITYSDK_OFFSET(0x128B6F00)
#define BOBCKMHNJJC_MEALFPIILLK_OFFSET UNITYSDK_OFFSET(0x128B72D0)
#define BOBCKMHNJJC_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x128B6B30)
#define BOBCKMHNJJC_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x128B6850)
#define BOBCKMHNJJC_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x128B69F0)
#define BOBCKMHNJJC__CTOR_OFFSET UNITYSDK_OFFSET(0x128B67F0)

inline static constexpr unsigned int BOBCKMHNJJC_TypeDefinitionIndex = 44102;

class BOBCKMHNJJC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FLFDEOIAKAP>* JFCHMNGNGLP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCKMHNJJC__CTOR_OFFSET))(this);
	}

	::FLFDEOIAKAP OMPFLKCBFHF(::System::Int32 LCECILKAMAJ)
	{
		return ((::FLFDEOIAKAP(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOBCKMHNJJC_OMPFLKCBFHF_OFFSET))(this, LCECILKAMAJ);
	}

	::System::Void ANPBCLAFCJB(::FLFDEOIAKAP EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::FLFDEOIAKAP))((::PBYTE)hIl2Cpp + BOBCKMHNJJC_ANPBCLAFCJB_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void PGHAJOMNDDJ(::System::Int32 LCECILKAMAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOBCKMHNJJC_PGHAJOMNDDJ_OFFSET))(this, LCECILKAMAJ);
	}

	::System::Void OMMICIJCCKB(::System::Int32 AJJPHGLFOID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOBCKMHNJJC_OMMICIJCCKB_OFFSET))(this, AJJPHGLFOID);
	}

	::System::Void GFKADDAHPPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCKMHNJJC_GFKADDAHPPE_OFFSET))(this);
	}

	::System::Void MEALFPIILLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCKMHNJJC_MEALFPIILLK_OFFSET))(this);
	}
};
