#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJKNHPLHDI.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;

#define CNPJKKGEDPC_CTOR_OFFSET UNITYSDK_OFFSET(0x19153930)
#define CNPJKKGEDPC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x191539E0)

inline static constexpr unsigned int CNPJKKGEDPC_TypeDefinitionIndex = 78908;

	class CNPJKKGEDPC : public ::DJJKNHPLHDI
	{
	public:
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x30
		::FDPALAEIHPB* FKINCGODJEP; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + CNPJKKGEDPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPJKKGEDPC_INITIALIZE_OFFSET))(this);
		}

	};
