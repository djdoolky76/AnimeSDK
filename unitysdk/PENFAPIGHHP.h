#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class SerilizedBounds; }
namespace MoleMole::Battle { class Entity; }

#define PENFAPIGHHP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16FA4F60)
#define PENFAPIGHHP_DIFLAGDBBEC_OFFSET UNITYSDK_OFFSET(0x16FA3BA0)
#define PENFAPIGHHP_DJHGBGAPHCI_OFFSET UNITYSDK_OFFSET(0x16FA5030)
#define PENFAPIGHHP_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x16FA4FE0)
#define PENFAPIGHHP_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x16FA35F0)
#define PENFAPIGHHP_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x16FA3A00)
#define PENFAPIGHHP_GBGHCFFEDAD_OFFSET UNITYSDK_OFFSET(0x16FA51A0)
#define PENFAPIGHHP_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x16FA3870)
#define PENFAPIGHHP_IDFNPEDFDDP_OFFSET UNITYSDK_OFFSET(0x16FA4080)
#define PENFAPIGHHP_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x16FA5160)
#define PENFAPIGHHP_JFNNBBBLJBB_OFFSET UNITYSDK_OFFSET(0x16FA3C70)
#define PENFAPIGHHP_LPFPMHEFKGO_OFFSET UNITYSDK_OFFSET(0x16FA3680)
#define PENFAPIGHHP_NCDBLEOLHGJ_OFFSET UNITYSDK_OFFSET(0x16FA4FA0)
#define PENFAPIGHHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA4020)

inline static constexpr unsigned int PENFAPIGHHP_TypeDefinitionIndex = 66812;

class PENFAPIGHHP
{
public:
	::MoleMole::Battle::Entity* PBPNOPMHKAI; // 0x70
	::MoleMole::SerilizedBounds* PDMNLGOAPKC; // 0x78
	::System::Boolean IFHPNDPONAL; // 0x80
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 IOFGAFHDCKI; // 0x84
	::System::Single HIEJAENHKEO; // 0x90
	::UnityEngine::Vector3 DGMLAGFEABH; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENFAPIGHHP__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PENFAPIGHHP_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean LPFPMHEFKGO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PENFAPIGHHP_LPFPMHEFKGO_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENFAPIGHHP_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENFAPIGHHP_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void DIFLAGDBBEC(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CJGAFLKGLKL, ::System::Single DLJDBOIFHIH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PENFAPIGHHP_DIFLAGDBBEC_OFFSET))(this, CKPGOKHECCH, CJGAFLKGLKL, DLJDBOIFHIH);
	}

	::System::Void IDFNPEDFDDP(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CJGAFLKGLKL, ::System::Single DLJDBOIFHIH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PENFAPIGHHP_IDFNPEDFDDP_OFFSET))(this, CKPGOKHECCH, CJGAFLKGLKL, DLJDBOIFHIH);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENFAPIGHHP_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Boolean NCDBLEOLHGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PENFAPIGHHP_NCDBLEOLHGJ_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PENFAPIGHHP_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void DJHGBGAPHCI(::MoleMole::Battle::Entity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PENFAPIGHHP_DJHGBGAPHCI_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENFAPIGHHP_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void GBGHCFFEDAD(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PENFAPIGHHP_GBGHCFFEDAD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void JFNNBBBLJBB(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CJGAFLKGLKL, ::System::Single DLJDBOIFHIH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PENFAPIGHHP_JFNNBBBLJBB_OFFSET))(this, CKPGOKHECCH, CJGAFLKGLKL, DLJDBOIFHIH);
	}
};
