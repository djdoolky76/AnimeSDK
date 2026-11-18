#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define ONGAINBJDFM_AMDNCNDFGBO_OFFSET UNITYSDK_OFFSET(0x13A73C50)
#define ONGAINBJDFM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x13A73C10)
#define ONGAINBJDFM_GIALDDHFBLF_OFFSET UNITYSDK_OFFSET(0x13A735F0)
#define ONGAINBJDFM_ICCHCCCPNMD_OFFSET UNITYSDK_OFFSET(0x13A741C0)
#define ONGAINBJDFM_NCGCOFGDJNL_OFFSET UNITYSDK_OFFSET(0x13A73CE0)
#define ONGAINBJDFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13A73330)
#define ONGAINBJDFM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A73560)

inline static constexpr unsigned int ONGAINBJDFM_TypeDefinitionIndex = 42724;

class ONGAINBJDFM : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* LBMJGNAAJIE; // 0x10
	::Il2CppArray<::System::Boolean>* NIELKLDKJIA; // 0x18
	::Il2CppArray<::System::Boolean>* BKPECBLIJJI; // 0x20
	::Il2CppArray<::System::Boolean>* JIPHGEELMHE; // 0x28
	::System::String* PEDEIDPFIPK; // 0x30
	::System::Int32 PIOCIKMELLG; // 0x38
	::UnityEngine::Vector3 LIPFKPNJMGH; // 0x3C
	::System::Single MBOBGNNBJCL; // 0x48
	::System::Single NKAHIHHAPCP; // 0x4C
	::System::Boolean BDNFKDJDLKI; // 0x50
	::System::Boolean LELBOMLLJHN; // 0x51
	::System::Boolean KFECHBFGCPN; // 0x52
	::System::Byte NOKKOLKEDBG; // 0x53
	::System::Single HDIEAIGDMNC; // 0x54
	::System::Boolean BEGGDDCNPEP; // 0x58
	::System::Boolean NKJNPJDKKPN; // 0x59
	::System::Boolean BMDKKLDJIAH; // 0x5A
	::System::Boolean CKDGNMNCJKG; // 0x5B
	::UnityEngine::Vector3 JFIDDFKOJON; // 0x5C
	::UnityEngine::Vector2 KKHEMOFBCAG; // 0x68
	::UnityEngine::Vector3 FECCGOBJODH; // 0x70
	::System::Boolean FECKOHPLGMJ; // 0x7C
	::System::Boolean NBKIONKOEJA; // 0x7D
	::System::Boolean INAHNNMGHLB; // 0x7E
	::System::Boolean MNPHPGDEMAK; // 0x7F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGAINBJDFM__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGAINBJDFM_TOSTRING_OFFSET))(this);
	}

	::ONGAINBJDFM* GIALDDHFBLF(::ONGAINBJDFM* PMJNBIMDHHH)
	{
		return ((::ONGAINBJDFM*(*)(::PVOID, ::ONGAINBJDFM*))((::PBYTE)hIl2Cpp + ONGAINBJDFM_GIALDDHFBLF_OFFSET))(this, PMJNBIMDHHH);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGAINBJDFM_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void AMDNCNDFGBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGAINBJDFM_AMDNCNDFGBO_OFFSET))(this);
	}

	::System::Void NCGCOFGDJNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGAINBJDFM_NCGCOFGDJNL_OFFSET))(this);
	}

	::System::Void ICCHCCCPNMD(::System::Boolean MMNPJGBPGFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONGAINBJDFM_ICCHCCCPNMD_OFFSET))(this, MMNPJGBPGFJ);
	}
};
