#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKKNKEFDKFH.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define HPPLDKIOIBD_GPAOHEEKFCD_1_OFFSET UNITYSDK_OFFSET(0x17A63A30)
#define HPPLDKIOIBD_JLCAGKNAIFH_OFFSET UNITYSDK_OFFSET(0x17A63C30)
#define HPPLDKIOIBD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A639E0)

inline static constexpr unsigned int HPPLDKIOIBD_TypeDefinitionIndex = 83753;

class HPPLDKIOIBD : public ::MKKNKEFDKFH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPLDKIOIBD__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* GPAOHEEKFCD_1()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPLDKIOIBD_GPAOHEEKFCD_1_OFFSET))(this);
	}

	::System::Void JLCAGKNAIFH(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + HPPLDKIOIBD_JLCAGKNAIFH_OFFSET))(this, KECKGDFIALJ);
	}
};
