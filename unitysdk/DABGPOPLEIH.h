#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKPFCNPCACC.h"
#include "unitysdk/PJBGHMDHHBM.h"

class ONCKHKJGDAG;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DABGPOPLEIH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EEA8960)
#define DABGPOPLEIH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EEA8A30)
#define DABGPOPLEIH_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1EEA8E70)
#define DABGPOPLEIH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EEA8DC0)
#define DABGPOPLEIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA89A0)

inline static constexpr unsigned int DABGPOPLEIH_TypeDefinitionIndex = 94380;

class DABGPOPLEIH : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ONCKHKJGDAG*>* JMINOGAOFIL; // 0x18
	::CKPFCNPCACC DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABGPOPLEIH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABGPOPLEIH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DABGPOPLEIH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::ONCKHKJGDAG* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ONCKHKJGDAG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DABGPOPLEIH_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABGPOPLEIH_PHOADBJGFBE_OFFSET))(this);
	}
};
