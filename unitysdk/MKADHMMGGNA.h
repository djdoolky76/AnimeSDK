#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define MKADHMMGGNA_CIGPLCIKPLE_OFFSET UNITYSDK_OFFSET(0x1A3BD9D0)
#define MKADHMMGGNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3BDBC0)
#define MKADHMMGGNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3BDB40)
#define MKADHMMGGNA_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A3BDB80)
#define MKADHMMGGNA_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x1A3BDBA0)
#define MKADHMMGGNA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A3BDA70)
#define MKADHMMGGNA_LAPJCIBMPIH_OFFSET UNITYSDK_OFFSET(0x1A3BDAC0)
#define MKADHMMGGNA_LCAEEOLNNND_OFFSET UNITYSDK_OFFSET(0x1A3BDA10)
#define MKADHMMGGNA_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A3BDB90)
#define MKADHMMGGNA_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x1A3BDBB0)

inline static constexpr unsigned int MKADHMMGGNA_TypeDefinitionIndex = 81286;

	class MKADHMMGGNA : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChessDirection _Direction_k__BackingField; // 0x10
		::UnityEngine::Vector2Int _InitPosition_k__BackingField; // 0x14
		::RPG::Client::Prop::ChessDirection JEPNAFFPNOH; // 0x1C
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
