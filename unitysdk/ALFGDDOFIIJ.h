#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MusicBeatSyncGroup.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { template <typename T> class Action_1; }

#define ALFGDDOFIIJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C862060)
#define ALFGDDOFIIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C862600)
#define ALFGDDOFIIJ_IBAALDDFBHK_OFFSET UNITYSDK_OFFSET(0x1C8621C0)
#define ALFGDDOFIIJ_LOOEMFDIOEB_OFFSET UNITYSDK_OFFSET(0x1C862320)
#define ALFGDDOFIIJ_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C862100)
#define ALFGDDOFIIJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C862180)
#define ALFGDDOFIIJ_PJIBGAIGGBG_OFFSET UNITYSDK_OFFSET(0x1C862240)

inline static constexpr unsigned int ALFGDDOFIIJ_TypeDefinitionIndex = 43398;

	class ALFGDDOFIIJ : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* CKOMJEKKNIB; // 0x10
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* DIBHOODKFJN; // 0x18
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* GJNGAFMMPLN; // 0x20
		::System::Int32 IMHCADLGBMI; // 0x28
		::System::Boolean PCKBADNFMNO; // 0x2C
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
