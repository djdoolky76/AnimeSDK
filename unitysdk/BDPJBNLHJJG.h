#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAALPDONIGK.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class Object; }

#define BDPJBNLHJJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7CE8D0)
#define BDPJBNLHJJG_GDMGMMGOPCI_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define BDPJBNLHJJG_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3CF470)
#define BDPJBNLHJJG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CE910)
#define BDPJBNLHJJG_RESET_OFFSET UNITYSDK_OFFSET(0x7CE920)
#define BDPJBNLHJJG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x7CE980)
#define BDPJBNLHJJG__CTOR_OFFSET UNITYSDK_OFFSET(0x7CE8A0)

inline static constexpr unsigned int BDPJBNLHJJG_TypeDefinitionIndex = 64208;

struct alignas(4) BDPJBNLHJJG
{
	::BAALPDONIGK LJMLKENCDBI; // 0x10
	::MoleMole::HollowChessboard::ChessboardView::LineInfo _CLOAPKDOJAA_k__BackingField; // 0x14
	::UnityEngine::Vector3Int GGOPFLNDJGB; // 0x2C
	::System::Int32 MLNKCNJEOMI; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3Int GIAEPMKCBIB, ::BAALPDONIGK DDOIPMNLKLK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::BAALPDONIGK))((::PBYTE)hIl2Cpp + BDPJBNLHJJG__CTOR_OFFSET))(this, GIAEPMKCBIB, DDOIPMNLKLK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPJBNLHJJG_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPJBNLHJJG_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPJBNLHJJG_RESET_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::ChessboardView::LineInfo get_Current()
	{
		return ((::MoleMole::HollowChessboard::ChessboardView::LineInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPJBNLHJJG_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPJBNLHJJG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void GDMGMMGOPCI(::MoleMole::HollowChessboard::ChessboardView::LineInfo EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo))((::PBYTE)hIl2Cpp + BDPJBNLHJJG_GDMGMMGOPCI_OFFSET))(this, EGEGIMGMJHN);
	}
};
