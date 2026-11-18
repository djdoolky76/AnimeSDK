#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AEKBFKJPIPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144CDC70)
#define AEKBFKJPIPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144CDB70)
#define AEKBFKJPIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x144CDC60)

inline static constexpr unsigned int AEKBFKJPIPE_TypeDefinitionIndex = 65648;

class AEKBFKJPIPE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* AFDJNDDFBEA; // 0x18
	::UnityEngine::Transform* EMMBMIMEAHI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKBFKJPIPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AEKBFKJPIPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AEKBFKJPIPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
