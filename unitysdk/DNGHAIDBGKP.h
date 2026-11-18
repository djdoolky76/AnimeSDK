#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DNGHAIDBGKP_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0xFDC7910)
#define DNGHAIDBGKP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFDC77B0)
#define DNGHAIDBGKP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xFDC7890)
#define DNGHAIDBGKP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xFDC79A0)
#define DNGHAIDBGKP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFDC7740)
#define DNGHAIDBGKP__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC7800)
#define DNGHAIDBGKP__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC7880)

inline static constexpr unsigned int DNGHAIDBGKP_TypeDefinitionIndex = 86910;

class DNGHAIDBGKP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x33; // 0x0
	::UnityEngine::Bounds HBGFHGEPCOM; // 0x48
	::UnityEngine::Quaternion BFBELMDIAHI; // 0x60
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNGHAIDBGKP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGHAIDBGKP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGHAIDBGKP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGHAIDBGKP_GETCLASSID_OFFSET))(this);
	}

	static ::DNGHAIDBGKP* JFDOOELFAOA()
	{
		return ((::DNGHAIDBGKP*(*)())((::PBYTE)hIl2Cpp + DNGHAIDBGKP_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::UnityEngine::Vector3 JMFFGJMMCAC, ::UnityEngine::Quaternion CKMIDJKEGFP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DNGHAIDBGKP_GALGFCPKMGC_OFFSET))(this, JMFFGJMMCAC, CKMIDJKEGFP);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGHAIDBGKP_MEFBHFEOKGH_OFFSET))(this);
	}
};
