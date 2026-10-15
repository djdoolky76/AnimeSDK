#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartPropSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define JDPPLGMNKIF_CTOR_OFFSET UNITYSDK_OFFSET(0x16612270)
#define JDPPLGMNKIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166122A0)

inline static constexpr unsigned int JDPPLGMNKIF_TypeDefinitionIndex = 58727;

	class JDPPLGMNKIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartPropSceneSelection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartPropSceneSelection*))((::PBYTE)hIl2Cpp + JDPPLGMNKIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDPPLGMNKIF_ONTASKBEGIN_OFFSET))(this);
		}

	};
