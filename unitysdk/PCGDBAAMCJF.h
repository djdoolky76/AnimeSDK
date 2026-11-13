#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class NAELLPLNFKM;
namespace RPG::GameCore { class TaskContext; }

#define PCGDBAAMCJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1AACE710)
#define PCGDBAAMCJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AACE7F0)

inline static constexpr unsigned int PCGDBAAMCJF_TypeDefinitionIndex = 57596;

	class PCGDBAAMCJF
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NAELLPLNFKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NAELLPLNFKM*))((::PBYTE)hIl2Cpp + PCGDBAAMCJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGDBAAMCJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
