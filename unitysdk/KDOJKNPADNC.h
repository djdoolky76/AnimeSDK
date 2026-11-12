#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDOJKNPADNC_Phase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GHJODDBAHLI;
class MACJPMIDFNL;
namespace RPG::GameCore { class FormationPatternConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDOJKNPADNC_BCDIAHJGNED_OFFSET UNITYSDK_OFFSET(0xBBF54A0)
#define KDOJKNPADNC_BEFCGMHDBOP_OFFSET UNITYSDK_OFFSET(0xBBF4180)
#define KDOJKNPADNC_BGFPKOLKPOO_OFFSET UNITYSDK_OFFSET(0xBBF3E30)
#define KDOJKNPADNC_CJCOCOJJBBO_OFFSET UNITYSDK_OFFSET(0xBBF5A10)
#define KDOJKNPADNC_CKDDODACNGE_OFFSET UNITYSDK_OFFSET(0xBBF5EF0)
#define KDOJKNPADNC_CMJMMCLGHGK_OFFSET UNITYSDK_OFFSET(0xBBF46A0)
#define KDOJKNPADNC_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF3B70)
#define KDOJKNPADNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBF3BE0)
#define KDOJKNPADNC_DMCHEDILPKP_OFFSET UNITYSDK_OFFSET(0xBBF4DE0)
#define KDOJKNPADNC_EHIFAGNLNFP_OFFSET UNITYSDK_OFFSET(0xBBF59A0)
#define KDOJKNPADNC_GET_AHEADDISTANCE_OFFSET UNITYSDK_OFFSET(0xBBF63F0)
#define KDOJKNPADNC_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBBF6390)
#define KDOJKNPADNC_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xBBF63D0)
#define KDOJKNPADNC_GET_STREAM_OFFSET UNITYSDK_OFFSET(0xBBF63B0)
#define KDOJKNPADNC_GET_TELEPORTLOD_OFFSET UNITYSDK_OFFSET(0xBBF6410)
#define KDOJKNPADNC_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0xBBF4C80)
#define KDOJKNPADNC_GKMPBNOEPOB_OFFSET UNITYSDK_OFFSET(0xBBF6140)
#define KDOJKNPADNC_GPOLBDHKLCI_OFFSET UNITYSDK_OFFSET(0xBBF4300)
#define KDOJKNPADNC_ICJGMELMLGO_OFFSET UNITYSDK_OFFSET(0xBBF5680)
#define KDOJKNPADNC_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xBBF3FE0)
#define KDOJKNPADNC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBBF5020)
#define KDOJKNPADNC_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0xBBF4600)
#define KDOJKNPADNC_KANMJJLKMMI_OFFSET UNITYSDK_OFFSET(0xBBF5450)
#define KDOJKNPADNC_KDHCICFNAOC_OFFSET UNITYSDK_OFFSET(0xBBF4650)
#define KDOJKNPADNC_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0xBBF46F0)
#define KDOJKNPADNC_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xBBF3DA0)
#define KDOJKNPADNC_LOGGIKCCIIJ_OFFSET UNITYSDK_OFFSET(0xBBF4460)
#define KDOJKNPADNC_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0xBBF4870)
#define KDOJKNPADNC_OBLGCIGBLKO_OFFSET UNITYSDK_OFFSET(0xBBF4A70)
#define KDOJKNPADNC_OEKOFHHBAGD_OFFSET UNITYSDK_OFFSET(0xBBF4740)
#define KDOJKNPADNC_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xBBF3E90)
#define KDOJKNPADNC_OOCHJEEPBHL_OFFSET UNITYSDK_OFFSET(0xBBF4B50)
#define KDOJKNPADNC_PIOJEKPEIMI_OFFSET UNITYSDK_OFFSET(0xBBF5DC0)
#define KDOJKNPADNC_PLGNLKALBNN_OFFSET UNITYSDK_OFFSET(0xBBF4F00)
#define KDOJKNPADNC_SET_AHEADDISTANCE_OFFSET UNITYSDK_OFFSET(0xBBF6400)
#define KDOJKNPADNC_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBBF63A0)
#define KDOJKNPADNC_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xBBF63E0)
#define KDOJKNPADNC_SET_STREAM_OFFSET UNITYSDK_OFFSET(0xBBF63C0)
#define KDOJKNPADNC_SET_TELEPORTLOD_OFFSET UNITYSDK_OFFSET(0xBBF6420)

inline static constexpr unsigned int KDOJKNPADNC_TypeDefinitionIndex = 65686;

