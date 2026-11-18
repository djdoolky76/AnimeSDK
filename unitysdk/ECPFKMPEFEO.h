#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define ECPFKMPEFEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15893290)
#define ECPFKMPEFEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15893190)
#define ECPFKMPEFEO__CTOR_OFFSET UNITYSDK_OFFSET(0x15893280)

inline static constexpr unsigned int ECPFKMPEFEO_TypeDefinitionIndex = 46580;

class ECPFKMPEFEO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* CKOCNHHFEEN; // 0x18
	::UnityEngine::Transform* MLOEEKDIAHN; // 0x20
	::UnityEngine::Camera* MLIJANPAGNI; // 0x28
	::UnityEngine::Transform* FHHIKAGKLJO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFKMPEFEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECPFKMPEFEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECPFKMPEFEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
