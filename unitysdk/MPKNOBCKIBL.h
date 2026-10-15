#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENLNFBCDEIO.h"
#include "unitysdk/RPG/GameCore/PropState.h"
namespace RPG::Client::Prop::PillarPuzzle { class PillarPuzzleBoard; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPKNOBCKIBL_BDBNOPCMNOO_OFFSET UNITYSDK_OFFSET(0xBA40E00)
#define MPKNOBCKIBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA40BF0)

	class MPKNOBCKIBL : public ::ENLNFBCDEIO
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PropState>* OKICJFGGONM; // 0x10
		::System::Int32 GAJKLKCEPLJ; // 0x18
		::System::Int32 IFEPJHGNCOI; // 0x1C
		::System::Int32 MHLGBPAABOP; // 0x20
		::System::Int32 PDMFCKKDGNP; // 0x24
		::System::Void _ctor(::RPG::Client::Prop::PillarPuzzle::PillarPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PillarPuzzle::PillarPuzzleBoard*))((::PBYTE)hIl2Cpp + MPKNOBCKIBL_CTOR_OFFSET))(this, a1);
		}

		::System::Void BDBNOPCMNOO(::System::UInt32 a1, ::RPG::GameCore::PropState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + MPKNOBCKIBL_BDBNOPCMNOO_OFFSET))(this, a1, a2);
		}

	};
