#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"

#define JNMAFJECPAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA66C0)
#define JNMAFJECPAB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1CBA6560)

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
