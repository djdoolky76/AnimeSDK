#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJJLLPIEOL;
class JBACCAGFHON;

#define CJJJLLPIEOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDB8CF50)
#define CJJJLLPIEOL_CTOR_OFFSET UNITYSDK_OFFSET(0xDB8CFC0)
#define CJJJLLPIEOL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDB8D010)
#define CJJJLLPIEOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDB8CFD0)
#define CJJJLLPIEOL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xDB8D050)

inline static constexpr unsigned int CJJJLLPIEOL_TypeDefinitionIndex = 80865;

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
