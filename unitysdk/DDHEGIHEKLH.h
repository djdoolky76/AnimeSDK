#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Object.h"

class OGJNHDLJIBM;
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define DDHEGIHEKLH_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x19742540)
#define DDHEGIHEKLH_BOCOIPNOKKF_OFFSET UNITYSDK_OFFSET(0x19742610)
#define DDHEGIHEKLH_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x19742670)
#define DDHEGIHEKLH_DLPEHDDBFEG_OFFSET UNITYSDK_OFFSET(0x197428B0)
#define DDHEGIHEKLH_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x197425C0)
#define DDHEGIHEKLH_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x19742850)
#define DDHEGIHEKLH_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x19742500)
#define DDHEGIHEKLH_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x19742910)
#define DDHEGIHEKLH_NLDHKBFAELJ_OFFSET UNITYSDK_OFFSET(0x19742970)
#define DDHEGIHEKLH_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x19742580)
#define DDHEGIHEKLH__CTOR_OFFSET UNITYSDK_OFFSET(0x19742600)

inline static constexpr unsigned int DDHEGIHEKLH_TypeDefinitionIndex = 85610;

class DDHEGIHEKLH : public ::System::Object
{
public:
	::MoleMole::UIWindowController* GHBLGLMKCEJ; // 0x10
	::OGJNHDLJIBM* IACAHMDOGAK; // 0x18
	::System::Boolean AHJAAHBFICB; // 0x20
	::System::Boolean BLMDCNELCOK; // 0x21
	::System::Byte _padding0[0x2];
	::System::UInt32 KHLOADGBNNA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH__CTOR_OFFSET))(this);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_BMGEEIJFLIJ_OFFSET))(this);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void BOCOIPNOKKF(::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_BOCOIPNOKKF_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void JMDEKPONKMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_JMDEKPONKMF_OFFSET))(this);
	}

	::System::Void DLPEHDDBFEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_DLPEHDDBFEG_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void NLDHKBFAELJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_NLDHKBFAELJ_OFFSET))(this);
	}

	::System::Void COFHOCIEHPD(::PAMPOBIPLCE DCCDGIDJFKB, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + DDHEGIHEKLH_COFHOCIEHPD_OFFSET))(this, DCCDGIDJFKB, PHHDHIBOCKA);
	}
};
