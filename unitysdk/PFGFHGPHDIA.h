#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
template <typename T> class KNLFLMMHALL_1;

#define PFGFHGPHDIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FEC5140)
#define PFGFHGPHDIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FEC50B0)
#define PFGFHGPHDIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FEC4F10)
#define PFGFHGPHDIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEC5130)

inline static constexpr unsigned int PFGFHGPHDIA_TypeDefinitionIndex = 95031;

class PFGFHGPHDIA : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* ANNCKFHINCI; // 0x18
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGFHGPHDIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFGFHGPHDIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFGFHGPHDIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGFHGPHDIA_KGEBDLGBGNM_OFFSET))(this);
	}
};
