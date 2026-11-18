#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitle05EDPopWindowController; }
namespace System { class String; }

#define AACHMNJONNP_FDJMKKPCHJA_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x17C902E0)
#define AACHMNJONNP_FDJMKKPCHJA_JAGFDKFNHBK_OFFSET UNITYSDK_OFFSET(0x17C90930)
#define AACHMNJONNP_FDJMKKPCHJA_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x17C90790)
#define AACHMNJONNP_FDJMKKPCHJA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C90920)

inline static constexpr unsigned int AACHMNJONNP_FDJMKKPCHJA_TypeDefinitionIndex = 74675;

class AACHMNJONNP_FDJMKKPCHJA : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitle05EDPopWindowController** StaticGet_GMMENLDPHGN()
	{
		return (::MoleMole::UIGeneralSubtitle05EDPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(AACHMNJONNP_FDJMKKPCHJA_TypeDefinitionIndex)->GetStaticField(0x3A170);
	}
	::MoleMole::UIGeneralSubtitle05EDPopWindowController* JNIEMLEMCHN; // 0x10
	::System::Boolean EGBFGHNFADM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACHMNJONNP_FDJMKKPCHJA__CTOR_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA(::System::String* GDGBFNGECIL, ::System::String* AJGNMLACKEB, ::System::String* BGGCKELBOBA, ::Il2CppArray<::System::String*>* KHJHONHJHED, ::System::String* IPJFNGLEHPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + AACHMNJONNP_FDJMKKPCHJA_HFBPONNNLBA_OFFSET))(this, GDGBFNGECIL, AJGNMLACKEB, BGGCKELBOBA, KHJHONHJHED, IPJFNGLEHPD);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACHMNJONNP_FDJMKKPCHJA_LJAPJFDPIKF_OFFSET))(this);
	}

	static ::System::Void JAGFDKFNHBK(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AACHMNJONNP_FDJMKKPCHJA_JAGFDKFNHBK_OFFSET))(NPPMJEIPMFC);
	}
};
