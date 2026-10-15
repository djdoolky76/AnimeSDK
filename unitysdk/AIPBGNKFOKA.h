#pragma once
#include "unitysdk/unitysdk.h"
class HEIMKDBGIOM;
namespace RPG::GameCore { class TaskContext; }

#define AIPBGNKFOKA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CAEF90)
#define AIPBGNKFOKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CAEFC0)

inline static constexpr unsigned int AIPBGNKFOKA_TypeDefinitionIndex = 53004;

	class AIPBGNKFOKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HEIMKDBGIOM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HEIMKDBGIOM*))((::PBYTE)hIl2Cpp + AIPBGNKFOKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPBGNKFOKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
