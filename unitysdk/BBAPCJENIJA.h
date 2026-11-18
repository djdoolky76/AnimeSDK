#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGPLBGBCID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/OverlapResult.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JOOHBDMHGCA;
class MMBKAKPDHIF;

#define BBAPCJENIJA_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x113CF700)
#define BBAPCJENIJA_DAPCBDMHKJA_OFFSET UNITYSDK_OFFSET(0x113CF410)
#define BBAPCJENIJA_MFBONMIAINE_OFFSET UNITYSDK_OFFSET(0x113CF2A0)
#define BBAPCJENIJA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x113CF370)
#define BBAPCJENIJA__CTOR_OFFSET UNITYSDK_OFFSET(0x113CF290)

inline static constexpr unsigned int BBAPCJENIJA_TypeDefinitionIndex = 40942;

class BBAPCJENIJA : public ::System::Object
{
public:
	::JOOHBDMHGCA* DCGAHNLABEF; // 0x10
	::MMBKAKPDHIF* CMNGILKHPAL; // 0x18
	::GEIHCPAOKKK* BIEHMPHDGCO; // 0x20
	::Il2CppArray<::UnityEngine::RaycastHit>* LIMGOODCOBC; // 0x28
	::Il2CppArray<::UnityEngine::OverlapResult>* CMMOKEECOJB; // 0x30
	::UnityEngine::Vector3 KBHFBLJPFJH; // 0x38
	::UnityEngine::Quaternion BFBELMDIAHI; // 0x44
	::System::Boolean NNGPHIEALJA; // 0x54
	::System::Boolean LJCHIOFDOEO; // 0x55
	::System::Boolean MNPLGOPOOBH; // 0x56
	::System::Boolean CGHFCFDDOIF; // 0x57
	::System::Int32 GDCEOHBJPGO; // 0x58
	::System::Boolean COIOPCBOPGP; // 0x5C
	::System::Boolean AEDFBNCJHEB; // 0x5D
	::System::Boolean LAIJHENIDDD; // 0x5E
	::System::Boolean NHACFMCDFDL; // 0x5F
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x60
	::ENGPLBGBCID EHHHMFKHNAI; // 0x6C
	::UnityEngine::RaycastHit IMKJCNKANFJ; // 0x98
	::UnityEngine::Vector3 BBCODANAFGI; // 0xCC
	::System::Boolean COFBAALFGCD; // 0xD8
	::System::Boolean EFKFMLBIIPC; // 0xD9
	::System::Boolean PIAPPCBICBE; // 0xDA
	::System::Boolean GEOHLIOPPOP; // 0xDB
	::UnityEngine::Vector3 CFJFMMGPGKE; // 0xDC
	::System::UInt32 BKLGNCBNEGM; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAPCJENIJA__CTOR_OFFSET))(this);
	}

	::System::Void MFBONMIAINE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAPCJENIJA_MFBONMIAINE_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAPCJENIJA_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::System::Void DAPCBDMHKJA(::BBAPCJENIJA* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::BBAPCJENIJA*))((::PBYTE)hIl2Cpp + BBAPCJENIJA_DAPCBDMHKJA_OFFSET))(OBKICKGGFEO);
	}

	static ::BBAPCJENIJA* BBPCBEEHALC()
	{
		return ((::BBAPCJENIJA*(*)())((::PBYTE)hIl2Cpp + BBAPCJENIJA_BBPCBEEHALC_OFFSET))();
	}
};
