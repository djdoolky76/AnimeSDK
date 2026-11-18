#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOCCCDLFOPJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }

#define CAMODDIBNEG_ACALKPGHILE_OFFSET UNITYSDK_OFFSET(0x145A0490)
#define CAMODDIBNEG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145A0420)
#define CAMODDIBNEG_HHINJPDJNIA_OFFSET UNITYSDK_OFFSET(0x145A0390)
#define CAMODDIBNEG__CTOR_OFFSET UNITYSDK_OFFSET(0x145A0480)

inline static constexpr unsigned int CAMODDIBNEG_TypeDefinitionIndex = 62377;

class CAMODDIBNEG : public ::JOCCCDLFOPJ
{
public:
	::MoleMole::UIBaseController* KDDMAFEJOLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMODDIBNEG__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* HHINJPDJNIA()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMODDIBNEG_HHINJPDJNIA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMODDIBNEG_DISPOSE_OFFSET))(this);
	}

	::System::Void ACALKPGHILE(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CAMODDIBNEG_ACALKPGHILE_OFFSET))(this, OHOGDOMNHNK);
	}
};
