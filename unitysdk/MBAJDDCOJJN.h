#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NGFCPNEIEDL;

#define MBAJDDCOJJN_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x15916DE0)
#define MBAJDDCOJJN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15916BF0)
#define MBAJDDCOJJN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15916D60)
#define MBAJDDCOJJN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15916CD0)
#define MBAJDDCOJJN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15916B70)
#define MBAJDDCOJJN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15916C40)
#define MBAJDDCOJJN__CTOR_OFFSET UNITYSDK_OFFSET(0x15916CC0)

inline static constexpr unsigned int MBAJDDCOJJN_TypeDefinitionIndex = 89611;

class MBAJDDCOJJN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x3; // 0x0
	::NGFCPNEIEDL* ALNGDKLDKKB; // 0x48
	::UnityEngine::Vector3 FMJGOHNLJNA; // 0x50
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x5C
	::UnityEngine::Quaternion BFBELMDIAHI; // 0x68
	::System::Boolean LLPMNBNOLGO; // 0x78
	::System::Boolean LKHOHMFFHOJ; // 0x79

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBAJDDCOJJN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAJDDCOJJN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAJDDCOJJN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAJDDCOJJN_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAJDDCOJJN_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MBAJDDCOJJN* JFDOOELFAOA()
	{
		return ((::MBAJDDCOJJN*(*)())((::PBYTE)hIl2Cpp + MBAJDDCOJJN_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::UnityEngine::Vector3 KLILFBFAELK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MBAJDDCOJJN_GALGFCPKMGC_OFFSET))(this, KLILFBFAELK, BFBELMDIAHI);
	}
};
