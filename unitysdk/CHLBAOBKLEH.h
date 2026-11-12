#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEDIJHDAIA.h"
class IJFIHJJPHNA;
class MLEHLBPAAKM;

#define CHLBAOBKLEH_BCILNLPOLBC_OFFSET UNITYSDK_OFFSET(0x1D756690)
#define CHLBAOBKLEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D756820)

inline static constexpr unsigned int CHLBAOBKLEH_TypeDefinitionIndex = 37443;

	class CHLBAOBKLEH : public ::ICEDIJHDAIA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLBAOBKLEH_CTOR_OFFSET))(this);
		}

		::MLEHLBPAAKM* BCILNLPOLBC(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::MLEHLBPAAKM*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + CHLBAOBKLEH_BCILNLPOLBC_OFFSET))(this, a1, a2);
		}

	};
