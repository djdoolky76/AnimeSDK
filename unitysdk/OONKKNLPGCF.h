#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OONKKNLPGCF;

#define OONKKNLPGCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BA170)
#define OONKKNLPGCF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2BA020)

inline static constexpr unsigned int OONKKNLPGCF_TypeDefinitionIndex = 12006;

	class OONKKNLPGCF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FACDDCMCMIP; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x18
		::System::UInt32 KJIFHEPDMEI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONKKNLPGCF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OONKKNLPGCF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OONKKNLPGCF*))((::PBYTE)hIl2Cpp + OONKKNLPGCF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
