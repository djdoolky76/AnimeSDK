#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFNHLNIFPE;
class FCOEMCEDLNL;

#define CIFNHLNIFPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE7BB0)
#define CIFNHLNIFPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBE7A10)

inline static constexpr unsigned int CIFNHLNIFPE_TypeDefinitionIndex = 15055;

	class CIFNHLNIFPE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FJIKMHCJMKH; // 0x10
		::System::UInt32 LLICIMBCNPF; // 0x18
		::System::UInt32 AAGKEBFHLMC; // 0x1C
		::System::UInt32 LIIPLGLNPGB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFNHLNIFPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CIFNHLNIFPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIFNHLNIFPE*))((::PBYTE)hIl2Cpp + CIFNHLNIFPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
