#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCJOJMLFBOB.h"

#define BFNEDOLPIOO_GJHDFLDDNGM_OFFSET UNITYSDK_OFFSET(0x150741C0)
#define BFNEDOLPIOO_PJNNELGKEPF_OFFSET UNITYSDK_OFFSET(0x15074060)
#define BFNEDOLPIOO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15073FD0)
#define BFNEDOLPIOO__CTOR_OFFSET UNITYSDK_OFFSET(0x15073FC0)

inline static constexpr unsigned int BFNEDOLPIOO_TypeDefinitionIndex = 89323;

class BFNEDOLPIOO : public ::GCJOJMLFBOB
{
public:
	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFNEDOLPIOO__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNEDOLPIOO__CTOR_1_OFFSET))(this);
	}

	::System::Void PJNNELGKEPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNEDOLPIOO_PJNNELGKEPF_OFFSET))(this);
	}

	::System::Void GJHDFLDDNGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNEDOLPIOO_GJHDFLDDNGM_OFFSET))(this);
	}
};
