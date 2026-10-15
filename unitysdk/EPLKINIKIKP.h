#pragma once
#include "unitysdk/unitysdk.h"
class ILLJOMOEJGF;
namespace RPG::GameCore { class AdvSetupButtonListTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPLKINIKIKP_CTOR_OFFSET UNITYSDK_OFFSET(0x155D76D0)
#define EPLKINIKIKP_IOFCDLPDLEL_OFFSET UNITYSDK_OFFSET(0x155D7800)
#define EPLKINIKIKP_NGLBIFBAEPE_OFFSET UNITYSDK_OFFSET(0x155D7700)
#define EPLKINIKIKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155D7F70)

inline static constexpr unsigned int EPLKINIKIKP_TypeDefinitionIndex = 52506;

	class EPLKINIKIKP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetupButtonListTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetupButtonListTrigger*))((::PBYTE)hIl2Cpp + EPLKINIKIKP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PropButtonConfig* NGLBIFBAEPE(::System::String* a1, ::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* a2)
		{
			return ((::RPG::GameCore::PropButtonConfig*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::PropButtonConfig*>*))((::PBYTE)hIl2Cpp + EPLKINIKIKP_NGLBIFBAEPE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::ILLJOMOEJGF*>* IOFCDLPDLEL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::ILLJOMOEJGF*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EPLKINIKIKP_IOFCDLPDLEL_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLKINIKIKP_ONTASKBEGIN_OFFSET))(this);
		}

	};
