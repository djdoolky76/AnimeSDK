#pragma once
#include "unitysdk/unitysdk.h"
class DKHNKLPFEJN;
namespace RPG::GameCore { class TaskContext; }

#define GMFIKJPLDOC_CTOR_OFFSET UNITYSDK_OFFSET(0x16A506F0)
#define GMFIKJPLDOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A50720)

inline static constexpr unsigned int GMFIKJPLDOC_TypeDefinitionIndex = 56375;

	class GMFIKJPLDOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DKHNKLPFEJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DKHNKLPFEJN*))((::PBYTE)hIl2Cpp + GMFIKJPLDOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFIKJPLDOC_ONTASKBEGIN_OFFSET))(this);
		}

	};
