#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

inline static constexpr unsigned int BFDAMBNHMFN_TypeDefinitionIndex = 81282;

struct alignas(8) BFDAMBNHMFN
{
	::System::UInt32 IKOOGFBLNHN; // 0x10
	::System::Byte _padding0[0x4];
	::Foundation::Unreal::FGameplayTagContainer CLPFIGBILKN; // 0x18
	::Foundation::Unreal::FGameplayTagQuery* DFMLHHGADCA; // 0x88
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::RenderDataHandle>* JLBKGIGJNBM; // 0x90
	::System::String* MDNECPLKPIM; // 0x98
};
