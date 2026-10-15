#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define MKADHMMGGNA_CIGPLCIKPLE_OFFSET UNITYSDK_OFFSET(0xB97E560)
#define MKADHMMGGNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB97E750)
#define MKADHMMGGNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB97E6D0)
#define MKADHMMGGNA_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xB97E710)
#define MKADHMMGGNA_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0xB97E730)
#define MKADHMMGGNA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB97E600)
#define MKADHMMGGNA_LAPJCIBMPIH_OFFSET UNITYSDK_OFFSET(0xB97E650)
#define MKADHMMGGNA_LCAEEOLNNND_OFFSET UNITYSDK_OFFSET(0xB97E5A0)
#define MKADHMMGGNA_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xB97E720)
#define MKADHMMGGNA_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0xB97E740)

inline static constexpr unsigned int MKADHMMGGNA_TypeDefinitionIndex = 78552;

	class MKADHMMGGNA : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChessDirection JEPNAFFPNOH; // 0x10
		::RPG::Client::Prop::ChessDirection _Direction_k__BackingField; // 0x14
		::UnityEngine::Vector2Int _InitPosition_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKADHMMGGNA_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::DestroyRootPuzzleChessType CIGPLCIKPLE()
		{
			return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + MKADHMMGGNA_CIGPLCIKPLE_OFFSET))(this);
		}

		::System::Void LCAEEOLNNND(::RPG::Client::Prop::ChessDirection a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MKADHMMGGNA_LCAEEOLNNND_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKADHMMGGNA_KHGIKBFDLFB_OFFSET))(this);
		}

		::RPG::Client::Prop::ChessDirection LAPJCIBMPIH(::System::Boolean a1)
		{
			return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKADHMMGGNA_LAPJCIBMPIH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKADHMMGGNA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChessDirection get_Direction()
		{
			return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + MKADHMMGGNA_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::RPG::Client::Prop::ChessDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + MKADHMMGGNA_SET_DIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int get_InitPosition()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MKADHMMGGNA_GET_INITPOSITION_OFFSET))(this);
		}

		::System::Void set_InitPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MKADHMMGGNA_SET_INITPOSITION_OFFSET))(this, a1);
		}

	};
