#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJCGPFKLNGJ.h"
#include "unitysdk/PJBGHMDHHBM.h"

class BLCKJJEKABD;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EODBGLGHCBO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E763790)
#define EODBGLGHCBO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E763A30)
#define EODBGLGHCBO_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1E763860)
#define EODBGLGHCBO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E763DC0)
#define EODBGLGHCBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7637D0)

inline static constexpr unsigned int EODBGLGHCBO_TypeDefinitionIndex = 94614;

class EODBGLGHCBO : public ::PJBGHMDHHBM
{
public:
	::HJCGPFKLNGJ DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BLCKJJEKABD*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODBGLGHCBO__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODBGLGHCBO_BHLAEBMEOLO_OFFSET))(this);
	}

	::BLCKJJEKABD* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BLCKJJEKABD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EODBGLGHCBO_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EODBGLGHCBO_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODBGLGHCBO_PHOADBJGFBE_OFFSET))(this);
	}
};
