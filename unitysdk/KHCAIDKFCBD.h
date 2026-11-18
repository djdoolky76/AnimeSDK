#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDMJIOHPNEN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHCAIDKFCBD_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x17497DC0)
#define KHCAIDKFCBD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17497CD0)
#define KHCAIDKFCBD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17497CC0)
#define KHCAIDKFCBD_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x174980A0)
#define KHCAIDKFCBD_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x174981E0)
#define KHCAIDKFCBD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17498090)
#define KHCAIDKFCBD__CTOR_OFFSET UNITYSDK_OFFSET(0x17497CB0)

inline static constexpr unsigned int KHCAIDKFCBD_TypeDefinitionIndex = 17445;

class KHCAIDKFCBD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* CDPMOEENODL; // 0x18
	::NDMJIOHPNEN HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* OIBEAJNLJAB; // 0x30
	::System::Int32 ENMAJCMIEMK; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x44

	::System::Void _ctor(::NDMJIOHPNEN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDMJIOHPNEN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KHCAIDKFCBD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHCAIDKFCBD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCAIDKFCBD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BHMMKDGCLGB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCAIDKFCBD_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCAIDKFCBD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCAIDKFCBD_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LFPFCAFBOEK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCAIDKFCBD_LFPFCAFBOEK_OFFSET))(this);
	}
};
