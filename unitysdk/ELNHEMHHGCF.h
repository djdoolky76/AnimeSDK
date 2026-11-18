#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AINNLCBPBLO.h"
#include "unitysdk/PJBGHMDHHBM.h"

class AHBHAMGOMKA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELNHEMHHGCF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9AF8A0)
#define ELNHEMHHGCF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9AFDB0)
#define ELNHEMHHGCF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9AF970)
#define ELNHEMHHGCF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9AFD00)
#define ELNHEMHHGCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AF8E0)

inline static constexpr unsigned int ELNHEMHHGCF_TypeDefinitionIndex = 93682;

class ELNHEMHHGCF : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AHBHAMGOMKA*>* JMINOGAOFIL; // 0x18
	::AINNLCBPBLO DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNHEMHHGCF__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNHEMHHGCF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELNHEMHHGCF_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::AHBHAMGOMKA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AHBHAMGOMKA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELNHEMHHGCF_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNHEMHHGCF_PHOADBJGFBE_OFFSET))(this);
	}
};
