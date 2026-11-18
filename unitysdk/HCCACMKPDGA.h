#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HCCACMKPDGA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D81F20)
#define HCCACMKPDGA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D81E20)
#define HCCACMKPDGA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D81F10)

inline static constexpr unsigned int HCCACMKPDGA_TypeDefinitionIndex = 50617;

class HCCACMKPDGA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* PIHFPFDGOLO; // 0x18
	::UnityEngine::RectTransform* ILFODNLLKCP; // 0x20
	::UnityEngine::Camera* NGAJLCBIEAK; // 0x28
	::UnityEngine::Transform* KIGANJIPBCF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCACMKPDGA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCCACMKPDGA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCCACMKPDGA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
