#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetupMapRotationCharger; }
namespace RPG::GameCore { class TaskContext; }

#define LFMKMPILNPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB67E020)
#define LFMKMPILNPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB67E050)

inline static constexpr unsigned int LFMKMPILNPF_TypeDefinitionIndex = 53001;

	class LFMKMPILNPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupMapRotationCharger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupMapRotationCharger*))((::PBYTE)hIl2Cpp + LFMKMPILNPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMKMPILNPF_ONTASKBEGIN_OFFSET))(this);
		}

	};
