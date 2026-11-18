#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class KNLFLMMHALL_1;

#define EKHBMKOCNEC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17242300)
#define EKHBMKOCNEC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17242270)
#define EKHBMKOCNEC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17242100)
#define EKHBMKOCNEC__CTOR_OFFSET UNITYSDK_OFFSET(0x172422F0)

inline static constexpr unsigned int EKHBMKOCNEC_TypeDefinitionIndex = 57753;

class EKHBMKOCNEC : public ::GIBMJLOJLKD
{
public:
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* MJEGFCEPIPB; // 0x20
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHBMKOCNEC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKHBMKOCNEC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKHBMKOCNEC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHBMKOCNEC_KGEBDLGBGNM_OFFSET))(this);
	}
};
