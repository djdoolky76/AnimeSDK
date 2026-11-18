#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/AimRectColor.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define FAFHGMMJNAP_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x171338E0)
#define FAFHGMMJNAP_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x17133700)

inline static constexpr unsigned int FAFHGMMJNAP_TypeDefinitionIndex = 60068;

class FAFHGMMJNAP : public ::System::Object
{
public:
	static ::System::Void KIJAJIHPBDL(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::ProtoScript::AimRectColor JBBFCGAMDHI, ::System::Boolean DOFIOIBBJBI, ::System::Boolean FJJDGFMIDCN, ::System::Boolean KNCEDDLILBI)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::ProtoScript::AimRectColor, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFHGMMJNAP_KIJAJIHPBDL_OFFSET))(KECKGDFIALJ, JBBFCGAMDHI, DOFIOIBBJBI, FJJDGFMIDCN, KNCEDDLILBI);
	}

	static ::System::Void BMGEEIJFLIJ(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + FAFHGMMJNAP_BMGEEIJFLIJ_OFFSET))(KECKGDFIALJ);
	}
};
