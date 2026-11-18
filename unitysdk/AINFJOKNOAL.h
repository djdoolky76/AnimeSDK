#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPGPIMOAEIA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AINFJOKNOAL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A520220)
#define AINFJOKNOAL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5205E0)
#define AINFJOKNOAL_IPLOBLFNPHD_OFFSET UNITYSDK_OFFSET(0x1A520310)
#define AINFJOKNOAL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5205F0)
#define AINFJOKNOAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A520210)

inline static constexpr unsigned int AINFJOKNOAL_TypeDefinitionIndex = 10790;

class AINFJOKNOAL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LFJPAINMOIM; // 0x10
	::EPGPIMOAEIA HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* EFDJOFELLAP; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* PMIILPADEPK; // 0x38
	::System::Int32 JABJBJHKDMH; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Boolean PLONDMCNFIM; // 0x46
	::System::Byte ACIOBDEBDNK; // 0x47
	::System::Int32 OKBBGPGIODD; // 0x48

	::System::Void _ctor(::EPGPIMOAEIA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EPGPIMOAEIA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AINFJOKNOAL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINFJOKNOAL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IPLOBLFNPHD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINFJOKNOAL_IPLOBLFNPHD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AINFJOKNOAL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AINFJOKNOAL_LJANCIBECFG_OFFSET))(this);
	}
};
