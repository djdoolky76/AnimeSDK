#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class AGJFDPBLDDF;
class FJOIOEPGKPP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFGPBFNCFJE_AECEFPNBILA_OFFSET UNITYSDK_OFFSET(0xF83DFB0)
#define IFGPBFNCFJE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF83DDD0)
#define IFGPBFNCFJE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xF83E040)
#define IFGPBFNCFJE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xF83E1D0)
#define IFGPBFNCFJE_MOJIFCMELGI_OFFSET UNITYSDK_OFFSET(0xF83D890)
#define IFGPBFNCFJE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF83D780)
#define IFGPBFNCFJE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF83DE20)
#define IFGPBFNCFJE__CTOR_OFFSET UNITYSDK_OFFSET(0xF83DEA0)

inline static constexpr unsigned int IFGPBFNCFJE_TypeDefinitionIndex = 66510;

class IFGPBFNCFJE : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x44; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::AGJFDPBLDDF*>* MDGDCBGMKMD; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FJOIOEPGKPP*>*>* FFGKLKAFLKG; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFGPBFNCFJE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGPBFNCFJE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGPBFNCFJE_ONCLEAN_OFFSET))(this);
	}

	::System::Void MOJIFCMELGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGPBFNCFJE_MOJIFCMELGI_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGPBFNCFJE_GETCLASSID_OFFSET))(this);
	}

	::System::Void AECEFPNBILA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGPBFNCFJE_AECEFPNBILA_OFFSET))(this);
	}

	static ::IFGPBFNCFJE* JFDOOELFAOA()
	{
		return ((::IFGPBFNCFJE*(*)())((::PBYTE)hIl2Cpp + IFGPBFNCFJE_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGPBFNCFJE_MEFBHFEOKGH_OFFSET))(this);
	}
};
