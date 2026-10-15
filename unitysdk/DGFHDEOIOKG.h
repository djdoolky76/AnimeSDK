#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class Match3BirdSkillConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

	struct alignas(8) DGFHDEOIOKG
	{
		::System::UInt32 BOKJJKFCFME; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::Match3::Match3BirdSkillConfig* APOJICIKJPF; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BALGFKCIADM; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* LFKDGDMCDMD; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>* NJLLIAIBCAK; // 0x30
	};
