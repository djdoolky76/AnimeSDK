#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABBADDFPFGH;
class JBACCAGFHON;
class LGHPKEAODPH;

#define ABBADDFPFGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB0E4C90)
#define ABBADDFPFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB0E4D00)
#define ABBADDFPFGH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB0E4D50)
#define ABBADDFPFGH_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xB0E4C10)
#define ABBADDFPFGH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0E4D10)
#define ABBADDFPFGH_LNBMOOJDALM_OFFSET UNITYSDK_OFFSET(0xB0E4DA0)
#define ABBADDFPFGH_PMDKDHIJMPF_OFFSET UNITYSDK_OFFSET(0xB0E5030)
#define ABBADDFPFGH_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB0E55B0)

inline static constexpr unsigned int ABBADDFPFGH_TypeDefinitionIndex = 78133;

	class ABBADDFPFGH : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + ABBADDFPFGH_CTOR_OFFSET))(this, a1);
		}

		::LGHPKEAODPH* GHDIJCNKKOM()
		{
			return ((::LGHPKEAODPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBADDFPFGH_GHDIJCNKKOM_OFFSET))(this);
		}

		static ::ABBADDFPFGH* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::ABBADDFPFGH*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + ABBADDFPFGH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBADDFPFGH_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBADDFPFGH_EXECUTE_OFFSET))(this);
		}

		::System::Void LNBMOOJDALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBADDFPFGH_LNBMOOJDALM_OFFSET))(this);
		}

		::System::Void PMDKDHIJMPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBADDFPFGH_PMDKDHIJMPF_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBADDFPFGH_TEARDOWN_OFFSET))(this);
		}

	};
