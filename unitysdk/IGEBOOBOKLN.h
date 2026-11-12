#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class DBINFHLNODE;

#define IGEBOOBOKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D856C90)
#define IGEBOOBOKLN_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D856CA0)

inline static constexpr unsigned int IGEBOOBOKLN_TypeDefinitionIndex = 37252;

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
