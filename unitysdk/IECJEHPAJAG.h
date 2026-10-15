#pragma once
#include "unitysdk/unitysdk.h"
class LDODCBONPLA;
namespace RPG::GameCore { class TaskContext; }

#define IECJEHPAJAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15EED0D0)
#define IECJEHPAJAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EED100)

inline static constexpr unsigned int IECJEHPAJAG_TypeDefinitionIndex = 58626;

	class IECJEHPAJAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDODCBONPLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDODCBONPLA*))((::PBYTE)hIl2Cpp + IECJEHPAJAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECJEHPAJAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
