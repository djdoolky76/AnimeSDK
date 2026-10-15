#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABBADDFPFGH;
class JBACCAGFHON;
class LGHPKEAODPH;

#define ABBADDFPFGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB0E3520)
#define ABBADDFPFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB0E3590)
#define ABBADDFPFGH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB0E35E0)
#define ABBADDFPFGH_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xB0E34A0)
#define ABBADDFPFGH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0E35A0)
#define ABBADDFPFGH_LNBMOOJDALM_OFFSET UNITYSDK_OFFSET(0xB0E3630)
#define ABBADDFPFGH_PMDKDHIJMPF_OFFSET UNITYSDK_OFFSET(0xB0E38C0)
#define ABBADDFPFGH_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB0E3E40)

inline static constexpr unsigned int ABBADDFPFGH_TypeDefinitionIndex = 78132;

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
