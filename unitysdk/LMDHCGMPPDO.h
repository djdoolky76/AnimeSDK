#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKPALILACCB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DHCOFIJENFH.h"

class APCECKCPBII;

#define LMDHCGMPPDO_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0x151A7ED0)
#define LMDHCGMPPDO_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x151A7EB0)
#define LMDHCGMPPDO_DFIBDGKNBMP_OFFSET UNITYSDK_OFFSET(0x151A8080)
#define LMDHCGMPPDO_DIIJOPFLJMF_OFFSET UNITYSDK_OFFSET(0x151A8000)
#define LMDHCGMPPDO__CTOR_OFFSET UNITYSDK_OFFSET(0x151A7EC0)

inline static constexpr unsigned int LMDHCGMPPDO_TypeDefinitionIndex = 79038;

class LMDHCGMPPDO : public ::System::Object
{
public:
	// static const ::System::Int32 GKOHIHNGMLI = 0x100; // 0x0
	::APCECKCPBII* LIENDJBDPDE; // 0x10
	::System::Int16 _HBLEIHCPMMP_k__BackingField; // 0x18
	::System::Char OCBCHDKOHCE; // 0x1A

	::System::Void _ctor(::System::Char OCBCHDKOHCE, ::APCECKCPBII* KEKGNHNKIJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Char, ::APCECKCPBII*))((::PBYTE)hIl2Cpp + LMDHCGMPPDO__CTOR_OFFSET))(this, OCBCHDKOHCE, KEKGNHNKIJB);
	}

	::System::Int16 APCKPKCNFJE()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDHCGMPPDO_APCKPKCNFJE_OFFSET))(this);
	}

	::NKPALILACCB ADGCPPFAPIA(::DHCOFIJENFH& AAOCANGHBDG, ::System::Char LIJEIGOLECN)
	{
		return ((::NKPALILACCB(*)(::PVOID, ::DHCOFIJENFH&, ::System::Char))((::PBYTE)hIl2Cpp + LMDHCGMPPDO_ADGCPPFAPIA_OFFSET))(this, AAOCANGHBDG, LIJEIGOLECN);
	}

	::System::Void DIIJOPFLJMF(::Il2CppArray<::System::Char>* GGLHOJDNBGH, ::System::Int32 KEFLKBOJMBJ)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + LMDHCGMPPDO_DIIJOPFLJMF_OFFSET))(this, GGLHOJDNBGH, KEFLKBOJMBJ);
	}

	::System::Void DFIBDGKNBMP(::System::Int16 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + LMDHCGMPPDO_DFIBDGKNBMP_OFFSET))(this, EGEGIMGMJHN);
	}
};
