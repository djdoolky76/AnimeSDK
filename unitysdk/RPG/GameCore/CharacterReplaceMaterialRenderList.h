#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceMaterialRender; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDERLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578930)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDERLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D578610)

namespace RPG::GameCore
{
	class CharacterReplaceMaterialRenderList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterReplaceMaterialRender*>* RenderList; // 0x10
		::System::String* OriginProperty; // 0x18
		::System::Boolean NeedAdditionalDepth; // 0x20
		::System::Boolean NeedTransparentPreDapth; // 0x21
		::System::Boolean NoShadowCaster; // 0x22
		::System::Boolean HideArtModelEffects; // 0x23
		::System::Boolean HideInEditor; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDERLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceMaterialRenderList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDERLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
