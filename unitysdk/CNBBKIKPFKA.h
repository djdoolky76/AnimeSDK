#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HKMICDOBLCA.h"

class BMJKEPAMDBD;
class DBBGKOKIDDI;
class HJEBAFLEPOF;
class MLKKDHPBPNJ;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CNBBKIKPFKA_BCEOBDBEGBO_OFFSET UNITYSDK_OFFSET(0x193E98F0)
#define CNBBKIKPFKA_DLCKPFCELKO_OFFSET UNITYSDK_OFFSET(0x193E9940)
#define CNBBKIKPFKA_FMNBJCMHCPB_OFFSET UNITYSDK_OFFSET(0x193E9910)
#define CNBBKIKPFKA_GHNFMFOFMHG_OFFSET UNITYSDK_OFFSET(0x193E98E0)
#define CNBBKIKPFKA_HLLFBHCCBIA_OFFSET UNITYSDK_OFFSET(0x193E9810)
#define CNBBKIKPFKA_HMPDKKBBLMJ_OFFSET UNITYSDK_OFFSET(0x193E9930)
#define CNBBKIKPFKA_HNFDCIIDOBF_OFFSET UNITYSDK_OFFSET(0x193E9860)
#define CNBBKIKPFKA_IIPHHHLPPJO_OFFSET UNITYSDK_OFFSET(0x193E9900)
#define CNBBKIKPFKA_KOGPKKOCMKK_OFFSET UNITYSDK_OFFSET(0x193E9950)
#define CNBBKIKPFKA_NDEIMLEMLHA_OFFSET UNITYSDK_OFFSET(0x193E9920)
#define CNBBKIKPFKA__CTOR_OFFSET UNITYSDK_OFFSET(0x193E98D0)

inline static constexpr unsigned int CNBBKIKPFKA_TypeDefinitionIndex = 84135;

class CNBBKIKPFKA : public ::System::Object
{
public:
	::HJEBAFLEPOF* DGBDDMGJHNK; // 0x10
	::DBBGKOKIDDI* _IMKBPONJHKP_k__BackingField; // 0x18
	::System::Func_1<::BMJKEPAMDBD*>* _PLLKGPBDFEH_k__BackingField; // 0x20
	::System::Boolean _CGLAIEHPILJ_k__BackingField; // 0x28
	::System::Boolean POBLEHGGOCN; // 0x29
	::System::Byte _padding0[0x2];
	::System::Int32 _MJCLEEHGLGF_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBBKIKPFKA__CTOR_OFFSET))(this);
	}

	::System::Void HLLFBHCCBIA(::MLKKDHPBPNJ* MINGNPLFJBJ, ::HKMICDOBLCA& IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MLKKDHPBPNJ*, ::HKMICDOBLCA&))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_HLLFBHCCBIA_OFFSET))(this, MINGNPLFJBJ, IGAAKDOIPNN);
	}

	::System::String* HNFDCIIDOBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_HNFDCIIDOBF_OFFSET))(this);
	}

	::System::Int32 GHNFMFOFMHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_GHNFMFOFMHG_OFFSET))(this);
	}

	::System::Void BCEOBDBEGBO(::System::Func_1<::BMJKEPAMDBD*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::BMJKEPAMDBD*>*))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_BCEOBDBEGBO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IIPHHHLPPJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_IIPHHHLPPJO_OFFSET))(this);
	}

	::System::Void FMNBJCMHCPB(::DBBGKOKIDDI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DBBGKOKIDDI*))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_FMNBJCMHCPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NDEIMLEMLHA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_NDEIMLEMLHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::DBBGKOKIDDI* HMPDKKBBLMJ()
	{
		return ((::DBBGKOKIDDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_HMPDKKBBLMJ_OFFSET))(this);
	}

	::System::Func_1<::BMJKEPAMDBD*>* DLCKPFCELKO()
	{
		return ((::System::Func_1<::BMJKEPAMDBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_DLCKPFCELKO_OFFSET))(this);
	}

	::System::Void KOGPKKOCMKK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNBBKIKPFKA_KOGPKKOCMKK_OFFSET))(this, EGEGIMGMJHN);
	}
};
