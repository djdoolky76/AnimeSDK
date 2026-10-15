#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class LoseHPByRatio; }
namespace RPG::GameCore { class TaskContext; }

#define FNJBHDJHIIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15873E70)
#define FNJBHDJHIIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15873F40)

inline static constexpr unsigned int FNJBHDJHIIG_TypeDefinitionIndex = 55164;

	class FNJBHDJHIIG
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoseHPByRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoseHPByRatio*))((::PBYTE)hIl2Cpp + FNJBHDJHIIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJBHDJHIIG_ONTASKBEGIN_OFFSET))(this);
		}

	};
