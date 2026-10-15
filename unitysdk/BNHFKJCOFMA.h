#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define BNHFKJCOFMA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDA040)
#define BNHFKJCOFMA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDDA0E0)
#define BNHFKJCOFMA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBDDA050)
#define BNHFKJCOFMA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBDDA090)

	class BNHFKJCOFMA : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BNHFKJCOFMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHFKJCOFMA_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHFKJCOFMA_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHFKJCOFMA_EXECUTE_OFFSET))(this);
		}

	};
