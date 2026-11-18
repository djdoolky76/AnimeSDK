#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OEMBHNDDFNO_CLGBCBLNONK_OFFSET UNITYSDK_OFFSET(0x3BCD30)
#define OEMBHNDDFNO_EPBMMHEJOJE_OFFSET UNITYSDK_OFFSET(0x4B88D0)
#define OEMBHNDDFNO_GLMPPIMOOCD_OFFSET UNITYSDK_OFFSET(0x3D1760)
#define OEMBHNDDFNO_IGBHNKNPIAK_OFFSET UNITYSDK_OFFSET(0x3F2230)
#define OEMBHNDDFNO_IOJDICOEGII_1_OFFSET UNITYSDK_OFFSET(0x7CB5D0)
#define OEMBHNDDFNO_IOJDICOEGII_OFFSET UNITYSDK_OFFSET(0x7CB5B0)
#define OEMBHNDDFNO_LMPKMPEGJOF_OFFSET UNITYSDK_OFFSET(0x7CB5C0)
#define OEMBHNDDFNO_OPJLPGEEDCI_OFFSET UNITYSDK_OFFSET(0x3583D0)

inline static constexpr unsigned int OEMBHNDDFNO_TypeDefinitionIndex = 60823;

struct alignas(4) OEMBHNDDFNO
{
	::System::Boolean _CJDIPENJMDD_k__BackingField; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 _DMFOKIDGJHE_k__BackingField; // 0x14
	::UnityEngine::Vector3 _PEALGLCJFPI_k__BackingField; // 0x20

	::System::Boolean IOJDICOEGII(::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Vector3& FMJGOHNLJNA, ::System::Boolean GBKFPPEFGJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + OEMBHNDDFNO_IOJDICOEGII_OFFSET))(this, OHOGDOMNHNK, FMJGOHNLJNA, GBKFPPEFGJC);
	}

	::UnityEngine::Vector3 IGBHNKNPIAK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNDDFNO_IGBHNKNPIAK_OFFSET))(this);
	}

	::System::Boolean OPJLPGEEDCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNDDFNO_OPJLPGEEDCI_OFFSET))(this);
	}

	::System::Void LMPKMPEGJOF(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEMBHNDDFNO_LMPKMPEGJOF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EPBMMHEJOJE(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEMBHNDDFNO_EPBMMHEJOJE_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 GLMPPIMOOCD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNDDFNO_GLMPPIMOOCD_OFFSET))(this);
	}

	/*
	::System::Boolean IOJDICOEGII_1(::OEMBHNDDFNO& LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OEMBHNDDFNO&))((::PBYTE)hIl2Cpp + OEMBHNDDFNO_IOJDICOEGII_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void CLGBCBLNONK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEMBHNDDFNO_CLGBCBLNONK_OFFSET))(this, EGEGIMGMJHN);
	}
};
