#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define DHMOJBAIFJO_CNFDAHGLJBM_OFFSET UNITYSDK_OFFSET(0xEBEADC0)
#define DHMOJBAIFJO_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEAC10)
#define DHMOJBAIFJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBEAC20)
#define DHMOJBAIFJO_MHOCLAENKBF_OFFSET UNITYSDK_OFFSET(0xEBEAC80)
#define DHMOJBAIFJO_OKEGKAKBPCL_OFFSET UNITYSDK_OFFSET(0xEBEAF60)

	class DHMOJBAIFJO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* DEDGHKACMMG; // 0x10
		::KFELGAIGHAP* MPKAFEJFNKN; // 0x18
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
		::System::Boolean MHEAIOMEGCA; // 0x28
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DHMOJBAIFJO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMOJBAIFJO_DISPOSE_OFFSET))(this);
		}

		::System::Void CNFDAHGLJBM(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + DHMOJBAIFJO_CNFDAHGLJBM_OFFSET))(this, a1, a2);
		}

		::System::Void MHOCLAENKBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMOJBAIFJO_MHOCLAENKBF_OFFSET))(this);
		}

		::System::Void OKEGKAKBPCL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DHMOJBAIFJO_OKEGKAKBPCL_OFFSET))(this, a1);
		}

	};
