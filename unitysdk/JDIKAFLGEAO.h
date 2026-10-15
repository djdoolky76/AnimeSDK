#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEBKIEOBLPK.h"

#define JDIKAFLGEAO_CTOR_OFFSET UNITYSDK_OFFSET(0x165CE130)
#define JDIKAFLGEAO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x165CDA30)
#define JDIKAFLGEAO__ONBIND_OFFSET UNITYSDK_OFFSET(0x165CD9E0)

inline static constexpr unsigned int JDIKAFLGEAO_TypeDefinitionIndex = 71935;

	class JDIKAFLGEAO : public ::BEBKIEOBLPK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIKAFLGEAO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIKAFLGEAO__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIKAFLGEAO_NKPPGDENJAE_OFFSET))(this);
		}

	};
