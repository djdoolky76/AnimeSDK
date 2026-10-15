#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class AJBKGPOEBFG;
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENPEGNGIAEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C85A0)
#define ENPEGNGIAEI_FAPNDMMBKLN_OFFSET UNITYSDK_OFFSET(0x1C5D8B40)
#define ENPEGNGIAEI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5C8B50)
#define ENPEGNGIAEI_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5C8810)

inline static constexpr unsigned int ENPEGNGIAEI_TypeDefinitionIndex = 36337;

	class ENPEGNGIAEI : public ::AJBKGPOEBFG
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* DNJLAHPLLFB; // 0x18
		::System::Collections::Generic::List_1<::AJBKGPOEBFG*>* IFMDBDJCCCI; // 0x20
		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + ENPEGNGIAEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPEGNGIAEI_MLKLPMJEHPF_OFFSET))(this);
		}

		::System::Void FAPNDMMBKLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPEGNGIAEI_FAPNDMMBKLN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENPEGNGIAEI_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
