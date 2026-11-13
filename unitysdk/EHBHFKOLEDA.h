#pragma once
#include "unitysdk/unitysdk.h"
class BMLOBBDPFCO;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EHBHFKOLEDA_CTOR_OFFSET UNITYSDK_OFFSET(0x18BC2620)
#define EHBHFKOLEDA_JJNLKPGLJHF_OFFSET UNITYSDK_OFFSET(0x18BC28E0)
#define EHBHFKOLEDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BC2650)

inline static constexpr unsigned int EHBHFKOLEDA_TypeDefinitionIndex = 56568;

	class EHBHFKOLEDA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BMLOBBDPFCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BMLOBBDPFCO*))((::PBYTE)hIl2Cpp + EHBHFKOLEDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBHFKOLEDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::String* JJNLKPGLJHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBHFKOLEDA_JJNLKPGLJHF_OFFSET))(this);
		}

	};
