#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCOOOLCKGLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AIBILFAHGML_BNHEAFCOILJ_OFFSET UNITYSDK_OFFSET(0x19BD7180)
#define AIBILFAHGML_CKJHFNIEHFM_OFFSET UNITYSDK_OFFSET(0x19BD7040)
#define AIBILFAHGML_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BD7290)
#define AIBILFAHGML_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x19BD7380)
#define AIBILFAHGML_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x19BD7490)
#define AIBILFAHGML_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BD6EF0)
#define AIBILFAHGML_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BD6EE0)
#define AIBILFAHGML_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x19BD6F00)
#define AIBILFAHGML__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD6ED0)

inline static constexpr unsigned int AIBILFAHGML_TypeDefinitionIndex = 16356;

class AIBILFAHGML : public ::System::Object
{
public:
	::JCOOOLCKGLM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* OMDLAHBLCAM; // 0x28
	::System::String* IBJJGBDPHFI; // 0x30
	::System::String* IENCBDEPMFJ; // 0x38
	::System::Int32 HEGANBHHIFB; // 0x40
	::System::Int32 JEDEMPHDCAK; // 0x44
	::System::Byte BGNBHAPEFNC; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte GCHCDJCFCEG; // 0x4A
	::System::Byte CNIAANMNOCF; // 0x4B

	::System::Void _ctor(::JCOOOLCKGLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JCOOOLCKGLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AIBILFAHGML__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBILFAHGML_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBILFAHGML_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBILFAHGML_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 CKJHFNIEHFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBILFAHGML_CKJHFNIEHFM_OFFSET))(this);
	}

	::System::String* BNHEAFCOILJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBILFAHGML_BNHEAFCOILJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBILFAHGML_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBILFAHGML_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBILFAHGML_ENJENAJGHFI_OFFSET))(this);
	}
};
