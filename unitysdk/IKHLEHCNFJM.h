#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }

#define IKHLEHCNFJM_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x1987F790)
#define IKHLEHCNFJM_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x1987F600)
#define IKHLEHCNFJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1987F860)

inline static constexpr unsigned int IKHLEHCNFJM_TypeDefinitionIndex = 77001;

class IKHLEHCNFJM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLEHCNFJM__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + IKHLEHCNFJM_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + IKHLEHCNFJM_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}
};
