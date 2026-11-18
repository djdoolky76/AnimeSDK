#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define OIFFHDLKJIF_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0xFB8FBC0)
#define OIFFHDLKJIF_CABGMDINELM_OFFSET UNITYSDK_OFFSET(0xFB8F850)
#define OIFFHDLKJIF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xFB8F730)
#define OIFFHDLKJIF__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8F840)

inline static constexpr unsigned int OIFFHDLKJIF_TypeDefinitionIndex = 64369;

class OIFFHDLKJIF : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Int32>* APKIKLPPHEA; // 0x88
	::LJHFMILANJA_1<::System::Int32>* LAGANLOECDA; // 0x90
	::LJHFMILANJA_1<::System::Boolean>* HLJPINPGIJN; // 0x98
	::LJHFMILANJA_1<::System::Int32>* IKOFJEHPPAN; // 0xA0
	::LJHFMILANJA_1<::System::String*>* AMEEMEPHGEL; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFFHDLKJIF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFFHDLKJIF_ONCREATEPROPERTY_OFFSET))(this);
	}

	static ::OIFFHDLKJIF* CABGMDINELM(::System::Int32 MGMDLMBEDJF, ::System::Int32 GHIBJCNHPAF)
	{
		return ((::OIFFHDLKJIF*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OIFFHDLKJIF_CABGMDINELM_OFFSET))(MGMDLMBEDJF, GHIBJCNHPAF);
	}

	::System::Void AFNKMJDPILJ(::System::Boolean NPFIONPDFED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIFFHDLKJIF_AFNKMJDPILJ_OFFSET))(this, NPFIONPDFED);
	}
};
