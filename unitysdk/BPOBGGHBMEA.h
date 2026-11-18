#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGLNBEGLIJE.h"

class CAOKACBLMBH;

#define BPOBGGHBMEA_IDFLCPHBBDJ_OFFSET UNITYSDK_OFFSET(0x159A5290)
#define BPOBGGHBMEA_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x159A5190)
#define BPOBGGHBMEA__CTOR_OFFSET UNITYSDK_OFFSET(0x159A5280)

inline static constexpr unsigned int BPOBGGHBMEA_TypeDefinitionIndex = 78333;

class BPOBGGHBMEA : public ::DGLNBEGLIJE
{
public:
	// static const ::System::Int32 EMJIBDFJKIF = 0x7FB; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOBGGHBMEA__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + BPOBGGHBMEA_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::Boolean IDFLCPHBBDJ(::CAOKACBLMBH* MIALFKCCCPI, ::System::Int32& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + BPOBGGHBMEA_IDFLCPHBBDJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
