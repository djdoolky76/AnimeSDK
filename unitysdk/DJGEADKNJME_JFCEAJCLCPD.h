#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }

#define DJGEADKNJME_JFCEAJCLCPD_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0x183452D0)
#define DJGEADKNJME_JFCEAJCLCPD__CTOR_OFFSET UNITYSDK_OFFSET(0x183452C0)

inline static constexpr unsigned int DJGEADKNJME_JFCEAJCLCPD_TypeDefinitionIndex = 48488;

class DJGEADKNJME_JFCEAJCLCPD : public ::System::Object
{
public:
	::RootMotion::FinalIK::IKSolver_UpdateDelegate* AMHGBGMOMLL; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGEADKNJME_JFCEAJCLCPD__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGEADKNJME_JFCEAJCLCPD_FDLNIEGEOLI_OFFSET))(this);
	}
};
