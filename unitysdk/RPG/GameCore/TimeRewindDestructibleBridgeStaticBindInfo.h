#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindDestructibleBridgeStaticBindInfo; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDDESTRUCTIBLEBRIDGESTATICBINDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB87A00)
#define RPG_GAMECORE_TIMEREWINDDESTRUCTIBLEBRIDGESTATICBINDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB875C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindDestructibleBridgeStaticBindInfo_TypeDefinitionIndex = 16596;

	class TimeRewindDestructibleBridgeStaticBindInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ChildAnimName; // 0x10
		::RPG::MVector3 FirstChildOffset; // 0x18
		::RPG::MVector3 FirstChildRotation; // 0x24
		::RPG::MVector3 SecondChildOffset; // 0x30
		::RPG::MVector3 SecondChildRotation; // 0x3C
		::System::Single ChildOverrideLockRaycastOffsetHeight; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDDESTRUCTIBLEBRIDGESTATICBINDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindDestructibleBridgeStaticBindInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindDestructibleBridgeStaticBindInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDDESTRUCTIBLEBRIDGESTATICBINDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
