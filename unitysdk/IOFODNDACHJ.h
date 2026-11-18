#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDGMAFPHJKH.h"
#include "unitysdk/System/Object.h"

class MCNGCOMDBFF;

#define IOFODNDACHJ_DOIJKKLOGJP_OFFSET UNITYSDK_OFFSET(0x1FEA7100)
#define IOFODNDACHJ_HMDFKLMOHII_OFFSET UNITYSDK_OFFSET(0x1FEA70A0)
#define IOFODNDACHJ_KOLGHOINGBD_OFFSET UNITYSDK_OFFSET(0x1FEA7290)
#define IOFODNDACHJ_NHBLNMOLJLC_OFFSET UNITYSDK_OFFSET(0x1FEA7250)
#define IOFODNDACHJ_OLGAFAIIKMM_OFFSET UNITYSDK_OFFSET(0x1FEA73F0)
#define IOFODNDACHJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEA7090)

inline static constexpr unsigned int IOFODNDACHJ_TypeDefinitionIndex = 94965;

class IOFODNDACHJ : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_HHCMHBLJDDI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IOFODNDACHJ_TypeDefinitionIndex)->GetStaticField(0x14500);
	}
	// static const ::System::Int32 LINCMKDAGOE = 0x7D0; // 0x0
	// static const ::System::Int32 NKIGCKHHCKH = 0x0; // 0x0
	// static const ::System::Int32 MJBEKJOCPIN = 0x7D0; // 0x0
	// static const ::System::Int32 ILCLAFPDFOM = 0xFA0; // 0x0
	// static const ::System::Int32 GECGCCCFNOI = 0x1770; // 0x0
	// static const ::System::Int32 LOKGBKAIOFE = 0x1F40; // 0x0
	// static const ::System::Int32 NLEIFFHJHPP = 0x2710; // 0x0
	// static const ::System::Int32 MCGIIKLJJKL = 0x7CF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOFODNDACHJ__CCTOR_OFFSET))();
	}

	static ::System::Int32 HMDFKLMOHII(::System::Int32 IJJNIFJMIHH)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + IOFODNDACHJ_HMDFKLMOHII_OFFSET))(IJJNIFJMIHH);
	}

	static ::System::Int32 DOIJKKLOGJP(::BDGMAFPHJKH MKCOMJHINNJ, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Int32(*)(::BDGMAFPHJKH, ::System::UInt32))((::PBYTE)hIl2Cpp + IOFODNDACHJ_DOIJKKLOGJP_OFFSET))(MKCOMJHINNJ, BKLGNCBNEGM);
	}

	static ::System::Single KOLGHOINGBD(::MCNGCOMDBFF* GIGCPCBGLAM)
	{
		return ((::System::Single(*)(::MCNGCOMDBFF*))((::PBYTE)hIl2Cpp + IOFODNDACHJ_KOLGHOINGBD_OFFSET))(GIGCPCBGLAM);
	}

	static ::System::Int32 OLGAFAIIKMM(::System::Int32 NOMINBDNOCM)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + IOFODNDACHJ_OLGAFAIIKMM_OFFSET))(NOMINBDNOCM);
	}

	static ::System::Int32 NHBLNMOLJLC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IOFODNDACHJ_NHBLNMOLJLC_OFFSET))(BKLGNCBNEGM);
	}
};
