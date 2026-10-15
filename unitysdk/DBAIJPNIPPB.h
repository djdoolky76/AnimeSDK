#pragma once
#include "unitysdk/unitysdk.h"
class PCKCEGKJFAO;
namespace RPG::GameCore { class TaskContext; }

#define DBAIJPNIPPB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFCB100)
#define DBAIJPNIPPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFCB130)

inline static constexpr unsigned int DBAIJPNIPPB_TypeDefinitionIndex = 55282;

	class DBAIJPNIPPB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PCKCEGKJFAO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PCKCEGKJFAO*))((::PBYTE)hIl2Cpp + DBAIJPNIPPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAIJPNIPPB_ONTASKBEGIN_OFFSET))(this);
		}

	};
