#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PFHHJEGCHCD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AFDFE10)
#define PFHHJEGCHCD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AFDFA40)
#define PFHHJEGCHCD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AFE0680)
#define PFHHJEGCHCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE03D0)

inline static constexpr unsigned int PFHHJEGCHCD_TypeDefinitionIndex = 47407;

class PFHHJEGCHCD : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* JKNJEKDGJMG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::System::String*>* CFDIECELKOA; // 0x28
	::AAMKEDEDHPD_1<::System::Single>* NKGHIDICDCB; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38
	::KCMIFNGABDC_1<::System::String*>* AFFNAHDCFJE; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* JFMBDPIBJLN; // 0x48
	::KCMIFNGABDC_1<::System::String*>* HNINACKMAFC; // 0x50
	::AAMKEDEDHPD_1<::System::Boolean>* IHIDAJLAILM; // 0x58
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHHJEGCHCD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHHJEGCHCD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PFHHJEGCHCD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHHJEGCHCD_GDEOPIBNOIN_OFFSET))(this);
	}
};
