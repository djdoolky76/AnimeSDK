#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMMJLEBNBC;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define DBMMJLEBNBC_BPKJLFNHJOH_OFFSET UNITYSDK_OFFSET(0x1B157C70)
#define DBMMJLEBNBC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B157670)
#define DBMMJLEBNBC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B157850)
#define DBMMJLEBNBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B158090)
#define DBMMJLEBNBC_NENOOIMIMDA_OFFSET UNITYSDK_OFFSET(0x1B157E80)
#define DBMMJLEBNBC_ONKCKJCFIDG_OFFSET UNITYSDK_OFFSET(0x1B157A60)

inline static constexpr unsigned int DBMMJLEBNBC_TypeDefinitionIndex = 55146;

	class DBMMJLEBNBC : public ::System::Object
	{
	public:
		::KFELGAIGHAP* DEGHMIMBOOP; // 0x10
		::KFELGAIGHAP* DCFCFCAOJFN; // 0x18
		::KFELGAIGHAP* KFHEBANPEOH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMJLEBNBC_CTOR_OFFSET))(this);
		}

		static ::DBMMJLEBNBC* BPLPBPMEODA(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4)
		{
			return ((::DBMMJLEBNBC*(*)(::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + DBMMJLEBNBC_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMJLEBNBC_CLEAR_OFFSET))(this);
		}

		::System::Void ONKCKJCFIDG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DBMMJLEBNBC_ONKCKJCFIDG_OFFSET))(this, a1);
		}

		::System::Void BPKJLFNHJOH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DBMMJLEBNBC_BPKJLFNHJOH_OFFSET))(this, a1);
		}

		::System::Void NENOOIMIMDA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DBMMJLEBNBC_NENOOIMIMDA_OFFSET))(this, a1);
		}

	};
