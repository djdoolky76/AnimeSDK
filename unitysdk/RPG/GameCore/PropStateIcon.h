#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropStateIconCategory.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStateIcon; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSTATEICON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D92B780)
#define RPG_GAMECORE_PROPSTATEICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92B770)
#define RPG_GAMECORE_PROPSTATEICON_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92B620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateIcon_TypeDefinitionIndex = 12546;

	class PropStateIcon : public ::System::Object
	{
	public:
		::System::String* Color; // 0x10
		::System::String* AnchorKey; // 0x18
		::System::String* TimeRewindState; // 0x20
		::System::Boolean ColorInited; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Color ColorResult; // 0x2C
		::RPG::GameCore::LevelPropStateIconCategory Category; // 0x3C
		::RPG::GameCore::PropState State; // 0x40
		::System::UInt32 IconID; // 0x44
		static ::RPG::GameCore::PropStateIcon** StaticGet_INVALID()
		{
			return (::RPG::GameCore::PropStateIcon**)UnitySDK::FromName("RPG.GameCore", "PropStateIcon")->GetStaticField(0x595B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEICON_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEICON_CCTOR_OFFSET))();
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEICON_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
