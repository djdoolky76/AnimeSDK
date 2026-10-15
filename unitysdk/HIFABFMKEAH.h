#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByFuncUnlockCheck; }
namespace RPG::GameCore { class TaskContext; }

#define HIFABFMKEAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE2F70)
#define HIFABFMKEAH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CE2FA0)

inline static constexpr unsigned int HIFABFMKEAH_TypeDefinitionIndex = 52088;

	class HIFABFMKEAH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + HIFABFMKEAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFABFMKEAH_EVALUATE_OFFSET))(this);
		}

	};
