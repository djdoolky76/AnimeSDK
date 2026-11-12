#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropStateIconCategory.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStateIcon; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSTATEICON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB71690)
#define RPG_GAMECORE_PROPSTATEICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB71680)
#define RPG_GAMECORE_PROPSTATEICON_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB71530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateIcon_TypeDefinitionIndex = 12613;

	class PropStateIcon : public ::System::Object
	{
	public:
		::System::String* Color; // 0x10
		::System::String* TimeRewindState; // 0x18
		::System::String* AnchorKey; // 0x20
		::System::UInt32 IconID; // 0x28
		::RPG::GameCore::PropState State; // 0x2C
		::System::Boolean ColorInited; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Color ColorResult; // 0x34
		::RPG::GameCore::LevelPropStateIconCategory Category; // 0x44
		static ::RPG::GameCore::PropStateIcon** StaticGet_INVALID()
		{
			return (::RPG::GameCore::PropStateIcon**)UnitySDK::FromName("RPG.GameCore", "PropStateIcon")->GetStaticField(0x58CD0);
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
