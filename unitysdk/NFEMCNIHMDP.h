#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }

#define NFEMCNIHMDP_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x13141B40)
#define NFEMCNIHMDP_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x13141AD0)
#define NFEMCNIHMDP__CTOR_OFFSET UNITYSDK_OFFSET(0x13141C00)

inline static constexpr unsigned int NFEMCNIHMDP_TypeDefinitionIndex = 51405;

class NFEMCNIHMDP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEMCNIHMDP__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + NFEMCNIHMDP_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + NFEMCNIHMDP_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}
};
