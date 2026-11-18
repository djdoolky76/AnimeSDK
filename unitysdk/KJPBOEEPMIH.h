#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define KJPBOEEPMIH_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x1A2CDD00)
#define KJPBOEEPMIH_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1A2CDB10)
#define KJPBOEEPMIH_FBOIGPEMGND_OFFSET UNITYSDK_OFFSET(0x1A2CDD10)
#define KJPBOEEPMIH_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x1A2CDCF0)
#define KJPBOEEPMIH_IJMOPNAPGIF_OFFSET UNITYSDK_OFFSET(0x1A2CDCE0)
#define KJPBOEEPMIH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2CDA60)
#define KJPBOEEPMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CDC50)

inline static constexpr unsigned int KJPBOEEPMIH_TypeDefinitionIndex = 47285;

class KJPBOEEPMIH : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::Transform* _HCKEIDHBOEP_k__BackingField; // 0x28
	::UnityEngine::Transform* _DEJNOJBAFDE_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPBOEEPMIH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJPBOEEPMIH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::Transform* IJMOPNAPGIF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPBOEEPMIH_IJMOPNAPGIF_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KJPBOEEPMIH_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Transform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPBOEEPMIH_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void FBOIGPEMGND(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KJPBOEEPMIH_FBOIGPEMGND_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPBOEEPMIH_EFKGNFCEENK_OFFSET))(this);
	}
};
