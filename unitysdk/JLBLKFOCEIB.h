#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLBLKFOCEIB_WaitEventState.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ElfSpecialEventSelectResultItem; }
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JLBLKFOCEIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB22CC30)
#define JLBLKFOCEIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB22D830)
#define JLBLKFOCEIB_EGLHCKMDLED_OFFSET UNITYSDK_OFFSET(0xB22D7B0)
#define JLBLKFOCEIB_FKCONHLGOKK_OFFSET UNITYSDK_OFFSET(0xB22D3E0)
#define JLBLKFOCEIB_FOGLIDHOKJH_OFFSET UNITYSDK_OFFSET(0xB22DB80)
#define JLBLKFOCEIB_JGLCMEBIPLK_OFFSET UNITYSDK_OFFSET(0xB22DA20)
#define JLBLKFOCEIB_KDPADAANNLN_OFFSET UNITYSDK_OFFSET(0xB22D880)
#define JLBLKFOCEIB_NJODPPDCLEA_OFFSET UNITYSDK_OFFSET(0xB22DBD0)
#define JLBLKFOCEIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB22CC60)
#define JLBLKFOCEIB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB22CEB0)
#define JLBLKFOCEIB_TICK_OFFSET UNITYSDK_OFFSET(0xB22CF00)

inline static constexpr unsigned int JLBLKFOCEIB_TypeDefinitionIndex = 52159;

	class JLBLKFOCEIB
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x28
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x30
		::JLBLKFOCEIB_WaitEventState FFHNGPLFNHI; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean FKCONHLGOKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_FKCONHLGOKK_OFFSET))(this);
		}

		::System::Boolean EGLHCKMDLED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_EGLHCKMDLED_OFFSET))(this);
		}

		::System::Void KDPADAANNLN(::RPG::GameCore::ElfSpecialEventSelectResultItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfSpecialEventSelectResultItem*))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_KDPADAANNLN_OFFSET))(this, a1);
		}

		::System::Void JGLCMEBIPLK(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_JGLCMEBIPLK_OFFSET))(this, a1);
		}

		::System::Void NJODPPDCLEA(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_NJODPPDCLEA_OFFSET))(this, a1);
		}

		::System::Void FOGLIDHOKJH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLBLKFOCEIB_FOGLIDHOKJH_OFFSET))(this, a1);
		}

	};
