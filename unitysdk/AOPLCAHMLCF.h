#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LoadSavedEnvProfile; }
namespace RPG::GameCore { class TaskContext; }

#define AOPLCAHMLCF_CTOR_OFFSET UNITYSDK_OFFSET(0x158C85A0)
#define AOPLCAHMLCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158C85B0)
#define AOPLCAHMLCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158C85F0)
#define AOPLCAHMLCF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158C86F0)
#define AOPLCAHMLCF_TICK_OFFSET UNITYSDK_OFFSET(0x158C8740)

inline static constexpr unsigned int AOPLCAHMLCF_TypeDefinitionIndex = 58199;

	class AOPLCAHMLCF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::LoadSavedEnvProfile* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadSavedEnvProfile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadSavedEnvProfile*))((::PBYTE)hIl2Cpp + AOPLCAHMLCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPLCAHMLCF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPLCAHMLCF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPLCAHMLCF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOPLCAHMLCF_TICK_OFFSET))(this, a1);
		}

	};
