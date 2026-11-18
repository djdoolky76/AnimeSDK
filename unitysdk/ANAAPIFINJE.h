#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPHCMDEGJNB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class MatPropertyData; }
namespace MoleMole::HollowChessboard { class PieceMaterialChangeEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANAAPIFINJE_LHHLFHEAFPC_OFFSET UNITYSDK_OFFSET(0x134E70C0)
#define ANAAPIFINJE__CTOR_OFFSET UNITYSDK_OFFSET(0x134E7070)

inline static constexpr unsigned int ANAAPIFINJE_TypeDefinitionIndex = 58037;

class ANAAPIFINJE : public ::System::Object
{
public:
	::FPHCMDEGJNB IPAILAFLFDB; // 0x10
	::FPHCMDEGJNB NEOAEPDFJNO; // 0x18

	::System::Void _ctor(::MoleMole::HollowChessboard::PieceMaterialChangeEntry* IKNJIIKENFE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::PieceMaterialChangeEntry*))((::PBYTE)hIl2Cpp + ANAAPIFINJE__CTOR_OFFSET))(this, IKNJIIKENFE);
	}

	::System::Void LHHLFHEAFPC(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>* FJMCNMFJNID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>* EEAFNMDKKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>*))((::PBYTE)hIl2Cpp + ANAAPIFINJE_LHHLFHEAFPC_OFFSET))(this, FJMCNMFJNID, EEAFNMDKKBC);
	}
};
