#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceMaterialPartShow; }
namespace RPG::GameCore { class CharacterReplaceMaterialRender; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578600)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D578450)

namespace RPG::GameCore
{
	class CharacterReplaceMaterialRender : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RenderName; // 0x10
		::Il2CppArray<::System::UInt32>* MaterialIndexList; // 0x18
		::Il2CppArray<::System::String*>* MaterialPathList; // 0x20
		::RPG::GameCore::CharacterReplaceMaterialPartShow* PartShow; // 0x28
		// static const ::System::String* RENDER_NAME_RESIDENT_POSSESSION; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceMaterialRender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceMaterialRender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
