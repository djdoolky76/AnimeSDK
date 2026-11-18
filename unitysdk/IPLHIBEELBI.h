#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }

#define IPLHIBEELBI_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x138273B0)
#define IPLHIBEELBI_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x13827340)
#define IPLHIBEELBI__CTOR_OFFSET UNITYSDK_OFFSET(0x13827470)

inline static constexpr unsigned int IPLHIBEELBI_TypeDefinitionIndex = 52639;

class IPLHIBEELBI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLHIBEELBI__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + IPLHIBEELBI_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + IPLHIBEELBI_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}
};
