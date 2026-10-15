#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class BDDPLIAEAIN;
namespace RPG::GameCore { class TaskContext; }

#define MANBEICMCFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB84E660)
#define MANBEICMCFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB84E690)

inline static constexpr unsigned int MANBEICMCFK_TypeDefinitionIndex = 55363;

	class MANBEICMCFK
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BDDPLIAEAIN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BDDPLIAEAIN*))((::PBYTE)hIl2Cpp + MANBEICMCFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBEICMCFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
