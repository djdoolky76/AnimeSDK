#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPHPCHPDJPB;
namespace System { class Action; }

#define IAOIIJLCAJM_IOCCHLBMJOA_EELKBJMGIMF_OFFSET UNITYSDK_OFFSET(0x1012C6A0)
#define IAOIIJLCAJM_IOCCHLBMJOA_KLJBOODBEJJ_OFFSET UNITYSDK_OFFSET(0x1012C6D0)
#define IAOIIJLCAJM_IOCCHLBMJOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1012C690)

inline static constexpr unsigned int IAOIIJLCAJM_IOCCHLBMJOA_TypeDefinitionIndex = 64890;

class IAOIIJLCAJM_IOCCHLBMJOA : public ::System::Object
{
public:
	::System::Action* DKGJKOPELMD; // 0x10
	::System::Action* KAAJNFNMFKH; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOIIJLCAJM_IOCCHLBMJOA__CTOR_OFFSET))(this);
	}

	::System::Void EELKBJMGIMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOIIJLCAJM_IOCCHLBMJOA_EELKBJMGIMF_OFFSET))(this);
	}

	::System::Action* KLJBOODBEJJ(::DPHPCHPDJPB* PIIPCLCCOIG)
	{
		return ((::System::Action*(*)(::PVOID, ::DPHPCHPDJPB*))((::PBYTE)hIl2Cpp + IAOIIJLCAJM_IOCCHLBMJOA_KLJBOODBEJJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
