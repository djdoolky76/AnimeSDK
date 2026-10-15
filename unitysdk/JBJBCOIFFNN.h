#pragma once
#include "unitysdk/unitysdk.h"
class BDLHKCMCMGJ;
namespace RPG::GameCore { class TaskContext; }

#define JBJBCOIFFNN_CTOR_OFFSET UNITYSDK_OFFSET(0x16570F40)
#define JBJBCOIFFNN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16570F70)

inline static constexpr unsigned int JBJBCOIFFNN_TypeDefinitionIndex = 57975;

	class JBJBCOIFFNN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BDLHKCMCMGJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BDLHKCMCMGJ*))((::PBYTE)hIl2Cpp + JBJBCOIFFNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJBCOIFFNN_EVALUATE_OFFSET))(this);
		}

	};
