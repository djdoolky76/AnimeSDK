#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBAOECBDMIC_RF_BossSkillProgressComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillProgressType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define FBAOECBDMIC_AEGNGEDHALI_OFFSET UNITYSDK_OFFSET(0x1C610FF0)
#define FBAOECBDMIC_ANKBEDEEDAB_OFFSET UNITYSDK_OFFSET(0x1C610F10)
#define FBAOECBDMIC_BOKNDPIDOCC_OFFSET UNITYSDK_OFFSET(0x1C610E40)
#define FBAOECBDMIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6117E0)
#define FBAOECBDMIC_EHOPKMIKLPC_OFFSET UNITYSDK_OFFSET(0x1C610F20)
#define FBAOECBDMIC_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C611740)
#define FBAOECBDMIC_FHLBOJCBIAN_OFFSET UNITYSDK_OFFSET(0x1C610DF0)
#define FBAOECBDMIC_HJLIFHJKBFH_OFFSET UNITYSDK_OFFSET(0x1C610F90)
#define FBAOECBDMIC_ICKEPGMINBO_OFFSET UNITYSDK_OFFSET(0x1C610E50)
#define FBAOECBDMIC_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C611040)
#define FBAOECBDMIC_LLIBOGNNFFE_OFFSET UNITYSDK_OFFSET(0x1C610EA0)
#define FBAOECBDMIC_MCNDCHIANHE_OFFSET UNITYSDK_OFFSET(0x1C610D90)
#define FBAOECBDMIC_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C6116E0)
#define FBAOECBDMIC_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C611790)
#define FBAOECBDMIC_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C6113D0)
#define FBAOECBDMIC_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C610D40)
#define FBAOECBDMIC_OEOPHFDJJGM_OFFSET UNITYSDK_OFFSET(0x1C610FE0)
#define FBAOECBDMIC_OMNAOMBCKCN_OFFSET UNITYSDK_OFFSET(0x1C610DE0)
#define FBAOECBDMIC_ONGAAGOFGHK_OFFSET UNITYSDK_OFFSET(0x1C610EB0)
#define FBAOECBDMIC_PBGHPGCHJKC_OFFSET UNITYSDK_OFFSET(0x1C610D80)
#define FBAOECBDMIC_PGCBPNFMBGH_OFFSET UNITYSDK_OFFSET(0x1C610F80)
#define FBAOECBDMIC_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C610D30)

inline static constexpr unsigned int FBAOECBDMIC_TypeDefinitionIndex = 37073;

	class FBAOECBDMIC : public ::System::Object
	{
	public:
		::System::Int32 IGAHPNMCPKJ; // 0x10
		::System::UInt32 JHOJKJBKKDH; // 0x14
		::System::UInt64 JEOCHCBMOCB; // 0x18
		::System::Int32 IEGOFDNIPCF; // 0x20
		::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType JEBMNGIHDMK; // 0x24
		::FBAOECBDMIC_RF_BossSkillProgressComponent HFKLFHBEDEM; // 0x25
		::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType OKMPAAEPNJN; // 0x26
		::System::UInt64 GCLEKBBFBEN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_NOJIPMKAGON_OFFSET))(this);
		}

		::System::UInt32 PBGHPGCHJKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_PBGHPGCHJKC_OFFSET))(this);
		}

		::System::Void MCNDCHIANHE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBAOECBDMIC_MCNDCHIANHE_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType OMNAOMBCKCN()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_OMNAOMBCKCN_OFFSET))(this);
		}

		::System::Void FHLBOJCBIAN(::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillProgressType))((::PBYTE)hIl2Cpp + FBAOECBDMIC_FHLBOJCBIAN_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType BOKNDPIDOCC()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_BOKNDPIDOCC_OFFSET))(this);
		}

		::System::Void ICKEPGMINBO(::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType))((::PBYTE)hIl2Cpp + FBAOECBDMIC_ICKEPGMINBO_OFFSET))(this, a1);
		}

		::System::UInt64 LLIBOGNNFFE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_LLIBOGNNFFE_OFFSET))(this);
		}

		::System::Void ONGAAGOFGHK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FBAOECBDMIC_ONGAAGOFGHK_OFFSET))(this, a1);
		}

		::System::UInt64 ANKBEDEEDAB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_ANKBEDEEDAB_OFFSET))(this);
		}

		::System::Void EHOPKMIKLPC(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FBAOECBDMIC_EHOPKMIKLPC_OFFSET))(this, a1);
		}

		::System::Int32 PGCBPNFMBGH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_PGCBPNFMBGH_OFFSET))(this);
		}

		::System::Void HJLIFHJKBFH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBAOECBDMIC_HJLIFHJKBFH_OFFSET))(this, a1);
		}

		::System::Int32 OEOPHFDJJGM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_OEOPHFDJJGM_OFFSET))(this);
		}

		::System::Void AEGNGEDHALI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBAOECBDMIC_AEGNGEDHALI_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + FBAOECBDMIC_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + FBAOECBDMIC_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + FBAOECBDMIC_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::FBAOECBDMIC_RF_BossSkillProgressComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBAOECBDMIC_RF_BossSkillProgressComponent))((::PBYTE)hIl2Cpp + FBAOECBDMIC_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOECBDMIC_NBLPPFGNHHO_OFFSET))(this);
		}

	};
