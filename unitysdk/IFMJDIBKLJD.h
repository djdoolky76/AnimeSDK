#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKEKAMFGHCN.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define IFMJDIBKLJD_CKOBCIMOOIC_OFFSET UNITYSDK_OFFSET(0x12EA9C00)
#define IFMJDIBKLJD_LAMOHHGCDDN_OFFSET UNITYSDK_OFFSET(0x12EA9B00)
#define IFMJDIBKLJD__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA9BF0)

inline static constexpr unsigned int IFMJDIBKLJD_TypeDefinitionIndex = 85389;

class IFMJDIBKLJD : public ::EKEKAMFGHCN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMJDIBKLJD__CTOR_OFFSET))(this);
	}

	::System::Void LAMOHHGCDDN(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + IFMJDIBKLJD_LAMOHHGCDDN_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void CKOBCIMOOIC(::MoleMole::HollowChessboard::HollowEntity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + IFMJDIBKLJD_CKOBCIMOOIC_OFFSET))(this, MIALFKCCCPI);
	}
};
