#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OLANKKAICPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1F042180)
#define OLANKKAICPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F042050)
#define OLANKKAICPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F042170)

inline static constexpr unsigned int OLANKKAICPO_TypeDefinitionIndex = 96632;

class OLANKKAICPO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FMHPAIJLHDK; // 0x18
	::UnityEngine::GameObject* EDEFLFIKNFK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AIKOEPNJMNO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CDLNLDILDGA; // 0x30
	::UnityEngine::GameObject* GNJILCIKOJO; // 0x38
	::UnityEngine::Animation* KOCAHFMIGDO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLANKKAICPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLANKKAICPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLANKKAICPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
