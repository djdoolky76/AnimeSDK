#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsEraFlipperEntityShow; }
namespace RPG::GameCore { class TaskContext; }

#define DACPGMOEAJA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBEB00)
#define DACPGMOEAJA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFBEB30)

inline static constexpr unsigned int DACPGMOEAJA_TypeDefinitionIndex = 52756;

	class DACPGMOEAJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + DACPGMOEAJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DACPGMOEAJA_EVALUATE_OFFSET))(this);
		}

	};
