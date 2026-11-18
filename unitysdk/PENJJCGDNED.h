#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPIKCNODKIO.h"
#include "unitysdk/PJBGHMDHHBM.h"

class EDAGJOHKKAA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PENJJCGDNED_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DE65740)
#define PENJJCGDNED_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DE65C50)
#define PENJJCGDNED_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DE65810)
#define PENJJCGDNED_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DE65BA0)
#define PENJJCGDNED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE65780)

inline static constexpr unsigned int PENJJCGDNED_TypeDefinitionIndex = 93363;

class PENJJCGDNED : public ::PJBGHMDHHBM
{
public:
	::GPIKCNODKIO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EDAGJOHKKAA*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENJJCGDNED__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENJJCGDNED_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PENJJCGDNED_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENJJCGDNED_PHOADBJGFBE_OFFSET))(this);
	}

	::EDAGJOHKKAA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EDAGJOHKKAA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PENJJCGDNED_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
