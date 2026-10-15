#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceMaterialVariant; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578B20)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D578940)

namespace RPG::GameCore
{
	class CharacterReplaceMaterialVariant : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MaterialPropertyCollection; // 0x10
		::System::String* MaterialTemplate; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BMAGJGLPIIF>* PropertyColor; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* PropertyFloat; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceMaterialVariant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceMaterialVariant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
