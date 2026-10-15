#pragma once
#include "unitysdk/unitysdk.h"
class OPBLGCPAKKI;
namespace RPG::GameCore { class TaskContext; }

#define EFJGPFLHEIC_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4F520)
#define EFJGPFLHEIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A4F550)

inline static constexpr unsigned int EFJGPFLHEIC_TypeDefinitionIndex = 55501;

	class EFJGPFLHEIC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OPBLGCPAKKI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OPBLGCPAKKI*))((::PBYTE)hIl2Cpp + EFJGPFLHEIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJGPFLHEIC_ONTASKBEGIN_OFFSET))(this);
		}

	};
