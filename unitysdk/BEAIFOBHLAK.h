#pragma once
#include "unitysdk/unitysdk.h"
class NFFBDBNDOCG;
namespace RPG::GameCore { class TaskContext; }

#define BEAIFOBHLAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C0010)
#define BEAIFOBHLAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7C0040)

inline static constexpr unsigned int BEAIFOBHLAK_TypeDefinitionIndex = 56795;

	class BEAIFOBHLAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NFFBDBNDOCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NFFBDBNDOCG*))((::PBYTE)hIl2Cpp + BEAIFOBHLAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAIFOBHLAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
