#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNOMKEKNFBF.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class EAAIIJHJGBH;
class FMNAIOANOLK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COBFOEMPKIE_FHINMKAEADG_OFFSET UNITYSDK_OFFSET(0x15347A20)
#define COBFOEMPKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x15347900)

inline static constexpr unsigned int COBFOEMPKIE_TypeDefinitionIndex = 71943;

class COBFOEMPKIE : public ::CNOMKEKNFBF
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EAAIIJHJGBH*>* JBMGFIAGFME; // 0x20
	::System::Collections::Generic::Dictionary_2<::ProtoScript::NodeState, ::EAAIIJHJGBH*>* HBKBKIIJICI; // 0x28

	::System::Void _ctor(::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + COBFOEMPKIE__CTOR_OFFSET))(this, DKOFFFNEFJC, BONICGBNDAA);
	}

	::System::Boolean FHINMKAEADG(::FMNAIOANOLK* HMMMOCJAEOA, ::MoleMole::HollowChessboard::HollowCell OHOGDOMNHNK, ::EAAIIJHJGBH*& MHJBBOJKPNF)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMNAIOANOLK*, ::MoleMole::HollowChessboard::HollowCell, ::EAAIIJHJGBH*&))((::PBYTE)hIl2Cpp + COBFOEMPKIE_FHINMKAEADG_OFFSET))(this, HMMMOCJAEOA, OHOGDOMNHNK, MHJBBOJKPNF);
	}
};
