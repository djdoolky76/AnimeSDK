#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAKKGKHIEPB.h"
#include "unitysdk/PJBGHMDHHBM.h"

class DJPKJFABKMI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNBPAEAAMDL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DC8CAE0)
#define FNBPAEAAMDL_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DC8CFF0)
#define FNBPAEAAMDL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DC8CC60)
#define FNBPAEAAMDL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DC8CBB0)
#define FNBPAEAAMDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8CB20)

inline static constexpr unsigned int FNBPAEAAMDL_TypeDefinitionIndex = 94070;

class FNBPAEAAMDL : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DJPKJFABKMI*>* JMINOGAOFIL; // 0x18
	::HAKKGKHIEPB DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBPAEAAMDL__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBPAEAAMDL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBPAEAAMDL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNBPAEAAMDL_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::DJPKJFABKMI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DJPKJFABKMI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNBPAEAAMDL_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
