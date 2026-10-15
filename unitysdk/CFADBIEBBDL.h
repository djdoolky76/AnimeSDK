#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddGlobalDynamicOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CFADBIEBBDL_CTOR_OFFSET UNITYSDK_OFFSET(0xC9FAD60)
#define CFADBIEBBDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9FAD70)
#define CFADBIEBBDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9FADB0)
#define CFADBIEBBDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC9FB2B0)
#define CFADBIEBBDL_TICK_OFFSET UNITYSDK_OFFSET(0xC9FB300)

inline static constexpr unsigned int CFADBIEBBDL_TypeDefinitionIndex = 57861;

	class CFADBIEBBDL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AddGlobalDynamicOffset* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGlobalDynamicOffset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGlobalDynamicOffset*))((::PBYTE)hIl2Cpp + CFADBIEBBDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFADBIEBBDL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFADBIEBBDL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFADBIEBBDL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFADBIEBBDL_TICK_OFFSET))(this, a1);
		}

	};
