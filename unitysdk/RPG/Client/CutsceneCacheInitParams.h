#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_CUTSCENECACHEINITPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F3FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CutsceneCacheInitParams_TypeDefinitionIndex = 60955;

	class CutsceneCacheInitParams : public ::System::Object
	{
	public:
		::System::String* CutsceneName; // 0x10
		::RPG::GameCore::GenderType HeroGender; // 0x18
		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUTSCENECACHEINITPARAMS_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
