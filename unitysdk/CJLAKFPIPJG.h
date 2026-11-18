#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CJLAKFPIPJG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A134A0)
#define CJLAKFPIPJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A13350)
#define CJLAKFPIPJG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A13490)

inline static constexpr unsigned int CJLAKFPIPJG_TypeDefinitionIndex = 72681;

class CJLAKFPIPJG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::LayoutElement* CGAEFJBHDCF; // 0x18
	::GCIMMDDIFBJ* DLCCBHOEBPG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PJDCKHPOIOD; // 0x28
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x30
	::UnityEngine::UI::VerticalLayoutGroup* GONIKKNDPCL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLAKFPIPJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJLAKFPIPJG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJLAKFPIPJG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
