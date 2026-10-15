#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveVideoSequence; }
namespace RPG::GameCore { class TaskContext; }

#define OJAHGFDLAJI_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA2910)
#define OJAHGFDLAJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEA2940)

inline static constexpr unsigned int OJAHGFDLAJI_TypeDefinitionIndex = 53200;

	class OJAHGFDLAJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveVideoSequence* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveVideoSequence*))((::PBYTE)hIl2Cpp + OJAHGFDLAJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJAHGFDLAJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
