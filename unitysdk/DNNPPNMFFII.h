#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifySwitchHandControlParam; }
namespace RPG::GameCore { class TaskContext; }

#define DNNPPNMFFII_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD6430)
#define DNNPPNMFFII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FD6460)

inline static constexpr unsigned int DNNPPNMFFII_TypeDefinitionIndex = 53029;

	class DNNPPNMFFII
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySwitchHandControlParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySwitchHandControlParam*))((::PBYTE)hIl2Cpp + DNNPPNMFFII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNPPNMFFII_ONTASKBEGIN_OFFSET))(this);
		}

	};
