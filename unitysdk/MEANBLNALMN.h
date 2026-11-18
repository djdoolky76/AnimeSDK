#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJLELMBPKEP.h"
#include "unitysdk/PJBGHMDHHBM.h"

class KGFBLIGAHMF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEANBLNALMN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E11F2C0)
#define MEANBLNALMN_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E116050)
#define MEANBLNALMN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E11F390)
#define MEANBLNALMN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E11F720)
#define MEANBLNALMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E11F300)

inline static constexpr unsigned int MEANBLNALMN_TypeDefinitionIndex = 94589;

class MEANBLNALMN : public ::PJBGHMDHHBM
{
public:
	::FJLELMBPKEP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KGFBLIGAHMF*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEANBLNALMN__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEANBLNALMN_BHLAEBMEOLO_OFFSET))(this);
	}

	::KGFBLIGAHMF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KGFBLIGAHMF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEANBLNALMN_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEANBLNALMN_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEANBLNALMN_PHOADBJGFBE_OFFSET))(this);
	}
};
