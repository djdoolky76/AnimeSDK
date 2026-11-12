#pragma once
#include "unitysdk/unitysdk.h"
class HFBIPMKIEFP;
namespace RPG::GameCore { class TaskContext; }

#define OGPHMLCLAME_CTOR_OFFSET UNITYSDK_OFFSET(0xC7188F0)
#define OGPHMLCLAME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC718920)

inline static constexpr unsigned int OGPHMLCLAME_TypeDefinitionIndex = 59958;

	class OGPHMLCLAME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HFBIPMKIEFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HFBIPMKIEFP*))((::PBYTE)hIl2Cpp + OGPHMLCLAME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPHMLCLAME_ONTASKBEGIN_OFFSET))(this);
		}

	};
