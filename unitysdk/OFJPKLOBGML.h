#pragma once
#include "unitysdk/unitysdk.h"
class IJCGPOILPIF;
namespace RPG::GameCore { class TaskContext; }

#define OFJPKLOBGML_CTOR_OFFSET UNITYSDK_OFFSET(0xBE43230)
#define OFJPKLOBGML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE43260)

inline static constexpr unsigned int OFJPKLOBGML_TypeDefinitionIndex = 52829;

	class OFJPKLOBGML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IJCGPOILPIF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IJCGPOILPIF*))((::PBYTE)hIl2Cpp + OFJPKLOBGML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJPKLOBGML_ONTASKBEGIN_OFFSET))(this);
		}

	};
