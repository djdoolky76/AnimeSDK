#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"
#include "unitysdk/FNLJPBBJIKB.h"

class BHECBBCIMBF;
class NMJLLLMLBMC_BDIOJOIGLMA;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMJLLLMLBMC_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0xE765DD0)
#define NMJLLLMLBMC_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0xE766340)
#define NMJLLLMLBMC_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0xE765DC0)
#define NMJLLLMLBMC_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0xE765F60)
#define NMJLLLMLBMC_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0xE7663C0)
#define NMJLLLMLBMC_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0xE766450)
#define NMJLLLMLBMC_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0xE7664A0)
#define NMJLLLMLBMC_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0xE765E90)
#define NMJLLLMLBMC__CTOR_OFFSET UNITYSDK_OFFSET(0xE766330)

inline static constexpr unsigned int NMJLLLMLBMC_TypeDefinitionIndex = 70596;

class NMJLLLMLBMC : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIBaseController* PEJDLANFCNN; // 0x28
	::System::Collections::Generic::Dictionary_2<::FNLJPBBJIKB, ::MoleMole::UIBaseController*>* LBOPKIIMHAG; // 0x30
	::NMJLLLMLBMC_BDIOJOIGLMA* OBGBFHGKILC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_LJAPJFDPIKF_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_MBDFANLLCHK_OFFSET))(this);
	}
};
