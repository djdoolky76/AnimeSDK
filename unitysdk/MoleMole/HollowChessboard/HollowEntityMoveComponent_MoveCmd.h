#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd_Dir.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Nullable_1.h"

class NBGLGKLHEMP;
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_FROMGRIDDIR_OFFSET UNITYSDK_OFFSET(0x12B4C390)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_GETTARGETINDEX_OFFSET UNITYSDK_OFFSET(0x6ED800)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_GET_GRIDDIR_OFFSET UNITYSDK_OFFSET(0x6ED830)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_ISDIRMOVE_OFFSET UNITYSDK_OFFSET(0x6ED7E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_TOGRIDDIR_OFFSET UNITYSDK_OFFSET(0x12B338C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6ED7F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6ED880)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityMoveComponent_MoveCmd_TypeDefinitionIndex = 51412;

	struct alignas(4) HollowEntityMoveComponent_MoveCmd
	{
		::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir dir; // 0x10
		::MoleMole::HollowChessboard::HollowCell targetIndex; // 0x14
		::System::Int32 distance; // 0x20
		::System::Boolean waitForPush; // 0x24

		::System::Boolean IsDirMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_ISDIRMOVE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_TOSTRING_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell GetTargetIndex(::MoleMole::HollowChessboard::HollowCell currentIndex, ::NBGLGKLHEMP* chessboard)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::NBGLGKLHEMP*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_GETTARGETINDEX_OFFSET))(this, currentIndex, chessboard);
		}

		::Share::GridDir get_GridDir()
		{
			return ((::Share::GridDir(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_GET_GRIDDIR_OFFSET))(this);
		}

		static ::Share::GridDir ToGridDir(::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir dir)
		{
			return ((::Share::GridDir(*)(::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_TOGRIDDIR_OFFSET))(dir);
		}

		static ::System::Nullable_1<::System::Object*> FromGridDir(::Share::GridDir dir)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_FROMGRIDDIR_OFFSET))(dir);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
