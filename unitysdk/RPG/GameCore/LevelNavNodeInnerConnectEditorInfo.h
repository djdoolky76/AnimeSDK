#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNavNodeInnerConnectEditorInfo; }

#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BAC00)
#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7BAC10)
#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7BABC0)

namespace RPG::GameCore
{
	class LevelNavNodeInnerConnectEditorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
