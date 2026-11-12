#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideFloorDefaultEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define GJHAPGDHBCI_CTOR_OFFSET UNITYSDK_OFFSET(0x169A5140)
#define GJHAPGDHBCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169A5170)

inline static constexpr unsigned int GJHAPGDHBCI_TypeDefinitionIndex = 59501;

	class GJHAPGDHBCI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + GJHAPGDHBCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHAPGDHBCI_ONTASKBEGIN_OFFSET))(this);
		}

	};
