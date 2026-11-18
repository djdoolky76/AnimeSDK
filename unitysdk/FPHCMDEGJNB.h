#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::HollowChessboard { class MatPropertyData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define FPHCMDEGJNB_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x179C33B0)

inline static constexpr unsigned int FPHCMDEGJNB_TypeDefinitionIndex = 38506;

struct alignas(8) FPHCMDEGJNB
{
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::HollowChessboard::MatPropertyData*>* PINMNLJJOJA; // 0x10

	static ::System::Void JLIMOLHLFAK(::UnityEngine::Material* AEIHFBNNLBP, ::System::Int32 PHIKBGHJCKK, ::MoleMole::HollowChessboard::MatPropertyData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::MoleMole::HollowChessboard::MatPropertyData*))((::PBYTE)hIl2Cpp + FPHCMDEGJNB_JLIMOLHLFAK_OFFSET))(AEIHFBNNLBP, PHIKBGHJCKK, LJBPECKCCEA);
	}
};
