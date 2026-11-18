#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NBLAEBCLJDC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18F99300)
#define NBLAEBCLJDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18F991D0)
#define NBLAEBCLJDC__CTOR_OFFSET UNITYSDK_OFFSET(0x18F992F0)

inline static constexpr unsigned int NBLAEBCLJDC_TypeDefinitionIndex = 86255;

class NBLAEBCLJDC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Camera* MLIJANPAGNI; // 0x18
	::UnityEngine::Transform* LAOKKBHIDNM; // 0x20
	::UnityEngine::Transform* BKEHFDNGNFA; // 0x28
	::UnityEngine::Transform* LEDKCGJPLBL; // 0x30
	::UnityEngine::Transform* MMOMIGGCMGL; // 0x38
	::UnityEngine::GameObject* OBEFJOIENCO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLAEBCLJDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBLAEBCLJDC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBLAEBCLJDC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
