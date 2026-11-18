#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define OCOLMAIIMAG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xB30AAC0)
#define OCOLMAIIMAG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xB30A9E0)
#define OCOLMAIIMAG__CTOR_OFFSET UNITYSDK_OFFSET(0xB30AAB0)

inline static constexpr unsigned int OCOLMAIIMAG_TypeDefinitionIndex = 77408;

class OCOLMAIIMAG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BKCDDOCPLOP; // 0x18
	::UnityEngine::Camera* NGAJLCBIEAK; // 0x20
	::UnityEngine::Transform* JBIOMNKHFGD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOLMAIIMAG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCOLMAIIMAG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCOLMAIIMAG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
