#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEBKDAMIMAA.h"
#include "unitysdk/PJBGHMDHHBM.h"

class COCHLGHKJAG;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEKBBIKCKFI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E3AF880)
#define CEKBBIKCKFI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E3AFB20)
#define CEKBBIKCKFI_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1E3AF950)
#define CEKBBIKCKFI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E3AFEB0)
#define CEKBBIKCKFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AF8C0)

inline static constexpr unsigned int CEKBBIKCKFI_TypeDefinitionIndex = 94489;

class CEKBBIKCKFI : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::COCHLGHKJAG*>* JMINOGAOFIL; // 0x18
	::EEBKDAMIMAA DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKBBIKCKFI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKBBIKCKFI_BHLAEBMEOLO_OFFSET))(this);
	}

	::COCHLGHKJAG* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::COCHLGHKJAG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CEKBBIKCKFI_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEKBBIKCKFI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKBBIKCKFI_PHOADBJGFBE_OFFSET))(this);
	}
};
