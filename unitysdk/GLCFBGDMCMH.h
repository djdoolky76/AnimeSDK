#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsContainModifier; }
namespace RPG::GameCore { class TaskContext; }

#define GLCFBGDMCMH_CTOR_OFFSET UNITYSDK_OFFSET(0x16C592D0)
#define GLCFBGDMCMH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16C59300)

inline static constexpr unsigned int GLCFBGDMCMH_TypeDefinitionIndex = 55808;

	class GLCFBGDMCMH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + GLCFBGDMCMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCFBGDMCMH_EVALUATE_OFFSET))(this);
		}

	};
