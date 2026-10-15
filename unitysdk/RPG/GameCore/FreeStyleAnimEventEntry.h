#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleAnimEventEntry; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEANIMEVENTENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C59E0)
#define RPG_GAMECORE_FREESTYLEANIMEVENTENTRY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C58D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimEventEntry_TypeDefinitionIndex = 16299;

	class FreeStyleAnimEventEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleClipName; // 0x10
		::System::Single NormalizedTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleAnimEventEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleAnimEventEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTENTRY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
