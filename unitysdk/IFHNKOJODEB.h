#pragma once
#include "unitysdk/unitysdk.h"
class GFODFDCBFJF;
namespace RPG::GameCore { class TaskContext; }

#define IFHNKOJODEB_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0B670)
#define IFHNKOJODEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F0B6A0)

inline static constexpr unsigned int IFHNKOJODEB_TypeDefinitionIndex = 55069;

	class IFHNKOJODEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GFODFDCBFJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GFODFDCBFJF*))((::PBYTE)hIl2Cpp + IFHNKOJODEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHNKOJODEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
