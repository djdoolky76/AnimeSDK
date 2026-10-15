#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJJLLPIEOL;
class JBACCAGFHON;

#define CJJJLLPIEOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD217310)
#define CJJJLLPIEOL_CTOR_OFFSET UNITYSDK_OFFSET(0xD217380)
#define CJJJLLPIEOL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD2173D0)
#define CJJJLLPIEOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD217390)
#define CJJJLLPIEOL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD217410)

inline static constexpr unsigned int CJJJLLPIEOL_TypeDefinitionIndex = 78130;

	class CJJJLLPIEOL : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CJJJLLPIEOL_CTOR_OFFSET))(this, a1);
		}

		static ::CJJJLLPIEOL* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::CJJJLLPIEOL*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CJJJLLPIEOL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJLLPIEOL_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJLLPIEOL_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJLLPIEOL_TEARDOWN_OFFSET))(this);
		}

	};
