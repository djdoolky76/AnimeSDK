#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EditorReplaceMaterialScheme; }
namespace System { class String; }

#define RPG_GAMECORE_EDITORREPLACEMATERIALSCHEME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D600B90)
#define RPG_GAMECORE_EDITORREPLACEMATERIALSCHEME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D600A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EditorReplaceMaterialScheme_TypeDefinitionIndex = 17432;

	class EditorReplaceMaterialScheme : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::System::String*>* Keys; // 0x18
		::Il2CppArray<::System::String*>* AtlasFaceSetKeys; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORREPLACEMATERIALSCHEME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EditorReplaceMaterialScheme* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EditorReplaceMaterialScheme*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORREPLACEMATERIALSCHEME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
