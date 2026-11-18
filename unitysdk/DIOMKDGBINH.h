#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define DIOMKDGBINH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194149B0)
#define DIOMKDGBINH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194148F0)
#define DIOMKDGBINH__CTOR_OFFSET UNITYSDK_OFFSET(0x194149A0)

inline static constexpr unsigned int DIOMKDGBINH_TypeDefinitionIndex = 50521;

class DIOMKDGBINH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* JBIOMNKHFGD; // 0x18
	::UnityEngine::Camera* NGAJLCBIEAK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOMKDGBINH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIOMKDGBINH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIOMKDGBINH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
