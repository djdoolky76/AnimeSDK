#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAOGCHBLMEN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMHBFHKBDEA_CBOJKDLALMG_OFFSET UNITYSDK_OFFSET(0x17F217F0)
#define DMHBFHKBDEA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F21330)
#define DMHBFHKBDEA_ENGMHDKODIL_OFFSET UNITYSDK_OFFSET(0x17F211F0)
#define DMHBFHKBDEA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F21CE0)
#define DMHBFHKBDEA_FPIMCJOPOOC_OFFSET UNITYSDK_OFFSET(0x17F216B0)
#define DMHBFHKBDEA_ILFICENOAKB_OFFSET UNITYSDK_OFFSET(0x17F21420)
#define DMHBFHKBDEA_JCDEGFLOFNG_OFFSET UNITYSDK_OFFSET(0x17F21900)
#define DMHBFHKBDEA_JNAPIIJFCPL_OFFSET UNITYSDK_OFFSET(0x17F21560)
#define DMHBFHKBDEA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F216A0)
#define DMHBFHKBDEA_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x17F21CF0)
#define DMHBFHKBDEA_NKEJJIENIMN_OFFSET UNITYSDK_OFFSET(0x17F21A10)
#define DMHBFHKBDEA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F211E0)

inline static constexpr unsigned int DMHBFHKBDEA_TypeDefinitionIndex = 14311;

class DMHBFHKBDEA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::BAOGCHBLMEN HBDPAIKANDB; // 0x18
	::System::String* EAKFDHPNOKA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* FCKFNDCKJMM; // 0x30
	::System::String* FFFHKDAIAME; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 BCMFEHKPDCP; // 0x44
	::System::Int32 DHAKKACPCCC; // 0x48
	::System::Int32 NGKJKOFLCED; // 0x4C
	::System::Int32 LNDOJKEIPFI; // 0x50
	::System::Int32 LIEHIDBONOE; // 0x54

	::System::Void _ctor(::BAOGCHBLMEN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BAOGCHBLMEN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DMHBFHKBDEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ENGMHDKODIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_ENGMHDKODIL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 ILFICENOAKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_ILFICENOAKB_OFFSET))(this);
	}

	::System::Int32 JNAPIIJFCPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_JNAPIIJFCPL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FPIMCJOPOOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_FPIMCJOPOOC_OFFSET))(this);
	}

	::System::String* CBOJKDLALMG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_CBOJKDLALMG_OFFSET))(this);
	}

	::System::String* JCDEGFLOFNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_JCDEGFLOFNG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NKEJJIENIMN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_NKEJJIENIMN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBFHKBDEA_MDPBPBNMKJA_OFFSET))(this);
	}
};
