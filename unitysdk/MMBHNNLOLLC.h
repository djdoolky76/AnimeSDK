#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIKEGFPGDFO.h"
#include "unitysdk/PJBGHMDHHBM.h"

class EBJIDAANOPC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMBHNNLOLLC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E8C21D0)
#define MMBHNNLOLLC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E8C22F0)
#define MMBHNNLOLLC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E8C25B0)
#define MMBHNNLOLLC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E8C24C0)
#define MMBHNNLOLLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C2210)

inline static constexpr unsigned int MMBHNNLOLLC_TypeDefinitionIndex = 94524;

class MMBHNNLOLLC : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBJIDAANOPC*>* JMINOGAOFIL; // 0x18
	::KIKEGFPGDFO DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::List_1<::EBJIDAANOPC*>* EFBECEHHGOO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBHNNLOLLC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBHNNLOLLC_BHLAEBMEOLO_OFFSET))(this);
	}

	::EBJIDAANOPC* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EBJIDAANOPC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMBHNNLOLLC_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBHNNLOLLC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMBHNNLOLLC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
