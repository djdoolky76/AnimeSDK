#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJPBPJCLFFD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACMPPCCHJOA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C502C10)
#define ACMPPCCHJOA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C502C00)
#define ACMPPCCHJOA_HKNEHNFDNMO_OFFSET UNITYSDK_OFFSET(0x1C502E40)
#define ACMPPCCHJOA_JEIAKNBLKII_OFFSET UNITYSDK_OFFSET(0x1C502D00)
#define ACMPPCCHJOA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C502F80)
#define ACMPPCCHJOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C502BF0)

inline static constexpr unsigned int ACMPPCCHJOA_TypeDefinitionIndex = 17675;

class ACMPPCCHJOA : public ::System::Object
{
public:
	::AJPBPJCLFFD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* IMAFCDDJOME; // 0x28
	::System::String* LPANMKBNOCI; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* PPNGEKEGBDH; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 CEFCMBEJFPO; // 0x44
	::System::Int32 PKKHGDLFHNG; // 0x48
	::System::Int32 DBBIEAADPHC; // 0x4C
	::System::Int32 NJIGEAAKLKA; // 0x50

	::System::Void _ctor(::AJPBPJCLFFD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AJPBPJCLFFD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ACMPPCCHJOA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACMPPCCHJOA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMPPCCHJOA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 JEIAKNBLKII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMPPCCHJOA_JEIAKNBLKII_OFFSET))(this);
	}

	::System::Int32 HKNEHNFDNMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMPPCCHJOA_HKNEHNFDNMO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMPPCCHJOA_LJANCIBECFG_OFFSET))(this);
	}
};
