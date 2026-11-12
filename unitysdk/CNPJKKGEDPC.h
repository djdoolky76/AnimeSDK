#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJKNHPLHDI.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;

#define CNPJKKGEDPC_CTOR_OFFSET UNITYSDK_OFFSET(0xE5F5F30)
#define CNPJKKGEDPC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE5F5FE0)

inline static constexpr unsigned int CNPJKKGEDPC_TypeDefinitionIndex = 78909;

	class CNPJKKGEDPC : public ::DJJKNHPLHDI
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x30
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + CNPJKKGEDPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPJKKGEDPC_INITIALIZE_OFFSET))(this);
		}

	};
