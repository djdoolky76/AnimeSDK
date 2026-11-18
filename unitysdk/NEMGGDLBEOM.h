#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoUIOverlordFeastMissionConfig; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define NEMGGDLBEOM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x172803B0)
#define NEMGGDLBEOM_JJEEIFCNAMC_OFFSET UNITYSDK_OFFSET(0x172800F0)
#define NEMGGDLBEOM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x172802E0)
#define NEMGGDLBEOM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1727FF30)
#define NEMGGDLBEOM__CTOR_OFFSET UNITYSDK_OFFSET(0x172803A0)

inline static constexpr unsigned int NEMGGDLBEOM_TypeDefinitionIndex = 72022;

class NEMGGDLBEOM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* GLGBIFINHCD; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20
	::UnityEngine::RectTransform* KELADIAIADK; // 0x28
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* DIKGIPJMNPA; // 0x30
	::MoleMole::MonoUIOverlordFeastMissionConfig* AHMFPFACACD; // 0x38
	::UnityEngine::RectTransform* IGLLLLGNOIM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMGGDLBEOM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEMGGDLBEOM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEMGGDLBEOM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMGGDLBEOM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* JJEEIFCNAMC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEMGGDLBEOM_JJEEIFCNAMC_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
