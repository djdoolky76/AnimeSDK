#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKJEJCFGKNJ.h"

#define HJKOHGKHOKO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2BFA0)
#define HJKOHGKHOKO_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0x15D2BFE0)

	class HJKOHGKHOKO : public ::FKJEJCFGKNJ
	{
	public:
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJKOHGKHOKO_CTOR_OFFSET))(this, a1);
		}

		::System::Void DNFGFHMNDEF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJKOHGKHOKO_DNFGFHMNDEF_OFFSET))(this, a1);
		}

	};
