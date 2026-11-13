#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MusicBeatSyncGroup.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { template <typename T> class Action_1; }

#define ALFGDDOFIIJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D8663B0)
#define ALFGDDOFIIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D866950)
#define ALFGDDOFIIJ_IBAALDDFBHK_OFFSET UNITYSDK_OFFSET(0x1D866510)
#define ALFGDDOFIIJ_LOOEMFDIOEB_OFFSET UNITYSDK_OFFSET(0x1D866670)
#define ALFGDDOFIIJ_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1D866450)
#define ALFGDDOFIIJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1D8664D0)
#define ALFGDDOFIIJ_PJIBGAIGGBG_OFFSET UNITYSDK_OFFSET(0x1D866590)

inline static constexpr unsigned int ALFGDDOFIIJ_TypeDefinitionIndex = 44379;

	class ALFGDDOFIIJ : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* CKOMJEKKNIB; // 0x10
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* GJNGAFMMPLN; // 0x18
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* DIBHOODKFJN; // 0x20
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
