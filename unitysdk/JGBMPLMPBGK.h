#pragma once
#include "unitysdk/unitysdk.h"
class AICDMFFGNIH;
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryTriggerAid; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGBMPLMPBGK_AKIOGJBOMJI_OFFSET UNITYSDK_OFFSET(0xB192010)
#define JGBMPLMPBGK_CGIHDOIFLCH_OFFSET UNITYSDK_OFFSET(0xB1920A0)
#define JGBMPLMPBGK_CINHKANBAJF_OFFSET UNITYSDK_OFFSET(0xB192340)
#define JGBMPLMPBGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB191D20)
#define JGBMPLMPBGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB191E80)
#define JGBMPLMPBGK_ECFAKNHALJL_OFFSET UNITYSDK_OFFSET(0xB193500)
#define JGBMPLMPBGK_EIOPGBNGPOF_OFFSET UNITYSDK_OFFSET(0xB193400)
#define JGBMPLMPBGK_HOLECNABENN_OFFSET UNITYSDK_OFFSET(0xB193860)
#define JGBMPLMPBGK_JECDMAEOAGH_OFFSET UNITYSDK_OFFSET(0xB1921D0)
#define JGBMPLMPBGK_KGMNOBMPDFB_OFFSET UNITYSDK_OFFSET(0xB192400)
#define JGBMPLMPBGK_KINNIELHENN_OFFSET UNITYSDK_OFFSET(0xB193300)
#define JGBMPLMPBGK_LCHJDKHFDLG_OFFSET UNITYSDK_OFFSET(0xB192830)
#define JGBMPLMPBGK_MHHALEMFDEK_OFFSET UNITYSDK_OFFSET(0xB192DD0)
#define JGBMPLMPBGK_MNHOGEJOAFG_OFFSET UNITYSDK_OFFSET(0xB1937B0)
#define JGBMPLMPBGK_OAIGDCJDFOA_OFFSET UNITYSDK_OFFSET(0xB1936D0)
#define JGBMPLMPBGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB193070)
#define JGBMPLMPBGK_PILKOLAIOOI_OFFSET UNITYSDK_OFFSET(0xB1935F0)

	class JGBMPLMPBGK
	{
	public:
		::System::Int32 KPEILGHEFCI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryTriggerAid* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryTriggerAid*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AKIOGJBOMJI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_AKIOGJBOMJI_OFFSET))(this, a1);
		}

		::System::Boolean CGIHDOIFLCH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_CGIHDOIFLCH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* JECDMAEOAGH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_JECDMAEOAGH_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CINHKANBAJF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_CINHKANBAJF_OFFSET))(this, a1);
		}

		::System::Boolean KGMNOBMPDFB(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_KGMNOBMPDFB_OFFSET))(this, a1, a2);
		}

		::System::Boolean MHHALEMFDEK(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_MHHALEMFDEK_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KINNIELHENN(::AICDMFFGNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AICDMFFGNIH*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_KINNIELHENN_OFFSET))(this, a1);
		}

		::System::Void EIOPGBNGPOF(::AICDMFFGNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AICDMFFGNIH*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_EIOPGBNGPOF_OFFSET))(this, a1);
		}

		::System::Void ECFAKNHALJL(::AICDMFFGNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AICDMFFGNIH*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_ECFAKNHALJL_OFFSET))(this, a1);
		}

		::System::Void PILKOLAIOOI(::AICDMFFGNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AICDMFFGNIH*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_PILKOLAIOOI_OFFSET))(this, a1);
		}

		::System::Void OAIGDCJDFOA(::AICDMFFGNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AICDMFFGNIH*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_OAIGDCJDFOA_OFFSET))(this, a1);
		}

		::System::Void LCHJDKHFDLG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_LCHJDKHFDLG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MNHOGEJOAFG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_MNHOGEJOAFG_OFFSET))(this, a1);
		}

		::System::Void HOLECNABENN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JGBMPLMPBGK_HOLECNABENN_OFFSET))(this, a1);
		}

	};
