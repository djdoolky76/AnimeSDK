#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameplayGuideConstValueRow; }
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB6B0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6EB130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideConstValueRow_TypeDefinitionIndex = 13381;

	class GameplayGuideConstValueRow : public ::System::Object
	{
	public:
		::System::String* GameplayGuideConstValueName; // 0x10
		::System::String* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameplayGuideConstValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameplayGuideConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
