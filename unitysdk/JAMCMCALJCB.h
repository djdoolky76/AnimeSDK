#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGLCCLCLNHC.h"
#include "unitysdk/GNOBAILCJGL.h"
#include "unitysdk/KLKNLPMFIDK.h"

#define JAMCMCALJCB_CPHMLGEEOBL_OFFSET UNITYSDK_OFFSET(0x19447D40)
#define JAMCMCALJCB_EGNLPJCACDF_OFFSET UNITYSDK_OFFSET(0x19447EB0)
#define JAMCMCALJCB_GGAOHPMIEBB_OFFSET UNITYSDK_OFFSET(0x19447E20)
#define JAMCMCALJCB_GPPOOOLPGPG_OFFSET UNITYSDK_OFFSET(0x19447780)
#define JAMCMCALJCB__CTOR_OFFSET UNITYSDK_OFFSET(0x19447730)

inline static constexpr unsigned int JAMCMCALJCB_TypeDefinitionIndex = 50271;

class JAMCMCALJCB : public ::DGLCCLCLNHC
{
public:
	::System::Void _ctor(::System::Int32 PCEFKJHBDDF, ::System::Int32 CHIFPJGLFPK, ::System::Int32 LOPMOALAPNE, ::GNOBAILCJGL EHNJCPCLCOJ, ::KLKNLPMFIDK CKNGFDCMEJC, ::System::Int32 FNDLCJGGIIJ, ::System::Boolean DCBLADKCJCB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::GNOBAILCJGL, ::KLKNLPMFIDK, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JAMCMCALJCB__CTOR_OFFSET))(this, PCEFKJHBDDF, CHIFPJGLFPK, LOPMOALAPNE, EHNJCPCLCOJ, CKNGFDCMEJC, FNDLCJGGIIJ, DCBLADKCJCB);
	}

	::System::Void GPPOOOLPGPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMCMCALJCB_GPPOOOLPGPG_OFFSET))(this);
	}

	::System::Single CPHMLGEEOBL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMCMCALJCB_CPHMLGEEOBL_OFFSET))(this);
	}

	::System::Void GGAOHPMIEBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMCMCALJCB_GGAOHPMIEBB_OFFSET))(this);
	}

	::System::Single EGNLPJCACDF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMCMCALJCB_EGNLPJCACDF_OFFSET))(this);
	}
};
