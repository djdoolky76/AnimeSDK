#pragma once
#include "unitysdk/unitysdk.h"
class MIIMPHDPKMC;
namespace RPG::GameCore { class TaskContext; }

#define DDNJBDAOCCN_CTOR_OFFSET UNITYSDK_OFFSET(0xE4F0330)
#define DDNJBDAOCCN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4F0360)

inline static constexpr unsigned int DDNJBDAOCCN_TypeDefinitionIndex = 54943;

	class DDNJBDAOCCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MIIMPHDPKMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MIIMPHDPKMC*))((::PBYTE)hIl2Cpp + DDNJBDAOCCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNJBDAOCCN_ONTASKBEGIN_OFFSET))(this);
		}

	};
