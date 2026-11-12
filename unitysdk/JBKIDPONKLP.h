#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEDIJHDAIA.h"
class IJFIHJJPHNA;
class MLEHLBPAAKM;

#define JBKIDPONKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D874CD0)
#define JBKIDPONKLP_OKLOHGMDOIC_OFFSET UNITYSDK_OFFSET(0x1D874B70)

inline static constexpr unsigned int JBKIDPONKLP_TypeDefinitionIndex = 37444;

	class JBKIDPONKLP : public ::ICEDIJHDAIA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKIDPONKLP_CTOR_OFFSET))(this);
		}

		::MLEHLBPAAKM* OKLOHGMDOIC(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::System::UInt32 a3)
		{
			return ((::MLEHLBPAAKM*(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::System::UInt32))((::PBYTE)hIl2Cpp + JBKIDPONKLP_OKLOHGMDOIC_OFFSET))(this, a1, a2, a3);
		}

	};
