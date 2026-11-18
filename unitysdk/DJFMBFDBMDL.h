#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DJFMBFDBMDL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15A4C7A0)
#define DJFMBFDBMDL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15A4C6C0)
#define DJFMBFDBMDL__CTOR_OFFSET UNITYSDK_OFFSET(0x15A4C790)

inline static constexpr unsigned int DJFMBFDBMDL_TypeDefinitionIndex = 41518;

class DJFMBFDBMDL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EJFHCILHCHH; // 0x18
	::UnityEngine::Transform* JBIOMNKHFGD; // 0x20
	::UnityEngine::Camera* NGAJLCBIEAK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFMBFDBMDL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJFMBFDBMDL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJFMBFDBMDL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
