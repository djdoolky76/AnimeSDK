#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define PEOGFCFGJCL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x136F6890)
#define PEOGFCFGJCL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x136F6780)
#define PEOGFCFGJCL__CTOR_OFFSET UNITYSDK_OFFSET(0x136F6880)

inline static constexpr unsigned int PEOGFCFGJCL_TypeDefinitionIndex = 59386;

class PEOGFCFGJCL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ECLAGPFBODK; // 0x18
	::UnityEngine::GameObject* BOBDFCAOAEK; // 0x20
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x28
	::UnityEngine::GameObject* LFLDJMFANGP; // 0x30
	::UnityEngine::GameObject* OCNHMFFHIEN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOGFCFGJCL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEOGFCFGJCL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEOGFCFGJCL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
