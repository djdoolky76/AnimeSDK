#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define NGPOIKCAPIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10D76AA0)
#define NGPOIKCAPIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10D76940)
#define NGPOIKCAPIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10D766A0)
#define NGPOIKCAPIA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D76A90)

inline static constexpr unsigned int NGPOIKCAPIA_TypeDefinitionIndex = 71628;

class NGPOIKCAPIA : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* PKBICAMJBKH; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* PKJABODEACM; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* MJJGFDCKKCE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x30
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* MBCNAFEOGAE; // 0x40
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPOIKCAPIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGPOIKCAPIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGPOIKCAPIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPOIKCAPIA_KGEBDLGBGNM_OFFSET))(this);
	}
};
