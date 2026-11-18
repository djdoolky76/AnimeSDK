#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOMELEACMOJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPDKILGLJNF;

#define BPDKILGLJNF_KIJINPAJECC_GHHGCMDCHJC_OFFSET UNITYSDK_OFFSET(0x13987740)
#define BPDKILGLJNF_KIJINPAJECC_JEGGLCGEHLA_OFFSET UNITYSDK_OFFSET(0x13987660)
#define BPDKILGLJNF_KIJINPAJECC__CTOR_OFFSET UNITYSDK_OFFSET(0x13987650)

inline static constexpr unsigned int BPDKILGLJNF_KIJINPAJECC_TypeDefinitionIndex = 50585;

class BPDKILGLJNF_KIJINPAJECC : public ::System::Object
{
public:
	::BPDKILGLJNF* KLHPEBKNIFB; // 0x10
	::System::Single PNHKKCCOMLC; // 0x18
	::System::Single DBBLHHPKFCP; // 0x1C
	::UnityEngine::Vector3 LAJOAAHLADI; // 0x20
	::FOMELEACMOJ EOCLNLIDJAE; // 0x2C
	::FOMELEACMOJ GCMJNELIFIP; // 0x4C
	::UnityEngine::Vector3 DAAEHEHLLLD; // 0x6C
	::System::Single AEHGKOBGNPJ; // 0x78
	::System::Single FOMMLEBKHIL; // 0x7C
	::System::Single KPHFCIGFHGB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KIJINPAJECC__CTOR_OFFSET))(this);
	}

	::System::Void JEGGLCGEHLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KIJINPAJECC_JEGGLCGEHLA_OFFSET))(this);
	}

	::System::Void GHHGCMDCHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KIJINPAJECC_GHHGCMDCHJC_OFFSET))(this);
	}
};
