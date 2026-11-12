#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActiveFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define BFOMOLKGCKL_CTOR_OFFSET UNITYSDK_OFFSET(0xBAFC780)
#define BFOMOLKGCKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAFC7B0)

inline static constexpr unsigned int BFOMOLKGCKL_TypeDefinitionIndex = 57072;

	class BFOMOLKGCKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveFarmElement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveFarmElement*))((::PBYTE)hIl2Cpp + BFOMOLKGCKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOMOLKGCKL_ONTASKBEGIN_OFFSET))(this);
		}

	};
