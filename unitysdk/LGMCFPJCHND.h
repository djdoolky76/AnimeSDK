#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define LGMCFPJCHND_CTOR_OFFSET UNITYSDK_OFFSET(0xB695A20)
#define LGMCFPJCHND_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB695A50)
#define LGMCFPJCHND_GAIPMAHIPDC_OFFSET UNITYSDK_OFFSET(0xB695AA0)

inline static constexpr unsigned int LGMCFPJCHND_TypeDefinitionIndex = 54530;

	class LGMCFPJCHND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + LGMCFPJCHND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMCFPJCHND_EVALUATE_OFFSET))(this);
		}

		static ::System::Boolean GAIPMAHIPDC(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + LGMCFPJCHND_GAIPMAHIPDC_OFFSET))(a1, a2);
		}

	};
