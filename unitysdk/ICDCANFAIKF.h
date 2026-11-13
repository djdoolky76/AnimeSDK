#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHKBPAGJIHF.h"
class CLFIGBPHLHI;
class ICDCANFAIKF;
class MOGBNBGMIHF;

#define ICDCANFAIKF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x188CA4D0)
#define ICDCANFAIKF_CLONE_OFFSET UNITYSDK_OFFSET(0x188CA5F0)
#define ICDCANFAIKF_CTOR_OFFSET UNITYSDK_OFFSET(0x188CA5D0)
#define ICDCANFAIKF_GKEBCOEAJMC_OFFSET UNITYSDK_OFFSET(0x188CA6A0)
#define ICDCANFAIKF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x188CA710)
#define ICDCANFAIKF_REVERSE_OFFSET UNITYSDK_OFFSET(0x188CA640)

inline static constexpr unsigned int ICDCANFAIKF_TypeDefinitionIndex = 75635;

	class ICDCANFAIKF : public ::DHKBPAGJIHF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDCANFAIKF_CTOR_OFFSET))(this);
		}

		static ::ICDCANFAIKF* BPLPBPMEODA(::MOGBNBGMIHF* a1, ::System::Single a2)
		{
			return ((::ICDCANFAIKF*(*)(::MOGBNBGMIHF*, ::System::Single))((::PBYTE)hIl2Cpp + ICDCANFAIKF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDCANFAIKF_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDCANFAIKF_REVERSE_OFFSET))(this);
		}

		::System::Single GKEBCOEAJMC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ICDCANFAIKF_GKEBCOEAJMC_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICDCANFAIKF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
