#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
namespace System { template <typename T> class Action_1; }

#define CMMPHPDJNPN_OJFLIKKLMIM_FAHIHKNGOJH_OFFSET UNITYSDK_OFFSET(0x147AE450)
#define CMMPHPDJNPN_OJFLIKKLMIM_HFCDJABEMKO_OFFSET UNITYSDK_OFFSET(0x147AE4A0)
#define CMMPHPDJNPN_OJFLIKKLMIM__CTOR_OFFSET UNITYSDK_OFFSET(0x147AE440)

inline static constexpr unsigned int CMMPHPDJNPN_OJFLIKKLMIM_TypeDefinitionIndex = 54471;

class CMMPHPDJNPN_OJFLIKKLMIM : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* DIENEAELFIL; // 0x10
	::System::Int32 JFDNLIIGCCG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMPHPDJNPN_OJFLIKKLMIM__CTOR_OFFSET))(this);
	}

	::System::Void FAHIHKNGOJH(::CFMGIKJLMBJ* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + CMMPHPDJNPN_OJFLIKKLMIM_FAHIHKNGOJH_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HFCDJABEMKO(::CFMGIKJLMBJ* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + CMMPHPDJNPN_OJFLIKKLMIM_HFCDJABEMKO_OFFSET))(this, PIIPCLCCOIG);
	}
};
