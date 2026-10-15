#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class JHCAMDHAFKM;

#define JHCAMDHAFKM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1A8DD0)
#define JHCAMDHAFKM_CLONE_OFFSET UNITYSDK_OFFSET(0xB1A8EB0)
#define JHCAMDHAFKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A8E90)
#define JHCAMDHAFKM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB1A8F50)
#define JHCAMDHAFKM_REVERSE_OFFSET UNITYSDK_OFFSET(0xB1A8F00)

	class JHCAMDHAFKM : public ::MOGBNBGMIHF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCAMDHAFKM_CTOR_OFFSET))(this);
		}

		static ::JHCAMDHAFKM* BPLPBPMEODA(::System::Single a1)
		{
			return ((::JHCAMDHAFKM*(*)(::System::Single))((::PBYTE)hIl2Cpp + JHCAMDHAFKM_BPLPBPMEODA_OFFSET))(a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCAMDHAFKM_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCAMDHAFKM_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHCAMDHAFKM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