	class KDOJKNPADNC : public ::System::Object
	{
	public:
		::MACJPMIDFNL* _Stream_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::GHJODDBAHLI*>* EEMLILALOJM; // 0x18
		::RPG::GameCore::FormationPatternConfig* NEBBHLLJJLE; // 0x20
		::KDOJKNPADNC_Phase NOHNKAIALPJ; // 0x28
		::System::Int32 _TeleportLod_k__BackingField; // 0x2C
		::System::Single _AheadDistance_k__BackingField; // 0x30
		::System::Int32 BMBJEBFACLK; // 0x34
		::System::Single BJOCBPFKJDP; // 0x38
		::System::UInt32 _GroupId_k__BackingField; // 0x3C
		::System::Int32 JLFNAFCKJEH; // 0x40
		::System::Single _Speed_k__BackingField; // 0x44
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::FormationPatternConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FormationPatternConfig*))((::PBYTE)hIl2Cpp + KDOJKNPADNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_DISPOSE_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::MACJPMIDFNL* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MACJPMIDFNL*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + KDOJKNPADNC_KPKCFMCJBCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BGFPKOLKPOO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDOJKNPADNC_BGFPKOLKPOO_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void BEFCGMHDBOP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KDOJKNPADNC_BEFCGMHDBOP_OFFSET))(this, a1);
		}

		::System::Void GPOLBDHKLCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_GPOLBDHKLCI_OFFSET))(this);
		}

		::System::Void LOGGIKCCIIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_LOGGIKCCIIJ_OFFSET))(this);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Boolean KDHCICFNAOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_KDHCICFNAOC_OFFSET))(this);
		}

		::System::Void CMJMMCLGHGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_CMJMMCLGHGK_OFFSET))(this);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_KEOKEELBKHI_OFFSET))(this);
		}

		::System::Boolean OEKOFHHBAGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_OEKOFHHBAGD_OFFSET))(this);
		}

		::System::Void LPFBANCOMPE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDOJKNPADNC_LPFBANCOMPE_OFFSET))(this, a1);
		}

		::System::Void OOCHJEEPBHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_OOCHJEEPBHL_OFFSET))(this);
		}

		::System::Void GFIJGKKMMIP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KDOJKNPADNC_GFIJGKKMMIP_OFFSET))(this, a1, a2);
		}

		::System::Void DMCHEDILPKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_DMCHEDILPKP_OFFSET))(this);
		}

		::System::Void PLGNLKALBNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_PLGNLKALBNN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDOJKNPADNC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KANMJJLKMMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_KANMJJLKMMI_OFFSET))(this);
		}

		::System::Void OBLGCIGBLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_OBLGCIGBLKO_OFFSET))(this);
		}

		::System::Void ICJGMELMLGO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KDOJKNPADNC_ICJGMELMLGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Single EHIFAGNLNFP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_EHIFAGNLNFP_OFFSET))(this);
		}

		::System::Single CJCOCOJJBBO(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDOJKNPADNC_CJCOCOJJBBO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PIOJEKPEIMI(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDOJKNPADNC_PIOJEKPEIMI_OFFSET))(this, a1);
		}

		::System::Void CKDDODACNGE(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KDOJKNPADNC_CKDDODACNGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GKMPBNOEPOB(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KDOJKNPADNC_GKMPBNOEPOB_OFFSET))(this, a1, a2);
		}

		::System::Void BCDIAHJGNED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_BCDIAHJGNED_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDOJKNPADNC_SET_GROUPID_OFFSET))(this, a1);
		}

		::MACJPMIDFNL* get_Stream()
		{
			return ((::MACJPMIDFNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::MACJPMIDFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MACJPMIDFNL*))((::PBYTE)hIl2Cpp + KDOJKNPADNC_SET_STREAM_OFFSET))(this, a1);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDOJKNPADNC_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_AheadDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_GET_AHEADDISTANCE_OFFSET))(this);
		}

		::System::Void set_AheadDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDOJKNPADNC_SET_AHEADDISTANCE_OFFSET))(this, a1);
		}

		::System::Int32 get_TeleportLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOJKNPADNC_GET_TELEPORTLOD_OFFSET))(this);
		}

		::System::Void set_TeleportLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDOJKNPADNC_SET_TELEPORTLOD_OFFSET))(this, a1);
		}

	};
