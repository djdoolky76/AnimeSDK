#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }

#define FIPHHIIOGOD_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x1714B640)
#define FIPHHIIOGOD_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x1714B5D0)
#define FIPHHIIOGOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1714B700)

inline static constexpr unsigned int FIPHHIIOGOD_TypeDefinitionIndex = 60444;

class FIPHHIIOGOD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPHHIIOGOD__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + FIPHHIIOGOD_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + FIPHHIIOGOD_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}
};
