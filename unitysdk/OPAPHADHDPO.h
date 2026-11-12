#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class LMJFLOFPDLL;
namespace RPG::GameCore { class TaskContext; }

#define OPAPHADHDPO_CTOR_OFFSET UNITYSDK_OFFSET(0xC89E2F0)
#define OPAPHADHDPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC89E3D0)

inline static constexpr unsigned int OPAPHADHDPO_TypeDefinitionIndex = 57595;

	class OPAPHADHDPO
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LMJFLOFPDLL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LMJFLOFPDLL*))((::PBYTE)hIl2Cpp + OPAPHADHDPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAPHADHDPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
