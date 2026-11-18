#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/SpecialEffectRoleType.h"
#include "unitysdk/System/Object.h"

class NDCDOAKPMJK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHCEEOMENHK_COLDICILFFA_OFFSET UNITYSDK_OFFSET(0x12562320)
#define LHCEEOMENHK_DPDCFMENBKG_OFFSET UNITYSDK_OFFSET(0x12562440)
#define LHCEEOMENHK_MGMKMBNBHLF_OFFSET UNITYSDK_OFFSET(0x12562260)
#define LHCEEOMENHK__CTOR_OFFSET UNITYSDK_OFFSET(0x125621D0)

inline static constexpr unsigned int LHCEEOMENHK_TypeDefinitionIndex = 84557;

class LHCEEOMENHK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::SpecialEffectRoleType, ::NDCDOAKPMJK*>* MHBLGNDLLEK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCEEOMENHK__CTOR_OFFSET))(this);
	}

	::System::Void MGMKMBNBHLF(::MoleMole::HollowChessboard::SpecialEffectRoleType GHAHPAFPHNI, ::NDCDOAKPMJK* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType, ::NDCDOAKPMJK*))((::PBYTE)hIl2Cpp + LHCEEOMENHK_MGMKMBNBHLF_OFFSET))(this, GHAHPAFPHNI, LJBPECKCCEA);
	}

	::System::Boolean COLDICILFFA(::MoleMole::HollowChessboard::SpecialEffectRoleType GHAHPAFPHNI, ::NDCDOAKPMJK*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType, ::NDCDOAKPMJK*&))((::PBYTE)hIl2Cpp + LHCEEOMENHK_COLDICILFFA_OFFSET))(this, GHAHPAFPHNI, LJBPECKCCEA);
	}

	::System::Void DPDCFMENBKG(::MoleMole::HollowChessboard::SpecialEffectRoleType GHAHPAFPHNI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType))((::PBYTE)hIl2Cpp + LHCEEOMENHK_DPDCFMENBKG_OFFSET))(this, GHAHPAFPHNI);
	}
};
