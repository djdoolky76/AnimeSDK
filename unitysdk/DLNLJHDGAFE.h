#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowSwordTrainingConfirmGiveUpDialog; }
namespace RPG::GameCore { class TaskContext; }

#define DLNLJHDGAFE_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B9B40)
#define DLNLJHDGAFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF8B9E80)
#define DLNLJHDGAFE_OGJFGCFPEHO_OFFSET UNITYSDK_OFFSET(0xF8B9D10)
#define DLNLJHDGAFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF8B9B50)
#define DLNLJHDGAFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF8B9E30)
#define DLNLJHDGAFE_TICK_OFFSET UNITYSDK_OFFSET(0xF8B9ED0)

inline static constexpr unsigned int DLNLJHDGAFE_TypeDefinitionIndex = 55619;

	class DLNLJHDGAFE : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*))((::PBYTE)hIl2Cpp + DLNLJHDGAFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNLJHDGAFE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OGJFGCFPEHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLNLJHDGAFE_OGJFGCFPEHO_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNLJHDGAFE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNLJHDGAFE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLNLJHDGAFE_TICK_OFFSET))(this, a1);
		}

	};
