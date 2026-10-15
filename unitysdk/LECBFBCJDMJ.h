#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
class IFPOBJGHJME;
class IMEFEGGEMIJ;
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerTakeOrder; }
namespace RPG::GameCore { class TaskContext; }

#define LECBFBCJDMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB64BC10)
#define LECBFBCJDMJ_DFFPNMJMFLI_OFFSET UNITYSDK_OFFSET(0xB64C840)
#define LECBFBCJDMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB64D620)
#define LECBFBCJDMJ_DNBIINCMAGB_OFFSET UNITYSDK_OFFSET(0xB64D670)
#define LECBFBCJDMJ_FEFENPCGDML_OFFSET UNITYSDK_OFFSET(0xB64BFB0)
#define LECBFBCJDMJ_KPBODLMCDMI_OFFSET UNITYSDK_OFFSET(0xB64CA90)
#define LECBFBCJDMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB64BC40)
#define LECBFBCJDMJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB64C210)
#define LECBFBCJDMJ_TICK_OFFSET UNITYSDK_OFFSET(0xB64C260)

	class LECBFBCJDMJ
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* LGHCBKOIBDF; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x30
		::IMEFEGGEMIJ* GNPMFNMGOLC; // 0x38
		::IFPOBJGHJME* NKIPHHIJMIA; // 0x40
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x48
		::RPG::GameCore::LittleGameSmartObjectSlotGroup KIKDJFGDGAO; // 0x50
		::System::Single PGMIOKKLHIE; // 0x54
		::System::Boolean BNDLCAADPPO; // 0x58
		::System::Boolean HJBDGPIFELM; // 0x59
		::System::Byte _padding0[0x2];
		::System::Int32 LFAKKMKFHGJ; // 0x5C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder*))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void FEFENPCGDML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_FEFENPCGDML_OFFSET))(this);
		}

		::System::Boolean DFFPNMJMFLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_DFFPNMJMFLI_OFFSET))(this);
		}

		::System::Boolean KPBODLMCDMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_KPBODLMCDMI_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantRecipeData* DNBIINCMAGB(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LECBFBCJDMJ_DNBIINCMAGB_OFFSET))(this, a1);
		}

	};
