#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAFPFIMHDPF_LKINJKMAHFD;
namespace System { class String; }

#define OAFPFIMHDPF_AJOHDPBGMLM_KICAPPDBEKB_OFFSET UNITYSDK_OFFSET(0x1291A4C0)
#define OAFPFIMHDPF_AJOHDPBGMLM_MAOMFMJBOHL_OFFSET UNITYSDK_OFFSET(0x1291A310)
#define OAFPFIMHDPF_AJOHDPBGMLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1291A300)

inline static constexpr unsigned int OAFPFIMHDPF_AJOHDPBGMLM_TypeDefinitionIndex = 75076;

class OAFPFIMHDPF_AJOHDPBGMLM : public ::System::Object
{
public:
	::System::String* EFAOHLJAGOJ; // 0x10
	::OAFPFIMHDPF_LKINJKMAHFD* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_AJOHDPBGMLM__CTOR_OFFSET))(this);
	}

	::System::Void MAOMFMJBOHL(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_AJOHDPBGMLM_MAOMFMJBOHL_OFFSET))(this, FBILHHBPEHD);
	}

	::System::Void KICAPPDBEKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_AJOHDPBGMLM_KICAPPDBEKB_OFFSET))(this);
	}
};
