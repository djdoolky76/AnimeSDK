#pragma once
#include "unitysdk/unitysdk.h"
class CGHBOOLNOOJ;
namespace RPG::GameCore { class TaskContext; }

#define ABGLNFCIJNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F2040)
#define ABGLNFCIJNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0F2070)

inline static constexpr unsigned int ABGLNFCIJNN_TypeDefinitionIndex = 55734;

	class ABGLNFCIJNN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CGHBOOLNOOJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CGHBOOLNOOJ*))((::PBYTE)hIl2Cpp + ABGLNFCIJNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGLNFCIJNN_ONTASKBEGIN_OFFSET))(this);
		}

	};
