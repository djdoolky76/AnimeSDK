#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPHFADIIBM.h"

#define GCJOJMLFBOB_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x15707960)
#define GCJOJMLFBOB_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x157079D0)
#define GCJOJMLFBOB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x157078D0)
#define GCJOJMLFBOB__CTOR_OFFSET UNITYSDK_OFFSET(0x157077F0)

inline static constexpr unsigned int GCJOJMLFBOB_TypeDefinitionIndex = 67674;

class GCJOJMLFBOB : public ::KGPHFADIIBM
{
public:
	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCJOJMLFBOB__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJOJMLFBOB__CTOR_1_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJOJMLFBOB_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJOJMLFBOB_OENOEFBECOA_OFFSET))(this);
	}
};
