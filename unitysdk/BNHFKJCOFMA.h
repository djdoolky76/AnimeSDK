#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define BNHFKJCOFMA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD61C0)
#define BNHFKJCOFMA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDD6260)
#define BNHFKJCOFMA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBDD61D0)
#define BNHFKJCOFMA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBDD6210)

inline static constexpr unsigned int BNHFKJCOFMA_TypeDefinitionIndex = 76951;

	class BNHFKJCOFMA : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
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
