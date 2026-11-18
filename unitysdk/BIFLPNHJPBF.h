#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JECGNEEKEHJ.h"
#include "unitysdk/PJBGHMDHHBM.h"

class LMNPCNECHBL;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIFLPNHJPBF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E578F50)
#define BIFLPNHJPBF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E579460)
#define BIFLPNHJPBF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E579020)
#define BIFLPNHJPBF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E5793B0)
#define BIFLPNHJPBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E578F90)

inline static constexpr unsigned int BIFLPNHJPBF_TypeDefinitionIndex = 94750;

class BIFLPNHJPBF : public ::PJBGHMDHHBM
{
public:
	::JECGNEEKEHJ DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LMNPCNECHBL*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFLPNHJPBF__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFLPNHJPBF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIFLPNHJPBF_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::LMNPCNECHBL* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LMNPCNECHBL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BIFLPNHJPBF_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFLPNHJPBF_PHOADBJGFBE_OFFSET))(this);
	}
};
