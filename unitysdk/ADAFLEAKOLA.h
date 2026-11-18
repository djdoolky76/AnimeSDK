#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFIEIBPFID.h"
#include "unitysdk/System/Object.h"

class PCAPBLPGMJM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ADAFLEAKOLA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x16FD5DF0)
#define ADAFLEAKOLA_BKBOAPDEEEB_OFFSET UNITYSDK_OFFSET(0x16FD5C10)
#define ADAFLEAKOLA_CCFINLNAJCC_OFFSET UNITYSDK_OFFSET(0x16FD58F0)
#define ADAFLEAKOLA_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16FD59D0)
#define ADAFLEAKOLA_OEOGOBIGJAN_OFFSET UNITYSDK_OFFSET(0x16FD5A20)
#define ADAFLEAKOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD5840)

inline static constexpr unsigned int ADAFLEAKOLA_TypeDefinitionIndex = 60790;

class ADAFLEAKOLA : public ::System::Object
{
public:
	::PCAPBLPGMJM* BENBNIHGLBC; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* MADLFFACNLO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EMFIEIBPFID>* KLPDOAHNHAE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAFLEAKOLA__CTOR_OFFSET))(this);
	}

	::EMFIEIBPFID CCFINLNAJCC(::System::Int32 APGMPFJEIHF)
	{
		return ((::EMFIEIBPFID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADAFLEAKOLA_CCFINLNAJCC_OFFSET))(this, APGMPFJEIHF);
	}

	::System::Void EDEFLFIKNFK(::PCAPBLPGMJM* IOLMOOMMFPP)
	{
		return ((::System::Void(*)(::PVOID, ::PCAPBLPGMJM*))((::PBYTE)hIl2Cpp + ADAFLEAKOLA_EDEFLFIKNFK_OFFSET))(this, IOLMOOMMFPP);
	}

	::System::Void OEOGOBIGJAN(::System::Int32 APGMPFJEIHF, ::EMFIEIBPFID JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EMFIEIBPFID))((::PBYTE)hIl2Cpp + ADAFLEAKOLA_OEOGOBIGJAN_OFFSET))(this, APGMPFJEIHF, JKBLDFBGBPK);
	}

	::System::Void BKBOAPDEEEB(::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADAFLEAKOLA_BKBOAPDEEEB_OFFSET))(this, HPINBCPMHJE);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAFLEAKOLA_BJANDJKKNCD_OFFSET))(this);
	}
};
