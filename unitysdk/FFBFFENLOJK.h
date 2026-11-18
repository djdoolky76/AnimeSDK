#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueTuple_2.h"

class DENGNOJFDLA;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class BlendTextureSheetDataItem; }
namespace MoleMole { class ScreenColorCorrectionData; }
namespace MoleMole::HollowChessboard { class SceneAnimRenderSection_Config; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFBFFENLOJK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x7A19C0)
#define FFBFFENLOJK_FEIJMILJGEL_1_OFFSET UNITYSDK_OFFSET(0x7A1A20)
#define FFBFFENLOJK_FEIJMILJGEL_OFFSET UNITYSDK_OFFSET(0x7A19F0)
#define FFBFFENLOJK__CTOR_OFFSET UNITYSDK_OFFSET(0x6E08B0)

inline static constexpr unsigned int FFBFFENLOJK_TypeDefinitionIndex = 75506;

struct alignas(4) FFBFFENLOJK
{
	::MoleMole::HollowChessboard::RenderDataAliveType GPNLFMAMAOD; // 0x10
	::System::UInt32 ODGIKJIKIFB; // 0x14

	::System::Void _ctor(::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + FFBFFENLOJK__CTOR_OFFSET))(this, NJINEMLOICB);
	}

	::System::ValueTuple_2<::MoleMole::HollowChessboard::RenderDataHandle, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*> COKNIICCODC(::MoleMole::BlendTextureSheetData* LJBPECKCCEA, ::DENGNOJFDLA* AAOCANGHBDG, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config* DFMKILICPFB)
	{
		return ((::System::ValueTuple_2<::MoleMole::HollowChessboard::RenderDataHandle, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*>(*)(::PVOID, ::MoleMole::BlendTextureSheetData*, ::DENGNOJFDLA*, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*))((::PBYTE)hIl2Cpp + FFBFFENLOJK_COKNIICCODC_OFFSET))(this, LJBPECKCCEA, AAOCANGHBDG, DFMKILICPFB);
	}

	::MoleMole::HollowChessboard::RenderDataHandle FEIJMILJGEL(::MoleMole::BlendTextureSheetDataItem* DGBFKEMNCOM, ::DENGNOJFDLA* AAOCANGHBDG, ::System::Int32 KMOHKCADPNA, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config* DFMKILICPFB)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::PVOID, ::MoleMole::BlendTextureSheetDataItem*, ::DENGNOJFDLA*, ::System::Int32, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*))((::PBYTE)hIl2Cpp + FFBFFENLOJK_FEIJMILJGEL_OFFSET))(this, DGBFKEMNCOM, AAOCANGHBDG, KMOHKCADPNA, DFMKILICPFB);
	}

	::MoleMole::HollowChessboard::RenderDataHandle FEIJMILJGEL_1(::MoleMole::ScreenColorCorrectionData* DGBFKEMNCOM, ::DENGNOJFDLA* AAOCANGHBDG, ::System::Int32 KMOHKCADPNA, ::System::Int32 MOPKIBOHKHM)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::PVOID, ::MoleMole::ScreenColorCorrectionData*, ::DENGNOJFDLA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FFBFFENLOJK_FEIJMILJGEL_1_OFFSET))(this, DGBFKEMNCOM, AAOCANGHBDG, KMOHKCADPNA, MOPKIBOHKHM);
	}
};
