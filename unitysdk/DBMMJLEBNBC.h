#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMMJLEBNBC;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define DBMMJLEBNBC_BPKJLFNHJOH_OFFSET UNITYSDK_OFFSET(0xE2334A0)
#define DBMMJLEBNBC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE232EB0)
#define DBMMJLEBNBC_CLEAR_OFFSET UNITYSDK_OFFSET(0xE233090)
#define DBMMJLEBNBC_CTOR_OFFSET UNITYSDK_OFFSET(0xE2338C0)
#define DBMMJLEBNBC_NENOOIMIMDA_OFFSET UNITYSDK_OFFSET(0xE2336B0)
#define DBMMJLEBNBC_ONKCKJCFIDG_OFFSET UNITYSDK_OFFSET(0xE233290)

inline static constexpr unsigned int DBMMJLEBNBC_TypeDefinitionIndex = 53982;

	class DBMMJLEBNBC : public ::System::Object
	{
	public:
		::KFELGAIGHAP* KFHEBANPEOH; // 0x10
		::KFELGAIGHAP* DCFCFCAOJFN; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* DEGHMIMBOOP; // 0x28
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
