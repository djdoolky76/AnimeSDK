#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class CNBBKIKPFKA;
class OGEIKLGMBKD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIFOENBJJOM_DEFHACGCMGP_OFFSET UNITYSDK_OFFSET(0x16FEDD10)
#define AIFOENBJJOM__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEDC90)

inline static constexpr unsigned int AIFOENBJJOM_TypeDefinitionIndex = 42362;

class AIFOENBJJOM : public ::System::Object
{
public:
	::OGEIKLGMBKD* GIIFNJHIPIN; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* CINPAKOOMNG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + AIFOENBJJOM__CTOR_OFFSET))(this, CINPAKOOMNG);
	}

	::CNBBKIKPFKA* DEFHACGCMGP()
	{
		return ((::CNBBKIKPFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOENBJJOM_DEFHACGCMGP_OFFSET))(this);
	}
};
