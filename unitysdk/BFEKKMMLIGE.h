#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFEKKMMLIGE;
class JBACCAGFHON;

#define BFEKKMMLIGE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1614B0)
#define BFEKKMMLIGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB161520)
#define BFEKKMMLIGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB161570)
#define BFEKKMMLIGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB161530)
#define BFEKKMMLIGE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB1615D0)

	class BFEKKMMLIGE : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + BFEKKMMLIGE_CTOR_OFFSET))(this, a1);
		}

		static ::BFEKKMMLIGE* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::BFEKKMMLIGE*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + BFEKKMMLIGE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEKKMMLIGE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEKKMMLIGE_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEKKMMLIGE_TEARDOWN_OFFSET))(this);
		}

	};
