#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCKFCFGIDIE.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define INAPIMHDBKI_FEGFHEIEMNO_OFFSET UNITYSDK_OFFSET(0x13AAFF40)
#define INAPIMHDBKI_JEGBEJLENLG_OFFSET UNITYSDK_OFFSET(0x13AAFF70)
#define INAPIMHDBKI_OHPBEBBABLK_OFFSET UNITYSDK_OFFSET(0x13AB00D0)
#define INAPIMHDBKI__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB00E0)

inline static constexpr unsigned int INAPIMHDBKI_TypeDefinitionIndex = 92182;

class INAPIMHDBKI : public ::OCKFCFGIDIE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INAPIMHDBKI__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 FEGFHEIEMNO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + INAPIMHDBKI_FEGFHEIEMNO_OFFSET))(this);
	}

	::System::Boolean OHPBEBBABLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INAPIMHDBKI_OHPBEBBABLK_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 JEGBEJLENLG()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + INAPIMHDBKI_JEGBEJLENLG_OFFSET))();
	}
};
