#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCJJIGLMAL_DDFFIJADFPH.h"
#include "unitysdk/CNCJJIGLMAL_HGLBEOEKJKI.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNCJJIGLMAL_ELKIKJBLNGN_OFFSET UNITYSDK_OFFSET(0x1971A600)
#define CNCJJIGLMAL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1971A2E0)
#define CNCJJIGLMAL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1971A450)
#define CNCJJIGLMAL_JHEALBCNDKP_OFFSET UNITYSDK_OFFSET(0x1971A660)
#define CNCJJIGLMAL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1971A570)
#define CNCJJIGLMAL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1971A230)
#define CNCJJIGLMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1971A330)
#define CNCJJIGLMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1971A3B0)

inline static constexpr unsigned int CNCJJIGLMAL_TypeDefinitionIndex = 45205;

class CNCJJIGLMAL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x7F; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* NJLBJAIEBAE; // 0x48
	::CNCJJIGLMAL_DDFFIJADFPH CCFPBMNMFLE; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNCJJIGLMAL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJJIGLMAL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_GETCLASSID_OFFSET))(this);
	}

	static ::CNCJJIGLMAL* JFDOOELFAOA()
	{
		return ((::CNCJJIGLMAL*(*)())((::PBYTE)hIl2Cpp + CNCJJIGLMAL_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void ELKIKJBLNGN(::CNCJJIGLMAL_DDFFIJADFPH PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::CNCJJIGLMAL_DDFFIJADFPH))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_ELKIKJBLNGN_OFFSET))(this, PHHDHIBOCKA);
	}

	::CNCJJIGLMAL_DDFFIJADFPH JHEALBCNDKP(::System::Single CBPBJOAADLH, ::CNCJJIGLMAL_HGLBEOEKJKI NNFHLPGKOGI, ::System::Boolean CGBJGCAJNGJ, ::System::Action_2<::CNCJJIGLMAL*, ::System::Object*>* LHIKCHDMIBL)
	{
		return ((::CNCJJIGLMAL_DDFFIJADFPH(*)(::PVOID, ::System::Single, ::CNCJJIGLMAL_HGLBEOEKJKI, ::System::Boolean, ::System::Action_2<::CNCJJIGLMAL*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_JHEALBCNDKP_OFFSET))(this, CBPBJOAADLH, NNFHLPGKOGI, CGBJGCAJNGJ, LHIKCHDMIBL);
	}
};
