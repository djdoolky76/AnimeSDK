#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define OAPKFLBHOEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BF1420)
#define OAPKFLBHOEF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BF1330)
#define OAPKFLBHOEF_MOEGOHIAHGA_OFFSET UNITYSDK_OFFSET(0xFD5BA90)
#define OAPKFLBHOEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFD5B880)
#define OAPKFLBHOEF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD5BC80)

inline static constexpr unsigned int OAPKFLBHOEF_TypeDefinitionIndex = 79777;

class OAPKFLBHOEF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NNFHDDEELHD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HEHLBOBJBCA; // 0x20
	::FGCOIBFFCHB* PNMKACIKKMM; // 0x28
	::UnityEngine::RectTransform* JCLAHMKMNAI; // 0x30
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* INLGHOJKAOD; // 0x38
	::FGCOIBFFCHB* CHDLLELAEIH; // 0x40
	::FGCOIBFFCHB* OHBJCKIHICL; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GFCBFCDKPLC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPKFLBHOEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAPKFLBHOEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* MOEGOHIAHGA(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAPKFLBHOEF_MOEGOHIAHGA_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPKFLBHOEF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAPKFLBHOEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
