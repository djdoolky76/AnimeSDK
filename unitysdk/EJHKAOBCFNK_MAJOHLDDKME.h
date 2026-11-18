#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJHKAOBCFNK;
namespace System { class Action; }

#define EJHKAOBCFNK_MAJOHLDDKME_INGIOABDBMP_OFFSET UNITYSDK_OFFSET(0x1699F670)
#define EJHKAOBCFNK_MAJOHLDDKME__CTOR_OFFSET UNITYSDK_OFFSET(0x1699F660)

inline static constexpr unsigned int EJHKAOBCFNK_MAJOHLDDKME_TypeDefinitionIndex = 39806;

class EJHKAOBCFNK_MAJOHLDDKME : public ::System::Object
{
public:
	::System::Action* DIENEAELFIL; // 0x10
	::EJHKAOBCFNK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHKAOBCFNK_MAJOHLDDKME__CTOR_OFFSET))(this);
	}

	::System::Void INGIOABDBMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHKAOBCFNK_MAJOHLDDKME_INGIOABDBMP_OFFSET))(this);
	}
};
