#pragma once
#include "unitysdk/unitysdk.h"
class HDGLGNMBEKO;
namespace RPG::GameCore { class TaskContext; }

#define KDBEDHLMNPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A493140)
#define KDBEDHLMNPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A4930A0)

inline static constexpr unsigned int KDBEDHLMNPM_TypeDefinitionIndex = 54042;

	class KDBEDHLMNPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HDGLGNMBEKO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HDGLGNMBEKO*))((::PBYTE)hIl2Cpp + KDBEDHLMNPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBEDHLMNPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
