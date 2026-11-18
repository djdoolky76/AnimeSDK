#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDEHKOINALK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HEFNAHKNAOL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1746FD30)
#define HEFNAHKNAOL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1746FE30)
#define HEFNAHKNAOL_GMJJLLDDMFM_OFFSET UNITYSDK_OFFSET(0x1746FF50)
#define HEFNAHKNAOL_LDBNBJGKCCO_OFFSET UNITYSDK_OFFSET(0x1746FE40)
#define HEFNAHKNAOL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1746FE20)
#define HEFNAHKNAOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1746FD20)

inline static constexpr unsigned int HEFNAHKNAOL_TypeDefinitionIndex = 15855;

class HEFNAHKNAOL : public ::System::Object
{
public:
	::PDEHKOINALK HBDPAIKANDB; // 0x10
	::System::String* HJAHMNFEPEP; // 0x20
	::System::String* HEKLGMFDJEJ; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::PDEHKOINALK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PDEHKOINALK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HEFNAHKNAOL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFNAHKNAOL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFNAHKNAOL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEFNAHKNAOL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LDBNBJGKCCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFNAHKNAOL_LDBNBJGKCCO_OFFSET))(this);
	}

	::System::String* GMJJLLDDMFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFNAHKNAOL_GMJJLLDDMFM_OFFSET))(this);
	}
};
