#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMPJJAPJJG.h"
class CIIKBJFOKHL;
class IPHBKALPNFC;

#define DOHFONHNBJP_BJEMKDAEPCG_OFFSET UNITYSDK_OFFSET(0x11FE8A60)
#define DOHFONHNBJP_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE89F0)
#define DOHFONHNBJP_HKCONCPENCG_OFFSET UNITYSDK_OFFSET(0x11FE8A20)

inline static constexpr unsigned int DOHFONHNBJP_TypeDefinitionIndex = 77925;

	class DOHFONHNBJP : public ::BAMPJJAPJJG
	{
	public:
		::CIIKBJFOKHL* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::CIIKBJFOKHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + DOHFONHNBJP_CTOR_OFFSET))(this, a1);
		}

		::CIIKBJFOKHL* HKCONCPENCG()
		{
			return ((::CIIKBJFOKHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHFONHNBJP_HKCONCPENCG_OFFSET))(this);
		}

		::IPHBKALPNFC* BJEMKDAEPCG(::System::Int32 a1)
		{
			return ((::IPHBKALPNFC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOHFONHNBJP_BJEMKDAEPCG_OFFSET))(this, a1);
		}

	};
