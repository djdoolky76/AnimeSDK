#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadge; }

#define PIJAKOPBKMD_KJAJCEFFFJI_PGHBOMFOEML_OFFSET UNITYSDK_OFFSET(0x1C2AEAC0)
#define PIJAKOPBKMD_KJAJCEFFFJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2AEAB0)

inline static constexpr unsigned int PIJAKOPBKMD_KJAJCEFFFJI_TypeDefinitionIndex = 52678;

class PIJAKOPBKMD_KJAJCEFFFJI : public ::System::Object
{
public:
	::System::Int32 ABEFOPGDDBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJAKOPBKMD_KJAJCEFFFJI__CTOR_OFFSET))(this);
	}

	::System::Void PGHBOMFOEML(::MoleMole::NotificationBadge* NLHLAHNMNMD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*))((::PBYTE)hIl2Cpp + PIJAKOPBKMD_KJAJCEFFFJI_PGHBOMFOEML_OFFSET))(this, NLHLAHNMNMD);
	}
};
