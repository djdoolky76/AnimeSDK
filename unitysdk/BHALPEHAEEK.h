#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMusicBattleInLevelInteractWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define BHALPEHAEEK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x115C6EC0)
#define BHALPEHAEEK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x115C6E30)
#define BHALPEHAEEK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115C6C30)
#define BHALPEHAEEK__CTOR_OFFSET UNITYSDK_OFFSET(0x115C6EB0)

inline static constexpr unsigned int BHALPEHAEEK_TypeDefinitionIndex = 72632;

class BHALPEHAEEK : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* PLCKGODBCPF; // 0x18
	::UnityEngine::GameObject* JKBBACJLBPP; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIMusicBattleInLevelInteractWidgetController*>* NDEMKLLJOKN; // 0x28
	::UnityEngine::RectTransform* AMDDAMFPOKG; // 0x30
	::GCIMMDDIFBJ* IADGCILHHJC; // 0x38
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALPEHAEEK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHALPEHAEEK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHALPEHAEEK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALPEHAEEK_KGEBDLGBGNM_OFFSET))(this);
	}
};
