#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define HPHLMCKOHHO_ACAPJCGKCPJ_OFFSET UNITYSDK_OFFSET(0x15DBCBF0)
#define HPHLMCKOHHO_BDNIGOHEHJB_OFFSET UNITYSDK_OFFSET(0x15DBD630)
#define HPHLMCKOHHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DBD780)
#define HPHLMCKOHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBC9F0)
#define HPHLMCKOHHO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DBCA50)
#define HPHLMCKOHHO_DOONENTER_OFFSET UNITYSDK_OFFSET(0x15DBCC40)
#define HPHLMCKOHHO_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x15DBD1F0)
#define HPHLMCKOHHO_GET_BLOCKDIALOGUEINRANGE_OFFSET UNITYSDK_OFFSET(0x15DBD5F0)
#define HPHLMCKOHHO_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0x15DBD5D0)
#define HPHLMCKOHHO_GET_ENSUREIMMEDIATETASK_OFFSET UNITYSDK_OFFSET(0x15DBD610)
#define HPHLMCKOHHO_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x15DBCAF0)
#define HPHLMCKOHHO_SET_BLOCKDIALOGUEINRANGE_OFFSET UNITYSDK_OFFSET(0x15DBD600)
#define HPHLMCKOHHO_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0x15DBD5E0)
#define HPHLMCKOHHO_SET_ENSUREIMMEDIATETASK_OFFSET UNITYSDK_OFFSET(0x15DBD620)

inline static constexpr unsigned int HPHLMCKOHHO_TypeDefinitionIndex = 57507;

	class HPHLMCKOHHO : public ::EDLDHDMLJDH
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* HAEDBJEGEJB; // 0xA0
		::RPG::GameCore::TaskContext* OELBMKNMMGO; // 0xA8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IGAJPJJKPDF; // 0xB0
		::System::Boolean IKOKPIGDJEO; // 0xB8
		::System::Boolean _BlockDialogueInRange_k__BackingField; // 0xB9
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xBA
		::System::Boolean _EnsureImmediateTask_k__BackingField; // 0xBB
		static ::System::String** StaticGet_BLABEGFKAOP()
		{
			return (::System::String**)UnitySDK::FromName("", "HPHLMCKOHHO")->GetStaticField(0x32870);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHLMCKOHHO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTriggeredLogicFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
		}

		::System::Void ACAPJCGKCPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_ACAPJCGKCPJ_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockDialogueInRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_GET_BLOCKDIALOGUEINRANGE_OFFSET))(this);
		}

		::System::Void set_BlockDialogueInRange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_SET_BLOCKDIALOGUEINRANGE_OFFSET))(this, a1);
		}

		::System::Boolean get_EnsureImmediateTask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_GET_ENSUREIMMEDIATETASK_OFFSET))(this);
		}

		::System::Void set_EnsureImmediateTask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_SET_ENSUREIMMEDIATETASK_OFFSET))(this, a1);
		}

		static ::System::String* BDNIGOHEHJB(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HPHLMCKOHHO_BDNIGOHEHJB_OFFSET))(a1);
		}

	};
