#pragma once
#include "unitysdk/unitysdk.h"
class KGOPFEPDNAN;
namespace RPG::GameCore { class TaskContext; }

#define NKBIIOKNDFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7AB5F0)
#define NKBIIOKNDFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7AB620)

inline static constexpr unsigned int NKBIIOKNDFM_TypeDefinitionIndex = 56251;

	class NKBIIOKNDFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KGOPFEPDNAN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KGOPFEPDNAN*))((::PBYTE)hIl2Cpp + NKBIIOKNDFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBIIOKNDFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
