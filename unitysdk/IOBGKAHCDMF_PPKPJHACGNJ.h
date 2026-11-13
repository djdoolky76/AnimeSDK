#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOBGKAHCDMF;

#define IOBGKAHCDMF_PPKPJHACGNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FE300)
#define IOBGKAHCDMF_PPKPJHACGNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5FFAD0)

inline static constexpr unsigned int IOBGKAHCDMF_PPKPJHACGNJ_TypeDefinitionIndex = 61896;

	class IOBGKAHCDMF_PPKPJHACGNJ : public ::System::Object
	{
	public:
		::IOBGKAHCDMF* CFKHNPGEAJA; // 0x10
		::System::Void _ctor(::IOBGKAHCDMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOBGKAHCDMF*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_PPKPJHACGNJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_PPKPJHACGNJ_DISPOSE_OFFSET))(this);
		}

	};
