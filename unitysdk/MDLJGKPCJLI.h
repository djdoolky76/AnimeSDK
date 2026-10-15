#pragma once
#include "unitysdk/unitysdk.h"
class FFHLAHIGGEB;
namespace RPG::GameCore { class TaskContext; }

#define MDLJGKPCJLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AD730)
#define MDLJGKPCJLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8AD760)

inline static constexpr unsigned int MDLJGKPCJLI_TypeDefinitionIndex = 55045;

	class MDLJGKPCJLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFHLAHIGGEB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFHLAHIGGEB*))((::PBYTE)hIl2Cpp + MDLJGKPCJLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLJGKPCJLI_ONTASKBEGIN_OFFSET))(this);
		}

	};
