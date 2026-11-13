#pragma once
#include "unitysdk/unitysdk.h"
class DPMCAEFILMB;
namespace RPG::GameCore { class TaskContext; }

#define EDCJIMGOGJE_CTOR_OFFSET UNITYSDK_OFFSET(0x186B2B30)
#define EDCJIMGOGJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186B2B60)

inline static constexpr unsigned int EDCJIMGOGJE_TypeDefinitionIndex = 53970;

	class EDCJIMGOGJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DPMCAEFILMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DPMCAEFILMB*))((::PBYTE)hIl2Cpp + EDCJIMGOGJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCJIMGOGJE_ONTASKBEGIN_OFFSET))(this);
		}

	};
