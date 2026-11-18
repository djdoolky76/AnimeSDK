#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IODGJCHJBBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x141FFF20)
#define IODGJCHJBBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x141FFE40)
#define IODGJCHJBBI__CTOR_OFFSET UNITYSDK_OFFSET(0x141FFF10)

inline static constexpr unsigned int IODGJCHJBBI_TypeDefinitionIndex = 69715;

class IODGJCHJBBI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Camera* NGAJLCBIEAK; // 0x18
	::UnityEngine::GameObject* BKCDDOCPLOP; // 0x20
	::UnityEngine::Transform* JBIOMNKHFGD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODGJCHJBBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IODGJCHJBBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IODGJCHJBBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
