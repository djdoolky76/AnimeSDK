#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

#define ELCIGKLDNCF_LANLNFCHBGK_DMAGKBMNAGF_OFFSET UNITYSDK_OFFSET(0x169ACFE0)
#define ELCIGKLDNCF_LANLNFCHBGK_DNDPPHKLJDP_OFFSET UNITYSDK_OFFSET(0x169AC920)
#define ELCIGKLDNCF_LANLNFCHBGK_KNKHDJMGIND_OFFSET UNITYSDK_OFFSET(0x169ACE40)
#define ELCIGKLDNCF_LANLNFCHBGK_MEPNOONMKFA_OFFSET UNITYSDK_OFFSET(0x169ACF10)
#define ELCIGKLDNCF_LANLNFCHBGK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x169ACB30)
#define ELCIGKLDNCF_LANLNFCHBGK__CTOR_OFFSET UNITYSDK_OFFSET(0x169AC890)

inline static constexpr unsigned int ELCIGKLDNCF_LANLNFCHBGK_TypeDefinitionIndex = 53123;

class ELCIGKLDNCF_LANLNFCHBGK : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* ODHNNLIIMHF; // 0x10
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* MKONHOLOOGI; // 0x18
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* KJPPNBDAOOI; // 0x20
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* DJLMAMFGIFN; // 0x28
	::MoleMole::Vector2Int EFEJBBFGKDH; // 0x30

	::System::Void _ctor(::System::Int32 BEPMDFENBMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LANLNFCHBGK__CTOR_OFFSET))(this, BEPMDFENBMH);
	}

	::System::Int32 DNDPPHKLJDP(::MoleMole::HollowChessboard::HollowCell MONEHIFPAOC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LANLNFCHBGK_DNDPPHKLJDP_OFFSET))(this, MONEHIFPAOC);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LANLNFCHBGK_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void KNKHDJMGIND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LANLNFCHBGK_KNKHDJMGIND_OFFSET))(this);
	}

	::System::Void MEPNOONMKFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LANLNFCHBGK_MEPNOONMKFA_OFFSET))(this);
	}

	::System::Void DMAGKBMNAGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LANLNFCHBGK_DMAGKBMNAGF_OFFSET))(this);
	}
};
