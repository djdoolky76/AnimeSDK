#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightShowRightCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EEMGOCKGANE_CCTOR_OFFSET UNITYSDK_OFFSET(0x13A3EF80)
#define EEMGOCKGANE_CTOR_OFFSET UNITYSDK_OFFSET(0x13A3E860)
#define EEMGOCKGANE_DEKKHNOCEHA_OFFSET UNITYSDK_OFFSET(0x13A3EDD0)
#define EEMGOCKGANE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A3E890)

inline static constexpr unsigned int EEMGOCKGANE_TypeDefinitionIndex = 58146;

	class EEMGOCKGANE
	{
	public:
		static ::System::String** StaticGet_CHAFDLBIFPA()
		{
			return (::System::String**)UnitySDK::FromName("", "EEMGOCKGANE")->GetStaticField(0x6FF30);
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

	};
