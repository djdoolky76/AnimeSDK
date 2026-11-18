#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IIGHBIOAKKH_AILDBBOLLDH_COJLANNJLOE_OFFSET UNITYSDK_OFFSET(0x16F6FB70)
#define IIGHBIOAKKH_AILDBBOLLDH_FBKPIHFIGJL_OFFSET UNITYSDK_OFFSET(0x16F6FA90)
#define IIGHBIOAKKH_AILDBBOLLDH_FHIHFDPCDGK_OFFSET UNITYSDK_OFFSET(0x16F6F0A0)
#define IIGHBIOAKKH_AILDBBOLLDH_GNLNMIDKGDF_OFFSET UNITYSDK_OFFSET(0x16F6F130)
#define IIGHBIOAKKH_AILDBBOLLDH_HCGFOCCOGBL_OFFSET UNITYSDK_OFFSET(0x16F6F6B0)
#define IIGHBIOAKKH_AILDBBOLLDH_ICJLLECOHFI_OFFSET UNITYSDK_OFFSET(0x16F6F780)
#define IIGHBIOAKKH_AILDBBOLLDH_IFBAMEILNLC_OFFSET UNITYSDK_OFFSET(0x16F6F2A0)
#define IIGHBIOAKKH_AILDBBOLLDH_ILPIEHMPLLD_OFFSET UNITYSDK_OFFSET(0x16F6FAD0)
#define IIGHBIOAKKH_AILDBBOLLDH_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x16F6F4D0)
#define IIGHBIOAKKH_AILDBBOLLDH_MPLKEPNAIBE_OFFSET UNITYSDK_OFFSET(0x16F6F200)
#define IIGHBIOAKKH_AILDBBOLLDH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6F090)

inline static constexpr unsigned int IIGHBIOAKKH_AILDBBOLLDH_TypeDefinitionIndex = 40023;

class IIGHBIOAKKH_AILDBBOLLDH : public ::System::Object
{
public:
	::System::Single BIHKLFBOKMI; // 0x10
	::System::Single GACGDBKHODC; // 0x14
	::System::Single DBGLGDNMLJI; // 0x18
	::System::Single GMJKNFKMBAE; // 0x1C
	::System::Single POEGFKEACEM; // 0x20
	::System::Single LJHAKAFFDDC; // 0x24
	::System::Single NCNJDMMLEBM; // 0x28
	::System::UInt32 AOGNNJLKHGL; // 0x2C
	::System::Boolean PBHENCFCBPD; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single BGBMDOPILOF; // 0x34
	::System::Single POBMKNPJPEL; // 0x38
	::System::Single JLBMLHDHCHF; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask FHIHFDPCDGK()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_FHIHFDPCDGK_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask GNLNMIDKGDF(::UnityEngine::Vector3 HODAIDNDKHD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_GNLNMIDKGDF_OFFSET))(this, HODAIDNDKHD);
	}

	::Cysharp::Threading::Tasks::UniTask MPLKEPNAIBE()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_MPLKEPNAIBE_OFFSET))(this);
	}

	::System::Void IFBAMEILNLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_IFBAMEILNLC_OFFSET))(this);
	}

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_LBCBPEJEHNB_OFFSET))(this);
	}

	::System::Void HCGFOCCOGBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_HCGFOCCOGBL_OFFSET))(this);
	}

	::System::Void ICJLLECOHFI(::UnityEngine::Vector3 CADDCOJJMKM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_ICJLLECOHFI_OFFSET))(this, CADDCOJJMKM);
	}

	::System::Void FBKPIHFIGJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_FBKPIHFIGJL_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ILPIEHMPLLD()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_ILPIEHMPLLD_OFFSET))(this);
	}

	::System::Void COJLANNJLOE(::UnityEngine::Vector3 CADDCOJJMKM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_COJLANNJLOE_OFFSET))(this, CADDCOJJMKM);
	}
};
