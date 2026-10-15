#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNavNodeInnerGraphEditorInfo; }

#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78DA10)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D78D9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerGraphEditorInfo_TypeDefinitionIndex = 17389;

	class LevelNavNodeInnerGraphEditorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNavNodeInnerGraphEditorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNavNodeInnerGraphEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
