#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFAENEIHIMN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAPMGMPMADP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF74B90)
#define OAPMGMPMADP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF74C80)
#define OAPMGMPMADP_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1BF74C90)
#define OAPMGMPMADP_IBIGCKNNFNI_OFFSET UNITYSDK_OFFSET(0x1BF74A40)
#define OAPMGMPMADP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF74B80)
#define OAPMGMPMADP_MADBNHADLHP_OFFSET UNITYSDK_OFFSET(0x1BF74770)
#define OAPMGMPMADP_MMIPLAMMDOP_OFFSET UNITYSDK_OFFSET(0x1BF75020)
#define OAPMGMPMADP_NBPPEOAKFGL_OFFSET UNITYSDK_OFFSET(0x1BF74DD0)
#define OAPMGMPMADP_PFANIJOJPKN_OFFSET UNITYSDK_OFFSET(0x1BF74F10)
#define OAPMGMPMADP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF74760)

inline static constexpr unsigned int OAPMGMPMADP_TypeDefinitionIndex = 10360;

class OAPMGMPMADP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PEODLCIBHFJ; // 0x10
	::BFAENEIHIMN HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* KCGMHDAPNCH; // 0x30
	::System::Int32 JDOOHJLAOIP; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 PHOJIOLOMEJ; // 0x40
	::System::Int32 LBDNFEHNCCK; // 0x44
	::System::Int32 POKJNGILNLB; // 0x48

	::System::Void _ctor(::BFAENEIHIMN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BFAENEIHIMN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OAPMGMPMADP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MADBNHADLHP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMGMPMADP_MADBNHADLHP_OFFSET))(this);
	}

	::System::Int32 IBIGCKNNFNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMGMPMADP_IBIGCKNNFNI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMGMPMADP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMGMPMADP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAPMGMPMADP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMGMPMADP_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 NBPPEOAKFGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMGMPMADP_NBPPEOAKFGL_OFFSET))(this);
	}

	::System::String* PFANIJOJPKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMGMPMADP_PFANIJOJPKN_OFFSET))(this);
	}

	::System::Int32 MMIPLAMMDOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPMGMPMADP_MMIPLAMMDOP_OFFSET))(this);
	}
};
