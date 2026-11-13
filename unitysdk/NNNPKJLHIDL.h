#pragma once
#include "unitysdk/unitysdk.h"
class FFFPDOPONLA;
namespace RPG::GameCore { class TaskContext; }

#define NNNPKJLHIDL_CTOR_OFFSET UNITYSDK_OFFSET(0x17A145F0)
#define NNNPKJLHIDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A14620)

inline static constexpr unsigned int NNNPKJLHIDL_TypeDefinitionIndex = 54577;

	class NNNPKJLHIDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFFPDOPONLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFFPDOPONLA*))((::PBYTE)hIl2Cpp + NNNPKJLHIDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNPKJLHIDL_ONTASKBEGIN_OFFSET))(this);
		}

	};
