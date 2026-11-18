#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class KNLFLMMHALL_1;

#define MEDJPBCPDGB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D1F3E0)
#define MEDJPBCPDGB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D1F350)
#define MEDJPBCPDGB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D1F1E0)
#define MEDJPBCPDGB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1F3D0)

inline static constexpr unsigned int MEDJPBCPDGB_TypeDefinitionIndex = 74688;

class MEDJPBCPDGB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* MJEGFCEPIPB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJPBCPDGB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEDJPBCPDGB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEDJPBCPDGB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJPBCPDGB_KGEBDLGBGNM_OFFSET))(this);
	}
};
