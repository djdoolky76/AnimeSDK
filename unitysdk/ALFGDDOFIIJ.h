#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MusicBeatSyncGroup.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class Action; }

#define ALFGDDOFIIJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8901A0)
#define ALFGDDOFIIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C890740)
#define ALFGDDOFIIJ_IBAALDDFBHK_OFFSET UNITYSDK_OFFSET(0x1C890300)
#define ALFGDDOFIIJ_LOOEMFDIOEB_OFFSET UNITYSDK_OFFSET(0x1C890460)
#define ALFGDDOFIIJ_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C890240)
#define ALFGDDOFIIJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8902C0)
#define ALFGDDOFIIJ_PJIBGAIGGBG_OFFSET UNITYSDK_OFFSET(0x1C890380)

	class ALFGDDOFIIJ : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* DIBHOODKFJN; // 0x10
		::System::Action* CKOMJEKKNIB; // 0x18
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* GJNGAFMMPLN; // 0x20
		::System::Boolean PCKBADNFMNO; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 IMHCADLGBMI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFGDDOFIIJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFGDDOFIIJ_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFGDDOFIIJ_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFGDDOFIIJ_ONRECYCLE_OFFSET))(this);
		}

		::System::Void IBAALDDFBHK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALFGDDOFIIJ_IBAALDDFBHK_OFFSET))(this, a1);
		}

		::System::Int32 PJIBGAIGGBG(::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup))((::PBYTE)hIl2Cpp + ALFGDDOFIIJ_PJIBGAIGGBG_OFFSET))(this, a1);
		}

		::System::Void LOOEMFDIOEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFGDDOFIIJ_LOOEMFDIOEB_OFFSET))(this);
		}

	};
