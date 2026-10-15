#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChimePuzzleLitBoard; }
namespace RPG::GameCore { class TaskContext; }

#define BAHMCDJDGNH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E6B2B0)
#define BAHMCDJDGNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E6B2E0)

inline static constexpr unsigned int BAHMCDJDGNH_TypeDefinitionIndex = 58019;

	class BAHMCDJDGNH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimePuzzleLitBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimePuzzleLitBoard*))((::PBYTE)hIl2Cpp + BAHMCDJDGNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMCDJDGNH_ONTASKBEGIN_OFFSET))(this);
		}

	};
