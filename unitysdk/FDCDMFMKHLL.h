#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEBKIEOBLPK.h"

#define FDCDMFMKHLL_CTOR_OFFSET UNITYSDK_OFFSET(0x156C66E0)
#define FDCDMFMKHLL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x156C5F90)
#define FDCDMFMKHLL__ONBIND_OFFSET UNITYSDK_OFFSET(0x156C5F40)

inline static constexpr unsigned int FDCDMFMKHLL_TypeDefinitionIndex = 71933;

	class FDCDMFMKHLL : public ::BEBKIEOBLPK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCDMFMKHLL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCDMFMKHLL__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCDMFMKHLL_NKPPGDENJAE_OFFSET))(this);
		}

	};
