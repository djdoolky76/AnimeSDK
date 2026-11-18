#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/KDMGNLLDLIJ.h"

class BHNJNLBJDHP;
class ENGKPGFGGLM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHHNKHLPLFP_DKKIMAHIPED_OFFSET UNITYSDK_OFFSET(0x154B07F0)
#define EHHNKHLPLFP_EABPGPBIHMO_OFFSET UNITYSDK_OFFSET(0x154B1270)
#define EHHNKHLPLFP_FEMNHCFMICC_OFFSET UNITYSDK_OFFSET(0x154B0A20)
#define EHHNKHLPLFP_HKHOHFIODDP_OFFSET UNITYSDK_OFFSET(0x154B1AF0)
#define EHHNKHLPLFP_IKKDHPMACDO_OFFSET UNITYSDK_OFFSET(0x154B1200)
#define EHHNKHLPLFP_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x154B1C00)
#define EHHNKHLPLFP_LECEINHEGKD_OFFSET UNITYSDK_OFFSET(0x154B13C0)
#define EHHNKHLPLFP_LKNPPOEKPMC_OFFSET UNITYSDK_OFFSET(0x154B1300)
#define EHHNKHLPLFP_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x154B16F0)
#define EHHNKHLPLFP_NOINIGMMOBE_OFFSET UNITYSDK_OFFSET(0x154B1000)
#define EHHNKHLPLFP_NPKOJLALOBC_OFFSET UNITYSDK_OFFSET(0x154B1C70)
#define EHHNKHLPLFP_PDDJFNLPNOE_OFFSET UNITYSDK_OFFSET(0x154B0D30)
#define EHHNKHLPLFP__CTOR_OFFSET UNITYSDK_OFFSET(0x154B1130)

inline static constexpr unsigned int EHHNKHLPLFP_TypeDefinitionIndex = 50009;

class EHHNKHLPLFP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BHNJNLBJDHP*>* OFIMPHKMGAF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* JFPACKGKEMA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHNKHLPLFP__CTOR_OFFSET))(this);
	}

	::System::Void DKKIMAHIPED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_DKKIMAHIPED_OFFSET))(this);
	}

	::System::Void NOINIGMMOBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_NOINIGMMOBE_OFFSET))(this);
	}

	::System::Boolean IKKDHPMACDO(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_IKKDHPMACDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EABPGPBIHMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_EABPGPBIHMO_OFFSET))(this);
	}

	::System::Void LKNPPOEKPMC(::System::UInt32 FLEDHKJGAEP, ::KDMGNLLDLIJ FILDLLIMAAC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KDMGNLLDLIJ))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_LKNPPOEKPMC_OFFSET))(this, FLEDHKJGAEP, FILDLLIMAAC);
	}

	::System::Void PDDJFNLPNOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_PDDJFNLPNOE_OFFSET))(this);
	}

	::System::Void LECEINHEGKD(::MoleMole::EntityHandle HPADNAEINPK, ::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Double))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_LECEINHEGKD_OFFSET))(this, HPADNAEINPK, EGEGIMGMJHN);
	}

	::System::Boolean HKHOHFIODDP(::System::UInt32 NJNCGJLHLKC, ::BHNJNLBJDHP*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::BHNJNLBJDHP*&))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_HKHOHFIODDP_OFFSET))(this, NJNCGJLHLKC, LJBPECKCCEA);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::EntityHandle HPADNAEINPK, ::MoleMole::EntityHandle& IOMGEDDACGA, ::System::Boolean& LCDBOOKMABF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle&, ::System::Boolean&))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_MJFHPEBFAID_OFFSET))(this, HPADNAEINPK, IOMGEDDACGA, LCDBOOKMABF);
	}

	::System::Void FEMNHCFMICC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_FEMNHCFMICC_OFFSET))(this);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void NPKOJLALOBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHNKHLPLFP_NPKOJLALOBC_OFFSET))(this);
	}
};
