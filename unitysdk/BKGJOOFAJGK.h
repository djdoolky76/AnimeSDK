#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DefineDynamicStringByAssistantID; }
namespace RPG::GameCore { class TaskContext; }

#define BKGJOOFAJGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B4090)
#define BKGJOOFAJGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7B40A0)
#define BKGJOOFAJGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7B40E0)
#define BKGJOOFAJGK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7B4130)
#define BKGJOOFAJGK_TICK_OFFSET UNITYSDK_OFFSET(0xB7B4180)

inline static constexpr unsigned int BKGJOOFAJGK_TypeDefinitionIndex = 54997;

	class BKGJOOFAJGK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::DefineDynamicStringByAssistantID* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineDynamicStringByAssistantID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineDynamicStringByAssistantID*))((::PBYTE)hIl2Cpp + BKGJOOFAJGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGJOOFAJGK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGJOOFAJGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGJOOFAJGK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKGJOOFAJGK_TICK_OFFSET))(this, a1);
		}

	};
