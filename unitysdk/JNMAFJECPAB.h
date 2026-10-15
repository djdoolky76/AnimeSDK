#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"

#define JNMAFJECPAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB78380)
#define JNMAFJECPAB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1CB78220)

inline static constexpr unsigned int JNMAFJECPAB_TypeDefinitionIndex = 42473;

	class JNMAFJECPAB : public ::KIDPCOMKMKJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMAFJECPAB_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMAFJECPAB_NPAFMEBNFOB_OFFSET))(this);
		}

	};
