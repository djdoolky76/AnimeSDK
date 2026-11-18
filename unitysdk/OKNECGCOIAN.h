#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class CBCLGFEGHLJ_1;

#define OKNECGCOIAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F81A70)
#define OKNECGCOIAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F819E0)
#define OKNECGCOIAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F81840)
#define OKNECGCOIAN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F81A60)

inline static constexpr unsigned int OKNECGCOIAN_TypeDefinitionIndex = 88055;

class OKNECGCOIAN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* AFDJNDDFBEA; // 0x18
	::UnityEngine::Transform* EMMBMIMEAHI; // 0x20
	::CBCLGFEGHLJ_1<::MoleMole::UIItemIconBtnWidgetController*>* IOKMAADCDAO; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNECGCOIAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKNECGCOIAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKNECGCOIAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNECGCOIAN_KGEBDLGBGNM_OFFSET))(this);
	}
};
