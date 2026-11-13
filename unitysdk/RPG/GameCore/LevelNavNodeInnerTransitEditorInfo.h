#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNavNodeInnerTransitEditorInfo; }

#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D940520)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D940530)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9404E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerTransitEditorInfo_TypeDefinitionIndex = 17555;

	class LevelNavNodeInnerTransitEditorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
