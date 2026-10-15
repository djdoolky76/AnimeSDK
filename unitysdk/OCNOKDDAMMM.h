#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGNDHCFAAPM.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;

#define OCNOKDDAMMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CBFD0)
#define OCNOKDDAMMM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C7CBFE0)

	class OCNOKDDAMMM : public ::CGNDHCFAAPM
	{
	public:
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x18
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + OCNOKDDAMMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOKDDAMMM_INITIALIZE_OFFSET))(this);
		}

	};
