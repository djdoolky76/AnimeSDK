#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearHPSharedGroup; }
namespace RPG::GameCore { class TaskContext; }

#define HCECJCDPGIC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C18280)
#define HCECJCDPGIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C182B0)

inline static constexpr unsigned int HCECJCDPGIC_TypeDefinitionIndex = 55088;

	class HCECJCDPGIC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearHPSharedGroup*))((::PBYTE)hIl2Cpp + HCECJCDPGIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCECJCDPGIC_ONTASKBEGIN_OFFSET))(this);
		}

	};
