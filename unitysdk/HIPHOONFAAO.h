#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNPIPBLFJM;
class DNIDONCOAEE;

#define HIPHOONFAAO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15CF4730)
#define HIPHOONFAAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF47C0)

inline static constexpr unsigned int HIPHOONFAAO_TypeDefinitionIndex = 81724;

	class HIPHOONFAAO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPHOONFAAO_CTOR_OFFSET))(this);
		}

		::AFNPIPBLFJM* BPLPBPMEODA(::DNIDONCOAEE* a1)
		{
			return ((::AFNPIPBLFJM*(*)(::PVOID, ::DNIDONCOAEE*))((::PBYTE)hIl2Cpp + HIPHOONFAAO_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
