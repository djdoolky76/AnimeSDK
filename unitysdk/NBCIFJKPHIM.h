#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBFIPMDNMMH.h"
#include "unitysdk/JEKOAKDHOEM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBCIFJKPHIM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C091240)
#define NBCIFJKPHIM_DCNNKANHIAF_OFFSET UNITYSDK_OFFSET(0x1C091330)
#define NBCIFJKPHIM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C091BE0)
#define NBCIFJKPHIM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C0918D0)
#define NBCIFJKPHIM_OBOFHMKOOOO_OFFSET UNITYSDK_OFFSET(0x1C091600)
#define NBCIFJKPHIM_PJDKMOGGHFD_OFFSET UNITYSDK_OFFSET(0x1C0918E0)
#define NBCIFJKPHIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C091230)

inline static constexpr unsigned int NBCIFJKPHIM_TypeDefinitionIndex = 17701;

class NBCIFJKPHIM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LCEGIDAHOOA; // 0x10
	::System::String* NDPCGJDABOM; // 0x18
	::JEKOAKDHOEM HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::EBFIPMDNMMH>* BBGLBLMGMJN; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* JHBIBBMBIBF; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* IPNEDOLICPH; // 0x48
	::System::Int32 NNPNCDADEDD; // 0x50
	::System::Int32 OIBLHABFDAG; // 0x54
	::System::Byte CNIAANMNOCF; // 0x58
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x59
	::System::Byte ACIOBDEBDNK; // 0x5A

	::System::Void _ctor(::JEKOAKDHOEM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JEKOAKDHOEM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NBCIFJKPHIM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIFJKPHIM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DCNNKANHIAF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIFJKPHIM_DCNNKANHIAF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OBOFHMKOOOO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIFJKPHIM_OBOFHMKOOOO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIFJKPHIM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::EBFIPMDNMMH>* PJDKMOGGHFD()
	{
		return ((::System::Collections::Generic::List_1<::EBFIPMDNMMH>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIFJKPHIM_PJDKMOGGHFD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBCIFJKPHIM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
