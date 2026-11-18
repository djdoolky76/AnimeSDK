#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDCDPCDLHNF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMFODECGMBG_BENBGBKKKJH_OFFSET UNITYSDK_OFFSET(0x193528F0)
#define IMFODECGMBG_BLIMPIHIAKE_OFFSET UNITYSDK_OFFSET(0x193527E0)
#define IMFODECGMBG_BOFFMNMAMLP_OFFSET UNITYSDK_OFFSET(0x19352370)
#define IMFODECGMBG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19352480)
#define IMFODECGMBG_DENNAGNEFCO_OFFSET UNITYSDK_OFFSET(0x19352260)
#define IMFODECGMBG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x193527D0)
#define IMFODECGMBG_IJPAOHJAFGC_OFFSET UNITYSDK_OFFSET(0x19352570)
#define IMFODECGMBG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19352250)
#define IMFODECGMBG__CTOR_OFFSET UNITYSDK_OFFSET(0x19352240)

inline static constexpr unsigned int IMFODECGMBG_TypeDefinitionIndex = 10593;

class IMFODECGMBG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KEPGOFFKEAN; // 0x10
	::System::String* OGCLBOOBBOF; // 0x18
	::LDCDPCDLHNF HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* LGIOFCBPFJA; // 0x30
	::System::String* LBOIMDKDJGC; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::String* NDKMADAFFPD; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x50
	::System::Byte CNIAANMNOCF; // 0x51
	::System::Byte ACIOBDEBDNK; // 0x52

	::System::Void _ctor(::LDCDPCDLHNF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LDCDPCDLHNF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMFODECGMBG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFODECGMBG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DENNAGNEFCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFODECGMBG_DENNAGNEFCO_OFFSET))(this);
	}

	::System::String* BOFFMNMAMLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFODECGMBG_BOFFMNMAMLP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFODECGMBG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* IJPAOHJAFGC()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFODECGMBG_IJPAOHJAFGC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMFODECGMBG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* BLIMPIHIAKE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFODECGMBG_BLIMPIHIAKE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* BENBGBKKKJH()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFODECGMBG_BENBGBKKKJH_OFFSET))(this);
	}
};
