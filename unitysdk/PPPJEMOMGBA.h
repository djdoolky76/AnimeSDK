#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }

#define PPPJEMOMGBA_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x1D9DCF70)
#define PPPJEMOMGBA_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x1D9DCF00)
#define PPPJEMOMGBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD030)

inline static constexpr unsigned int PPPJEMOMGBA_TypeDefinitionIndex = 42909;

class PPPJEMOMGBA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPJEMOMGBA__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + PPPJEMOMGBA_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + PPPJEMOMGBA_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}
};
