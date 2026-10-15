#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterSteerTo; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERSTEERTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5794B0)
#define RPG_GAMECORE_CHARACTERSTEERTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5794C0)
#define RPG_GAMECORE_CHARACTERSTEERTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D579470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSteerTo_TypeDefinitionIndex = 20869;

	class CharacterSteerTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* AreaName; // 0x28
		::System::Single Duration; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* TargetCharacterUniqueName; // 0x38
		::System::Boolean WaitUntilFinish; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTEERTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterSteerTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterSteerTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTEERTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterSteerTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterSteerTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTEERTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
