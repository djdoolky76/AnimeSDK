#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KGMKNAJMPEB_GGADHGADNKC_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0x1770C7F0)
#define KGMKNAJMPEB_GGADHGADNKC_ANOHADBIHIA_OFFSET UNITYSDK_OFFSET(0x1770C3E0)
#define KGMKNAJMPEB_GGADHGADNKC_BAGNMHPCAJD_OFFSET UNITYSDK_OFFSET(0x1770C9A0)
#define KGMKNAJMPEB_GGADHGADNKC_GDBKPBCNKFG_OFFSET UNITYSDK_OFFSET(0x1770C740)
#define KGMKNAJMPEB_GGADHGADNKC_GHAGFBAGDDG_OFFSET UNITYSDK_OFFSET(0x1770C920)
#define KGMKNAJMPEB_GGADHGADNKC_IHOHALHHAED_OFFSET UNITYSDK_OFFSET(0x1770C5C0)
#define KGMKNAJMPEB_GGADHGADNKC_JBDFLIMECEK_OFFSET UNITYSDK_OFFSET(0x1770CB90)
#define KGMKNAJMPEB_GGADHGADNKC_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x1770C730)
#define KGMKNAJMPEB_GGADHGADNKC_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x1770C620)
#define KGMKNAJMPEB_GGADHGADNKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1770C2D0)

inline static constexpr unsigned int KGMKNAJMPEB_GGADHGADNKC_TypeDefinitionIndex = 70388;

class KGMKNAJMPEB_GGADHGADNKC : public ::System::Object
{
public:
	::System::String* IOCDKJADDGH; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* DKNMIEDBJLE; // 0x18
	::System::Int32 FLPJIBCILFC; // 0x20

	::System::Void _ctor(::System::String* EMIKCAHJLGB, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* GCKPCMEMKMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC__CTOR_OFFSET))(this, EMIKCAHJLGB, GCKPCMEMKMM);
	}

	::System::Void ANOHADBIHIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_ANOHADBIHIA_OFFSET))(this);
	}

	::System::Char NCNOMFOCLBH()
	{
		return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_NCNOMFOCLBH_OFFSET))(this);
	}

	::System::Int32 JLEGHNGEBOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Boolean IHOHALHHAED()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_IHOHALHHAED_OFFSET))(this);
	}

	::System::Boolean GDBKPBCNKFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_GDBKPBCNKFG_OFFSET))(this);
	}

	::System::Int32 BAGNMHPCAJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_BAGNMHPCAJD_OFFSET))(this);
	}

	::System::Boolean JBDFLIMECEK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_JBDFLIMECEK_OFFSET))(this);
	}

	::System::Boolean GHAGFBAGDDG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_GHAGFBAGDDG_OFFSET))(this);
	}

	::System::Boolean ADGCPPFAPIA(::System::Char CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + KGMKNAJMPEB_GGADHGADNKC_ADGCPPFAPIA_OFFSET))(this, CBLGCIFLMKL);
	}
};
