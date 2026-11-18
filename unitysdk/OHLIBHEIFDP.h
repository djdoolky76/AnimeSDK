#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAILMHKADEE.h"
#include "unitysdk/PJBGHMDHHBM.h"

class KFHBLDAFNOF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHLIBHEIFDP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DB91180)
#define OHLIBHEIFDP_JHHDNJLGFIM_OFFSET UNITYSDK_OFFSET(0x1DB91B60)
#define OHLIBHEIFDP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DB912C0)
#define OHLIBHEIFDP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DB915C0)
#define OHLIBHEIFDP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DB91490)
#define OHLIBHEIFDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB911C0)

inline static constexpr unsigned int OHLIBHEIFDP_TypeDefinitionIndex = 94242;

class OHLIBHEIFDP : public ::PJBGHMDHHBM
{
public:
	::HAILMHKADEE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KFHBLDAFNOF*>* JMINOGAOFIL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::KFHBLDAFNOF*>*>* EEJNIOKFNKJ; // 0x38
	::System::Int32 BMHHGLOICLI; // 0x40
	::System::Int32 DCNMBMDGDKL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLIBHEIFDP__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLIBHEIFDP_BHLAEBMEOLO_OFFSET))(this);
	}

	::KFHBLDAFNOF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KFHBLDAFNOF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHLIBHEIFDP_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLIBHEIFDP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHLIBHEIFDP_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Collections::Generic::List_1<::KFHBLDAFNOF*>* JHHDNJLGFIM(::System::Int32 MGMDLMBEDJF, ::System::Int32 BPAGBPAHNCI)
	{
		return ((::System::Collections::Generic::List_1<::KFHBLDAFNOF*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OHLIBHEIFDP_JHHDNJLGFIM_OFFSET))(this, MGMDLMBEDJF, BPAGBPAHNCI);
	}
};
