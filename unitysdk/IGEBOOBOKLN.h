#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class DBINFHLNODE;

#define IGEBOOBOKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D5350)
#define IGEBOOBOKLN_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6D5360)

	class IGEBOOBOKLN : public ::AJBKGPOEBFG
	{
	public:
		::DBINFHLNODE* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::DBINFHLNODE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBINFHLNODE*))((::PBYTE)hIl2Cpp + IGEBOOBOKLN_CTOR_OFFSET))(this, a1);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEBOOBOKLN_MLKLPMJEHPF_OFFSET))(this);
		}

	};
