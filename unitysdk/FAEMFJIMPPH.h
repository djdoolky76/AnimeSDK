#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABONPELIB.h"

class BPDDEPLBABF;

#define FAEMFJIMPPH_DMOMABCALJI_OFFSET UNITYSDK_OFFSET(0x123805D0)
#define FAEMFJIMPPH_EALODJFLJOE_OFFSET UNITYSDK_OFFSET(0x123803D0)
#define FAEMFJIMPPH_EOHGBNIBOHP_OFFSET UNITYSDK_OFFSET(0x12380500)
#define FAEMFJIMPPH_FGABKENNEKD_OFFSET UNITYSDK_OFFSET(0x12380220)
#define FAEMFJIMPPH_HAMDFIGPIEC_OFFSET UNITYSDK_OFFSET(0x1237FEF0)
#define FAEMFJIMPPH_HJMMKIKJFEF_OFFSET UNITYSDK_OFFSET(0x12380030)
#define FAEMFJIMPPH_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x12380370)
#define FAEMFJIMPPH_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x123805C0)
#define FAEMFJIMPPH_ODAEADEHFMD_OFFSET UNITYSDK_OFFSET(0x123800F0)
#define FAEMFJIMPPH__CTOR_OFFSET UNITYSDK_OFFSET(0x123805B0)

inline static constexpr unsigned int FAEMFJIMPPH_TypeDefinitionIndex = 71261;

class FAEMFJIMPPH : public ::BKABONPELIB
{
public:
	// static const ::System::String* IPPEPNBAEPC; // 0x0
	::System::Boolean JFDKCIKLKLP; // 0xA8
	::System::Boolean OPFJCMJGNMF; // 0xA9
	::System::Byte _padding0[0x2];
	::System::UInt32 NPHJEPGAOLA; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEMFJIMPPH__CTOR_OFFSET))(this);
	}

	::System::Void HAMDFIGPIEC(::BPDDEPLBABF* DOIIMHOLLLL)
	{
		return ((::System::Void(*)(::PVOID, ::BPDDEPLBABF*))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_HAMDFIGPIEC_OFFSET))(this, DOIIMHOLLLL);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void HJMMKIKJFEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_HJMMKIKJFEF_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void ODAEADEHFMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_ODAEADEHFMD_OFFSET))(this);
	}

	::System::Void EALODJFLJOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_EALODJFLJOE_OFFSET))(this);
	}

	::System::Void DMOMABCALJI(::BPDDEPLBABF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::BPDDEPLBABF*))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_DMOMABCALJI_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void FGABKENNEKD(::System::Boolean IBHMIILHCCA)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_FGABKENNEKD_OFFSET))(IBHMIILHCCA);
	}

	::System::Void EOHGBNIBOHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEMFJIMPPH_EOHGBNIBOHP_OFFSET))(this);
	}
};
