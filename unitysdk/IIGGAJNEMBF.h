#pragma once
#include "unitysdk/unitysdk.h"
class NLPDKPANIMH;
namespace RPG::GameCore { class TaskContext; }

#define IIGGAJNEMBF_CTOR_OFFSET UNITYSDK_OFFSET(0x173F42B0)
#define IIGGAJNEMBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x173F42E0)

inline static constexpr unsigned int IIGGAJNEMBF_TypeDefinitionIndex = 55333;

	class IIGGAJNEMBF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NLPDKPANIMH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NLPDKPANIMH*))((::PBYTE)hIl2Cpp + IIGGAJNEMBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGGAJNEMBF_ONTASKBEGIN_OFFSET))(this);
		}

	};
