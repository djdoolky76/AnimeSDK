#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABHPKIFFLOC.h"
#include "unitysdk/PJBGHMDHHBM.h"

class DOBFMPFCIAG;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMNAIHFODDG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E621450)
#define DMNAIHFODDG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E6216F0)
#define DMNAIHFODDG_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1E621520)
#define DMNAIHFODDG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E621A80)
#define DMNAIHFODDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E621490)

inline static constexpr unsigned int DMNAIHFODDG_TypeDefinitionIndex = 94714;

class DMNAIHFODDG : public ::PJBGHMDHHBM
{
public:
	::ABHPKIFFLOC DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DOBFMPFCIAG*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNAIHFODDG__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNAIHFODDG_BHLAEBMEOLO_OFFSET))(this);
	}

	::DOBFMPFCIAG* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DOBFMPFCIAG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMNAIHFODDG_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMNAIHFODDG_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNAIHFODDG_PHOADBJGFBE_OFFSET))(this);
	}
};
