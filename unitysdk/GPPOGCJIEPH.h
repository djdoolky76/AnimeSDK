#pragma once
#include "unitysdk/unitysdk.h"
class OOADBMLOOEI;
namespace RPG::GameCore { class TaskContext; }

#define GPPOGCJIEPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15B69100)
#define GPPOGCJIEPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B69130)

inline static constexpr unsigned int GPPOGCJIEPH_TypeDefinitionIndex = 55034;

	class GPPOGCJIEPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OOADBMLOOEI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OOADBMLOOEI*))((::PBYTE)hIl2Cpp + GPPOGCJIEPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPOGCJIEPH_EVALUATE_OFFSET))(this);
		}

	};
