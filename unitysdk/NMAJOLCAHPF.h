#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define NMAJOLCAHPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16B87980)
#define NMAJOLCAHPF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16B878D0)
#define NMAJOLCAHPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B87750)
#define NMAJOLCAHPF__CTOR_OFFSET UNITYSDK_OFFSET(0x16B87970)

inline static constexpr unsigned int NMAJOLCAHPF_TypeDefinitionIndex = 54696;

class NMAJOLCAHPF : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* OOKOLNGACGE; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* NHKFNMKDCAB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAJOLCAHPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMAJOLCAHPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMAJOLCAHPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAJOLCAHPF_KGEBDLGBGNM_OFFSET))(this);
	}
};
