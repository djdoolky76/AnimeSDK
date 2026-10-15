#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimGridPropView_CellWaterReflectionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ONDFHPBICNH_CLEAR_OFFSET UNITYSDK_OFFSET(0xD43D1B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ONDFHPBICNH_CTOR_OFFSET UNITYSDK_OFFSET(0xD43D290)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ONDFHPBICNH_FCNEEBFMFDD_OFFSET UNITYSDK_OFFSET(0xD43C310)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ONDFHPBICNH_LKMMEGMEOLC_OFFSET UNITYSDK_OFFSET(0xD43C480)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGridPropView_ONDFHPBICNH_TypeDefinitionIndex = 77182;

	class FiveDimGridPropView_ONDFHPBICNH : public ::System::Object
	{
	public:
		::UnityEngine::BoxCollider* JBOHAAPLNBH; // 0x10
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView* OMDIMJJIBED; // 0x18
		::System::String* GPKEJBHALNM; // 0x20
		::UnityEngine::Vector3 DIEELHCCNFJ; // 0x28
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState GEJJDBOFBCD; // 0x34
		::UnityEngine::Vector3 MAMGMJMFGHC; // 0x38
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState FLOIOGLNPFA; // 0x44
		::System::Boolean EILJFGNKOBD; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ONDFHPBICNH_CTOR_OFFSET))(this);
		}

		::System::Void FCNEEBFMFDD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ONDFHPBICNH_FCNEEBFMFDD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ONDFHPBICNH_CLEAR_OFFSET))(this);
		}

		::System::Void LKMMEGMEOLC(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ONDFHPBICNH_LKMMEGMEOLC_OFFSET))(this, a1);
		}

	};
}
