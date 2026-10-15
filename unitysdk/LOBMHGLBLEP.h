#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBOAHKAAECG;
class FDPALAEIHPB;
class KHPOKIKCOFO;

#define LOBMHGLBLEP_CMKFLMPBOBO_OFFSET UNITYSDK_OFFSET(0xB7EDCA0)
#define LOBMHGLBLEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ED5D0)
#define LOBMHGLBLEP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB7ED620)
#define LOBMHGLBLEP_HJJEPFOFOKI_OFFSET UNITYSDK_OFFSET(0xB7EDDF0)
#define LOBMHGLBLEP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB7ED5E0)

inline static constexpr unsigned int LOBMHGLBLEP_TypeDefinitionIndex = 75805;

	class LOBMHGLBLEP : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::CBOAHKAAECG* CKMCMMFKHDE; // 0x18
		// static const ::System::String* ANFNOKLPDNL; // 0x0
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + LOBMHGLBLEP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBMHGLBLEP_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBMHGLBLEP_EXECUTE_OFFSET))(this);
		}

		::System::Void CMKFLMPBOBO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LOBMHGLBLEP_CMKFLMPBOBO_OFFSET))(this, a1, a2);
		}

		::KHPOKIKCOFO* HJJEPFOFOKI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LOBMHGLBLEP_HJJEPFOFOKI_OFFSET))(this, a1, a2);
		}

	};
