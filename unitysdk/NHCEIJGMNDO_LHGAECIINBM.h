#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
class NHCEIJGMNDO;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define NHCEIJGMNDO_LHGAECIINBM_OEOLEKCAOEE_OFFSET UNITYSDK_OFFSET(0x12FE6DC0)
#define NHCEIJGMNDO_LHGAECIINBM__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE6D60)

inline static constexpr unsigned int NHCEIJGMNDO_LHGAECIINBM_TypeDefinitionIndex = 80420;

class NHCEIJGMNDO_LHGAECIINBM : public ::System::Object
{
public:
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x10
	::NHCEIJGMNDO* DJNKAEAPJHN; // 0x18
	::MoleMole::Config::ConfigHollowChessboard* NGFHKHLKEHD; // 0x20

	::System::Void _ctor(::FBAMLABJMKF* COBEJJHGMPO, ::NHCEIJGMNDO* NLKHAICJJAL)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::NHCEIJGMNDO*))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_LHGAECIINBM__CTOR_OFFSET))(this, COBEJJHGMPO, NLKHAICJJAL);
	}

	::System::Void OEOLEKCAOEE(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_LHGAECIINBM_OEOLEKCAOEE_OFFSET))(this, ABHBKFJKINO);
	}
};
