#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class KNLFLMMHALL_1;

#define BPIPKNILKMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1858DE30)
#define BPIPKNILKMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1858DD20)
#define BPIPKNILKMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1858DB80)
#define BPIPKNILKMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1858DE20)

inline static constexpr unsigned int BPIPKNILKMA_TypeDefinitionIndex = 75007;

class BPIPKNILKMA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* NPCIPCPJEMF; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* EHMLMJKEJMM; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIPKNILKMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPIPKNILKMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIPKNILKMA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPIPKNILKMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
