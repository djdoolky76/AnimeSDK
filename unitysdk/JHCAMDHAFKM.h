#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class JHCAMDHAFKM;

#define JHCAMDHAFKM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19361AA0)
#define JHCAMDHAFKM_CLONE_OFFSET UNITYSDK_OFFSET(0x19361B80)
#define JHCAMDHAFKM_CTOR_OFFSET UNITYSDK_OFFSET(0x19361B60)
#define JHCAMDHAFKM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x19361C20)
#define JHCAMDHAFKM_REVERSE_OFFSET UNITYSDK_OFFSET(0x19361BD0)

inline static constexpr unsigned int JHCAMDHAFKM_TypeDefinitionIndex = 75633;

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
