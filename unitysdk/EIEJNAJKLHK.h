#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIEJNAJKLHK_BHJPKEBPGOB.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EIEJNAJKLHK_EEKHFAFMGPA_OFFSET UNITYSDK_OFFSET(0x14A9C490)
#define EIEJNAJKLHK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14A9BCD0)
#define EIEJNAJKLHK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14A9C3D0)
#define EIEJNAJKLHK_JKBNHPFHFHH_OFFSET UNITYSDK_OFFSET(0x14A9BFC0)
#define EIEJNAJKLHK_LDEFOFFAKHB_OFFSET UNITYSDK_OFFSET(0x14A9BE90)
#define EIEJNAJKLHK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14A9C340)
#define EIEJNAJKLHK_MFDIBMCKNAP_OFFSET UNITYSDK_OFFSET(0x14A9C0D0)
#define EIEJNAJKLHK_ONBBBOHOMGJ_OFFSET UNITYSDK_OFFSET(0x14A9C010)
#define EIEJNAJKLHK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14A9BBF0)
#define EIEJNAJKLHK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14A9BE00)
#define EIEJNAJKLHK__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A9BD20)
#define EIEJNAJKLHK__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9BDB0)

inline static constexpr unsigned int EIEJNAJKLHK_TypeDefinitionIndex = 64247;

class EIEJNAJKLHK : public ::MJHDNMKGLBJ
{
public:
	static ::System::Single* StaticGet_FIANLPCEBCP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(EIEJNAJKLHK_TypeDefinitionIndex)->GetStaticField(0x126A0);
	}
	// static const ::System::Single NCDNPLCLMOK; // 0x0
	// static const ::System::Single GAGLIKKKMNI; // 0x0
	// static const ::System::Int32 CBNDEFNNJGO = 0xA; // 0x0
	// static const ::System::Single IJPPBJDCHEO; // 0x0
	// static const ::System::Single DIDFAMCOKLD; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0xAD; // 0x0
	::System::Single BJLBOPLGOKG; // 0x48
	::UnityEngine::Vector3 KFMNIMMBCNN; // 0x4C
	::System::Single PDMDFKKEOLL; // 0x58
	::UnityEngine::Vector3 LFLJMBPFLDI; // 0x5C
	::UnityEngine::Vector3 OOGOACPMKMN; // 0x68
	::EIEJNAJKLHK_BHJPKEBPGOB MLGHDGOBHIB; // 0x74
	::System::Single IAPDECBJNKB; // 0x78
	::System::Single PINEIPABFBK; // 0x7C
	::UnityEngine::Vector3 DDAEEHLDEHK; // 0x80
	::System::Single LHGJDJAEJIF; // 0x8C
	::System::Int32 JCCHINCOHFE; // 0x90
	::System::Single FNHIKFBOODF; // 0x94
	::System::Boolean GIPECNMEEPB; // 0x98
	::System::Boolean MAODIGHLJNM; // 0x99

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIEJNAJKLHK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEJNAJKLHK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_GETCLASSID_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void LDEFOFFAKHB(::EIEJNAJKLHK_BHJPKEBPGOB JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::EIEJNAJKLHK_BHJPKEBPGOB))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_LDEFOFFAKHB_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Boolean JKBNHPFHFHH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_JKBNHPFHFHH_OFFSET))(this);
	}

	::System::Boolean ONBBBOHOMGJ(::System::Single HBEKKMCBGBK, ::UnityEngine::Vector3 BPGCACBCKOB, ::UnityEngine::Vector3& KKEEABBDNLN, ::UnityEngine::Vector3& EECMDPPHLAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_ONBBBOHOMGJ_OFFSET))(this, HBEKKMCBGBK, BPGCACBCKOB, KKEEABBDNLN, EECMDPPHLAM);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::EIEJNAJKLHK* JFDOOELFAOA()
	{
		return ((::EIEJNAJKLHK*(*)())((::PBYTE)hIl2Cpp + EIEJNAJKLHK_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean MFDIBMCKNAP(::System::Single HBEKKMCBGBK, ::UnityEngine::Vector3 BPGCACBCKOB, ::UnityEngine::Vector3& KKEEABBDNLN, ::UnityEngine::Vector3& EECMDPPHLAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_MFDIBMCKNAP_OFFSET))(this, HBEKKMCBGBK, BPGCACBCKOB, KKEEABBDNLN, EECMDPPHLAM);
	}

	::System::Void EEKHFAFMGPA(::UnityEngine::Vector3 LPDFCIHOJOJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIEJNAJKLHK_EEKHFAFMGPA_OFFSET))(this, LPDFCIHOJOJ);
	}
};
