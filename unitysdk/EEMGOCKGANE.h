#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightShowRightCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EEMGOCKGANE_CCTOR_OFFSET UNITYSDK_OFFSET(0x147FF020)
#define EEMGOCKGANE_CTOR_OFFSET UNITYSDK_OFFSET(0x147FE6D0)
#define EEMGOCKGANE_DEKKHNOCEHA_OFFSET UNITYSDK_OFFSET(0x147FED80)
#define EEMGOCKGANE_EFNPMGMIGGE_OFFSET UNITYSDK_OFFSET(0x147FEFC0)
#define EEMGOCKGANE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x147FE700)

inline static constexpr unsigned int EEMGOCKGANE_TypeDefinitionIndex = 59394;

	class EEMGOCKGANE
	{
	public:
		static ::System::String** StaticGet_FEILIECHKAE()
		{
			return (::System::String**)UnitySDK::FromName("", "EEMGOCKGANE")->GetStaticField(0x73680);
		}

		static ::System::String** StaticGet_CHAFDLBIFPA()
		{
			return (::System::String**)UnitySDK::FromName("", "EEMGOCKGANE")->GetStaticField(0x73688);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowRightCutIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowRightCutIn*))((::PBYTE)hIl2Cpp + EEMGOCKGANE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEMGOCKGANE_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMGOCKGANE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::String* DEKKHNOCEHA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EEMGOCKGANE_DEKKHNOCEHA_OFFSET))(this, a1);
		}

		::System::Boolean EFNPMGMIGGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMGOCKGANE_EFNPMGMIGGE_OFFSET))(this);
		}

	};
