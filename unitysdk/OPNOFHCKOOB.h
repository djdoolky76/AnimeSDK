#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define OPNOFHCKOOB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1AFC89E0)
#define OPNOFHCKOOB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1AFC8990)
#define OPNOFHCKOOB_NFOMLBJMBFO_OFFSET UNITYSDK_OFFSET(0x1AFC87A0)
#define OPNOFHCKOOB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1AFC85C0)
#define OPNOFHCKOOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC89D0)

inline static constexpr unsigned int OPNOFHCKOOB_TypeDefinitionIndex = 45822;

class OPNOFHCKOOB : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* KBHFBCJEHEN; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x28
	::UnityEngine::RectTransform* JLLJPNMPKJA; // 0x30
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x38
	::UnityEngine::RectTransform* CHCCPCCKJBG; // 0x40
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNOFHCKOOB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPNOFHCKOOB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNOFHCKOOB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* NFOMLBJMBFO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPNOFHCKOOB_NFOMLBJMBFO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPNOFHCKOOB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
