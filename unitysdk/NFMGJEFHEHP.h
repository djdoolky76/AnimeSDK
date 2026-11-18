#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBBDJHHDNCM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class NFKGIFMONLB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFMGJEFHEHP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E631BD0)
#define NFMGJEFHEHP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E631CA0)
#define NFMGJEFHEHP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E631F20)
#define NFMGJEFHEHP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E631E70)
#define NFMGJEFHEHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E631C10)

inline static constexpr unsigned int NFMGJEFHEHP_TypeDefinitionIndex = 94880;

class NFMGJEFHEHP : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NFKGIFMONLB*>* JMINOGAOFIL; // 0x18
	::CBBDJHHDNCM DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMGJEFHEHP__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMGJEFHEHP_BHLAEBMEOLO_OFFSET))(this);
	}

	::NFKGIFMONLB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NFKGIFMONLB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFMGJEFHEHP_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMGJEFHEHP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFMGJEFHEHP_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
