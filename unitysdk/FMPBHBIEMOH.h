#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMPBHBIEMOH__CTOR_OFFSET UNITYSDK_OFFSET(0x116C0010)

inline static constexpr unsigned int FMPBHBIEMOH_TypeDefinitionIndex = 86088;

class FMPBHBIEMOH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BEIHMABOECG; // 0x10
	::MoleMole::InLevelBuddyDataItem* LCEFNMNLJOE; // 0x18
	::MoleMole::InLevelAvatarDataItem* GFPPJGKEOPC; // 0x20
	::FBHPDPBIGPK* NGKCMJCKBOC; // 0x28
	::System::UInt32 CNMGPKNCNLP; // 0x30
	::System::Int32 DMBMOMEKJFO; // 0x34
	::System::UInt32 ENGJLLKGDKN; // 0x38
	::System::Boolean CFHFNGBFPGE; // 0x3C
	::System::Byte _padding0[0x3];
	::System::UInt32 CCOIAGNGLNK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPBHBIEMOH__CTOR_OFFSET))(this);
	}
};
