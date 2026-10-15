#pragma once
#include "unitysdk/unitysdk.h"
class IBMOIBOMCGH;
namespace RPG::GameCore { class TaskContext; }

#define IAFPKHOMILL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFFEF0)
#define IAFPKHOMILL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DFFF20)

inline static constexpr unsigned int IAFPKHOMILL_TypeDefinitionIndex = 52959;

	class IAFPKHOMILL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IBMOIBOMCGH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IBMOIBOMCGH*))((::PBYTE)hIl2Cpp + IAFPKHOMILL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFPKHOMILL_ONTASKBEGIN_OFFSET))(this);
		}

	};
