#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }
template <typename T> class KNLFLMMHALL_1;

#define BKMOIBFLAEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18D9B600)
#define BKMOIBFLAEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18D9B550)
#define BKMOIBFLAEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18D9B3B0)
#define BKMOIBFLAEP__CTOR_OFFSET UNITYSDK_OFFSET(0x18D9B5F0)

inline static constexpr unsigned int BKMOIBFLAEP_TypeDefinitionIndex = 87183;

class BKMOIBFLAEP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILinearProgressBar* OBEMLOACGAF; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* MJGBHAMEOKN; // 0x20
	::UnityEngine::Transform* MJMGANKGIFM; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* KPMPBLHPLMI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMOIBFLAEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKMOIBFLAEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMOIBFLAEP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKMOIBFLAEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
