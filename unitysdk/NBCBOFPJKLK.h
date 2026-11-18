#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGPKBFCLMFC.h"
#include "unitysdk/PJBGHMDHHBM.h"

class ANLCALDLHOB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBCBOFPJKLK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E74B620)
#define NBCBOFPJKLK_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E74B7A0)
#define NBCBOFPJKLK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E74B970)
#define NBCBOFPJKLK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E74B6F0)
#define NBCBOFPJKLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E74B660)

inline static constexpr unsigned int NBCBOFPJKLK_TypeDefinitionIndex = 94724;

class NBCBOFPJKLK : public ::PJBGHMDHHBM
{
public:
	::MGPKBFCLMFC DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ANLCALDLHOB*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCBOFPJKLK__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCBOFPJKLK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCBOFPJKLK_PHOADBJGFBE_OFFSET))(this);
	}

	::ANLCALDLHOB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ANLCALDLHOB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBCBOFPJKLK_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBCBOFPJKLK_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
