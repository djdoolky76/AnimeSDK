#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGLCCLCLNHC.h"
#include "unitysdk/GNOBAILCJGL.h"
#include "unitysdk/KLKNLPMFIDK.h"

#define CGDBMDMHDLL_CPHMLGEEOBL_OFFSET UNITYSDK_OFFSET(0x19A00D10)
#define CGDBMDMHDLL_EFDGIMBFJCC_OFFSET UNITYSDK_OFFSET(0x19A00E00)
#define CGDBMDMHDLL_EGNLPJCACDF_OFFSET UNITYSDK_OFFSET(0x19A00F40)
#define CGDBMDMHDLL_GGAOHPMIEBB_OFFSET UNITYSDK_OFFSET(0x19A00E50)
#define CGDBMDMHDLL_GIHPAIGKJBJ_OFFSET UNITYSDK_OFFSET(0x19A00EE0)
#define CGDBMDMHDLL_GPPOOOLPGPG_OFFSET UNITYSDK_OFFSET(0x19A00360)
#define CGDBMDMHDLL_HIJPIKDDFJC_OFFSET UNITYSDK_OFFSET(0x19A00A50)
#define CGDBMDMHDLL_HJPHMMNADIM_OFFSET UNITYSDK_OFFSET(0x19A00FD0)
#define CGDBMDMHDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x19A002F0)

inline static constexpr unsigned int CGDBMDMHDLL_TypeDefinitionIndex = 84241;

class CGDBMDMHDLL : public ::DGLCCLCLNHC
{
public:
	::System::Boolean OMJBPPPKFKF; // 0xB8
	::System::Byte _padding0[0x3];
	::System::Single CENKGDIONEB; // 0xBC

	::System::Void _ctor(::System::Int32 PCEFKJHBDDF, ::System::Int32 CHIFPJGLFPK, ::System::Int32 LOPMOALAPNE, ::GNOBAILCJGL EHNJCPCLCOJ, ::KLKNLPMFIDK CKNGFDCMEJC, ::System::Int32 FNDLCJGGIIJ, ::System::Boolean DCBLADKCJCB, ::System::UInt32 EBLLOAONOIP, ::System::Boolean LKDACHBDGLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::GNOBAILCJGL, ::KLKNLPMFIDK, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CGDBMDMHDLL__CTOR_OFFSET))(this, PCEFKJHBDDF, CHIFPJGLFPK, LOPMOALAPNE, EHNJCPCLCOJ, CKNGFDCMEJC, FNDLCJGGIIJ, DCBLADKCJCB, EBLLOAONOIP, LKDACHBDGLL);
	}

	::System::Void GPPOOOLPGPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDBMDMHDLL_GPPOOOLPGPG_OFFSET))(this);
	}

	::System::Single CPHMLGEEOBL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDBMDMHDLL_CPHMLGEEOBL_OFFSET))(this);
	}

	::System::Single EFDGIMBFJCC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDBMDMHDLL_EFDGIMBFJCC_OFFSET))(this);
	}

	::System::Void GGAOHPMIEBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDBMDMHDLL_GGAOHPMIEBB_OFFSET))(this);
	}

	::System::Void GIHPAIGKJBJ(::System::Single BOGPAHGJOJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGDBMDMHDLL_GIHPAIGKJBJ_OFFSET))(this, BOGPAHGJOJK);
	}

	::System::Single EGNLPJCACDF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDBMDMHDLL_EGNLPJCACDF_OFFSET))(this);
	}

	::System::Void HIJPIKDDFJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDBMDMHDLL_HIJPIKDDFJC_OFFSET))(this);
	}

	::System::Void HJPHMMNADIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDBMDMHDLL_HJPHMMNADIM_OFFSET))(this);
	}
};
