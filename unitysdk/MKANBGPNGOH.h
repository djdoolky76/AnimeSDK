#pragma once
#include "unitysdk/unitysdk.h"
class BGMKDGACBNI;
class DEEJKBIMHAA;
class KADNINAMKGA;
class KDCNOMHGMNO;
class KFELGAIGHAP;
class MOAKENFIBPE;
class NAEEAOEHNAM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define MKANBGPNGOH_AIFGAEEFKMK_OFFSET UNITYSDK_OFFSET(0xB985D00)
#define MKANBGPNGOH_AILDBGOLHDJ_OFFSET UNITYSDK_OFFSET(0xB9853C0)
#define MKANBGPNGOH_BGBMDAOELAA_OFFSET UNITYSDK_OFFSET(0xB9834C0)
#define MKANBGPNGOH_BOJLBMHHAEN_OFFSET UNITYSDK_OFFSET(0xB986730)
#define MKANBGPNGOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB982580)
#define MKANBGPNGOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9826B0)
#define MKANBGPNGOH_DMOCJHCDALA_OFFSET UNITYSDK_OFFSET(0xB985E20)
#define MKANBGPNGOH_GEIGJNPPCGP_OFFSET UNITYSDK_OFFSET(0xB9858F0)
#define MKANBGPNGOH_GLDAGCNDCMA_OFFSET UNITYSDK_OFFSET(0xB982A10)
#define MKANBGPNGOH_GLMLEFDHHGM_OFFSET UNITYSDK_OFFSET(0xB9846F0)
#define MKANBGPNGOH_ILEHKOKFHKL_OFFSET UNITYSDK_OFFSET(0xB983750)
#define MKANBGPNGOH_NAAPPHLGMNL_OFFSET UNITYSDK_OFFSET(0xB984350)
#define MKANBGPNGOH_OEDNMEEIMFJ_OFFSET UNITYSDK_OFFSET(0xB983230)
#define MKANBGPNGOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9826F0)
#define MKANBGPNGOH_PDJAHMBOPDP_OFFSET UNITYSDK_OFFSET(0xB984E00)

inline static constexpr unsigned int MKANBGPNGOH_TypeDefinitionIndex = 53853;

	class MKANBGPNGOH
	{
	public:
		::KDCNOMHGMNO* PMEOEIDANPD; // 0x28
		::KFELGAIGHAP* DOBPMCAIEEI; // 0x30
		::DEEJKBIMHAA* AIJGGLCAEON; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MOAKENFIBPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MOAKENFIBPE*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKANBGPNGOH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKANBGPNGOH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean GLDAGCNDCMA(::NAEEAOEHNAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAEEAOEHNAM*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_GLDAGCNDCMA_OFFSET))(this, a1);
		}

		::System::Boolean ILEHKOKFHKL(::RPG::GameCore::TaskContext* a1, ::MOAKENFIBPE* a2, ::KADNINAMKGA* a3, ::BGMKDGACBNI* a4, ::BGMKDGACBNI* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::GameEntity* a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::KFELGAIGHAP* a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MOAKENFIBPE*, ::KADNINAMKGA*, ::BGMKDGACBNI*, ::BGMKDGACBNI*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_ILEHKOKFHKL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void PDJAHMBOPDP(::KADNINAMKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KADNINAMKGA*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_PDJAHMBOPDP_OFFSET))(this, a1);
		}

		::System::Void GLMLEFDHHGM(::KADNINAMKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KADNINAMKGA*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_GLMLEFDHHGM_OFFSET))(this, a1);
		}

		::System::Void OEDNMEEIMFJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::KADNINAMKGA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::KADNINAMKGA*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_OEDNMEEIMFJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGBMDAOELAA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::KADNINAMKGA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::KADNINAMKGA*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_BGBMDAOELAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AILDBGOLHDJ(::BGMKDGACBNI* a1, ::RPG::GameCore::GameEntity* a2, ::KADNINAMKGA* a3, ::KFELGAIGHAP* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BGMKDGACBNI*, ::RPG::GameCore::GameEntity*, ::KADNINAMKGA*, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_AILDBGOLHDJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GEIGJNPPCGP(::BGMKDGACBNI* a1, ::RPG::GameCore::GameEntity* a2, ::KADNINAMKGA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGMKDGACBNI*, ::RPG::GameCore::GameEntity*, ::KADNINAMKGA*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_GEIGJNPPCGP_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void NAAPPHLGMNL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::MOAKENFIBPE* a4, ::KADNINAMKGA* a5, ::RPG::GameCore::TaskContext* a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::MOAKENFIBPE*, ::KADNINAMKGA*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_NAAPPHLGMNL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DMOCJHCDALA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::RtAttackData* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtAttackData*, ::System::Single))((::PBYTE)hIl2Cpp + MKANBGPNGOH_DMOCJHCDALA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AIFGAEEFKMK(::MOAKENFIBPE* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::MOAKENFIBPE*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MKANBGPNGOH_AIFGAEEFKMK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BOJLBMHHAEN(::System::Single a1, ::RPG::GameCore::GameEntity* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + MKANBGPNGOH_BOJLBMHHAEN_OFFSET))(a1, a2, a3);
		}

	};
