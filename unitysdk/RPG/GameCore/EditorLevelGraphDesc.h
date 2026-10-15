#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EditorLevelGraphDesc; }
namespace System { class String; }

#define RPG_GAMECORE_EDITORLEVELGRAPHDESC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62E430)
#define RPG_GAMECORE_EDITORLEVELGRAPHDESC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62E300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EditorLevelGraphDesc_TypeDefinitionIndex = 17561;

	class EditorLevelGraphDesc : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::String* Comment; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORLEVELGRAPHDESC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EditorLevelGraphDesc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EditorLevelGraphDesc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORLEVELGRAPHDESC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
