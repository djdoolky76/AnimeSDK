#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ADCGDONEBJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B8EEB0)
#define ADCGDONEBJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B8EDD0)
#define ADCGDONEBJD__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8EEA0)

inline static constexpr unsigned int ADCGDONEBJD_TypeDefinitionIndex = 47118;

class ADCGDONEBJD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ADCMOECNMLG; // 0x18
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x20
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCGDONEBJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADCGDONEBJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADCGDONEBJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
