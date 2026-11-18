#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }

#define MBJHEDKHJED_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x14041F70)
#define MBJHEDKHJED_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x14041F00)
#define MBJHEDKHJED__CTOR_OFFSET UNITYSDK_OFFSET(0x14042030)

inline static constexpr unsigned int MBJHEDKHJED_TypeDefinitionIndex = 82029;

class MBJHEDKHJED : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJHEDKHJED__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + MBJHEDKHJED_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + MBJHEDKHJED_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}
};
