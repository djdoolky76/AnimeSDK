#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterAtlasFaceEyeBlink; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERATLASFACESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53BD30)
#define RPG_GAMECORE_CHARACTERATLASFACESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53BB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAtlasFaceSet_TypeDefinitionIndex = 17456;

	class CharacterAtlasFaceSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MeshName; // 0x10
		::System::Int32 DefaultIndex; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* IndexList; // 0x20
		::RPG::GameCore::CharacterAtlasFaceEyeBlink* EyeBlink; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterAtlasFaceSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterAtlasFaceSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
