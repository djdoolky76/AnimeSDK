#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPamOnlineFirst; }
namespace RPG::GameCore { class TaskContext; }

#define ENJBJBJLDKD_CTOR_OFFSET UNITYSDK_OFFSET(0x155A4D60)
#define ENJBJBJLDKD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155A4D90)

inline static constexpr unsigned int ENJBJBJLDKD_TypeDefinitionIndex = 53161;

	class ENJBJBJLDKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + ENJBJBJLDKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJBJBJLDKD_EVALUATE_OFFSET))(this);
		}

	};
