#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNavNodeInnerNodeEditorInfo; }

#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93FC30)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D93FC40)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93FBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerNodeEditorInfo_TypeDefinitionIndex = 17554;

	class LevelNavNodeInnerNodeEditorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
