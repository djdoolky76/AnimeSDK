#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ANPCCPNMOBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16D983F0)
#define ANPCCPNMOBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16D982E0)
#define ANPCCPNMOBI__CTOR_OFFSET UNITYSDK_OFFSET(0x16D983E0)

inline static constexpr unsigned int ANPCCPNMOBI_TypeDefinitionIndex = 70758;

class ANPCCPNMOBI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* AEGAPMOGAIO; // 0x18
	::UnityEngine::GameObject* OLLEHOJAOGN; // 0x20
	::MonoUITableScrollV2* GPIAMKAJBFA; // 0x28
	::MonoUITableScrollV2* KNHJHAJDGED; // 0x30
	::UnityEngine::GameObject* AKCBCNDKPFO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPCCPNMOBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANPCCPNMOBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANPCCPNMOBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
