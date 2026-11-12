#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDCDKHALPDP;
class LAECFLNNOFH;

#define DCIIKGHPEHA_ABDONNMNIIF_OFFSET UNITYSDK_OFFSET(0xEBA9560)
#define DCIIKGHPEHA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA9330)
#define DCIIKGHPEHA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEBA9340)

inline static constexpr unsigned int DCIIKGHPEHA_TypeDefinitionIndex = 79645;

	class DCIIKGHPEHA : public ::System::Object
	{
	public:
		::DDCDKHALPDP* PDENFEFCAGN; // 0x10
		::LAECFLNNOFH* FKINCGODJEP; // 0x18
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + DCIIKGHPEHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIIKGHPEHA_EXECUTE_OFFSET))(this);
		}

		::System::Void ABDONNMNIIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIIKGHPEHA_ABDONNMNIIF_OFFSET))(this);
		}

	};
