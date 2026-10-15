#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBCAOOBFHEA.h"
#include "unitysdk/RPG/Client/Prop/HexDirection.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ADJACENTCOORDDIFFDIRECTION_OFFSET UNITYSDK_OFFSET(0xDCEDF90)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ADJACENTDIRECTION_OFFSET UNITYSDK_OFFSET(0xDCEE100)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTCOORD2POSITION2D_OFFSET UNITYSDK_OFFSET(0xDCED970)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTCOORD2POSITION_OFFSET UNITYSDK_OFFSET(0xDCED8C0)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTPOSITION2COORD2D_OFFSET UNITYSDK_OFFSET(0xDCEDA00)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCEE350)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DIRECTION2COORDDIFF_OFFSET UNITYSDK_OFFSET(0xDCEDBF0)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCED6E0)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DISTANCEBYDIRECTION_OFFSET UNITYSDK_OFFSET(0xDCEE210)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ISADJACENTCOORD_OFFSET UNITYSDK_OFFSET(0xDCEDCF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int HexPuzzleBoardBase_TypeDefinitionIndex = 78609;

	class HexPuzzleBoardBase : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		::System::Single ItemUnit; // 0xB0
		::NBCAOOBFHEA MHGBJKAAIPF; // 0xB4
		::NBCAOOBFHEA HEIBEPJFDBM; // 0xBC
		::NBCAOOBFHEA GHFFFOHIDIM; // 0xC4
		::NBCAOOBFHEA JGFMOILJMBP; // 0xCC
		::NBCAOOBFHEA MGIHBOKJKBK; // 0xD4
		::NBCAOOBFHEA FHOICPKOILO; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertCoord2Position(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTCOORD2POSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 ConvertCoord2Position2D(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTCOORD2POSITION2D_OFFSET))(this, a1, a2);
		}

		::NBCAOOBFHEA ConvertPosition2Coord2D(::UnityEngine::Vector2 a1)
		{
			return ((::NBCAOOBFHEA(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTPOSITION2COORD2D_OFFSET))(this, a1);
		}

		::NBCAOOBFHEA Direction2CoordDiff(::RPG::Client::Prop::HexDirection a1)
		{
			return ((::NBCAOOBFHEA(*)(::PVOID, ::RPG::Client::Prop::HexDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DIRECTION2COORDDIFF_OFFSET))(this, a1);
		}

		::System::Boolean IsAdjacentCoord(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBCAOOBFHEA, ::NBCAOOBFHEA))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ISADJACENTCOORD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::HexDirection AdjacentCoordDiffDirection(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2)
		{
			return ((::RPG::Client::Prop::HexDirection(*)(::PVOID, ::NBCAOOBFHEA, ::NBCAOOBFHEA))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ADJACENTCOORDDIFFDIRECTION_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::HexDirection AdjacentDirection(::RPG::Client::Prop::HexDirection a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Prop::HexDirection(*)(::PVOID, ::RPG::Client::Prop::HexDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ADJACENTDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 DistanceByDirection(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2, ::RPG::Client::Prop::HexDirection a3)
		{
			return ((::System::Int32(*)(::PVOID, ::NBCAOOBFHEA, ::NBCAOOBFHEA, ::RPG::Client::Prop::HexDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DISTANCEBYDIRECTION_OFFSET))(this, a1, a2, a3);
		}

	};
}
