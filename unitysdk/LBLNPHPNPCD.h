#pragma once
#include "unitysdk/unitysdk.h"
class BHADBDJKANL;
class ILLJOMOEJGF;
namespace RPG::GameCore { class AdvNpcMonsterSetupTrigger; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBLNPHPNPCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB605E80)
#define LBLNPHPNPCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6068D0)
#define LBLNPHPNPCD_IOFCDLPDLEL_OFFSET UNITYSDK_OFFSET(0xB6060D0)
#define LBLNPHPNPCD_NGLBIFBAEPE_OFFSET UNITYSDK_OFFSET(0xB6067D0)
#define LBLNPHPNPCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB605EB0)

inline static constexpr unsigned int LBLNPHPNPCD_TypeDefinitionIndex = 52452;

	class LBLNPHPNPCD
	{
	public:
		::RPG::GameCore::ColliderTriggerComponent* IKPIABIPNEK; // 0x28
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x30
		::BHADBDJKANL* GALAHGAJODG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcMonsterSetupTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcMonsterSetupTrigger*))((::PBYTE)hIl2Cpp + LBLNPHPNPCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLNPHPNPCD_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::PropButtonConfig* NGLBIFBAEPE(::System::String* a1, ::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* a2)
		{
			return ((::RPG::GameCore::PropButtonConfig*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::PropButtonConfig*>*))((::PBYTE)hIl2Cpp + LBLNPHPNPCD_NGLBIFBAEPE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::ILLJOMOEJGF*>* IOFCDLPDLEL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::ILLJOMOEJGF*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LBLNPHPNPCD_IOFCDLPDLEL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLNPHPNPCD_DISPOSE_OFFSET))(this);
		}

	};
