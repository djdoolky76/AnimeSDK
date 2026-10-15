#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHKBPAGJIHF.h"
class CLFIGBPHLHI;
class MOGBNBGMIHF;
class NLLHLFPLBFG;

#define NLLHLFPLBFG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC71270)
#define NLLHLFPLBFG_CLONE_OFFSET UNITYSDK_OFFSET(0xBC71390)
#define NLLHLFPLBFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC71370)
#define NLLHLFPLBFG_GKEBCOEAJMC_OFFSET UNITYSDK_OFFSET(0xBC71440)
#define NLLHLFPLBFG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBC714B0)
#define NLLHLFPLBFG_REVERSE_OFFSET UNITYSDK_OFFSET(0xBC713E0)

	class NLLHLFPLBFG : public ::DHKBPAGJIHF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLHLFPLBFG_CTOR_OFFSET))(this);
		}

		static ::NLLHLFPLBFG* BPLPBPMEODA(::MOGBNBGMIHF* a1, ::System::Single a2)
		{
			return ((::NLLHLFPLBFG*(*)(::MOGBNBGMIHF*, ::System::Single))((::PBYTE)hIl2Cpp + NLLHLFPLBFG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLHLFPLBFG_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLHLFPLBFG_REVERSE_OFFSET))(this);
		}

		::System::Single GKEBCOEAJMC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NLLHLFPLBFG_GKEBCOEAJMC_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLLHLFPLBFG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
