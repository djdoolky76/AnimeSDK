#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGLDHBAGEEE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IMOAFCKIDDG_BJLLDMGCCCJ_OFFSET UNITYSDK_OFFSET(0x1B4F13F0)
#define IMOAFCKIDDG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4F1300)
#define IMOAFCKIDDG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4F12F0)
#define IMOAFCKIDDG_HDKJKKFGBMA_OFFSET UNITYSDK_OFFSET(0x1B4F11E0)
#define IMOAFCKIDDG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4F11D0)
#define IMOAFCKIDDG_NIPCEPKFKHA_OFFSET UNITYSDK_OFFSET(0x1B4F10C0)
#define IMOAFCKIDDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F10B0)

inline static constexpr unsigned int IMOAFCKIDDG_TypeDefinitionIndex = 16674;

class IMOAFCKIDDG : public ::System::Object
{
public:
	::System::String* DHINGMEDJCL; // 0x10
	::CGLDHBAGEEE HBDPAIKANDB; // 0x18
	::System::String* BDGCGNMONMJ; // 0x28
	::System::String* OJOGPBJECFL; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::CGLDHBAGEEE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CGLDHBAGEEE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMOAFCKIDDG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NIPCEPKFKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAFCKIDDG_NIPCEPKFKHA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAFCKIDDG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HDKJKKFGBMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAFCKIDDG_HDKJKKFGBMA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMOAFCKIDDG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAFCKIDDG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* BJLLDMGCCCJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAFCKIDDG_BJLLDMGCCCJ_OFFSET))(this);
	}
};
