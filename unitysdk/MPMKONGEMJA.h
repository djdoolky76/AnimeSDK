#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCDHHOBKMKB.h"
#include "unitysdk/PJBGHMDHHBM.h"

class PFBHGJKBHCL;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPMKONGEMJA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E23FE20)
#define MPMKONGEMJA_EAIDIDHAPBK_OFFSET UNITYSDK_OFFSET(0x1E240330)
#define MPMKONGEMJA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E23FEF0)
#define MPMKONGEMJA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E240280)
#define MPMKONGEMJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23FE60)

inline static constexpr unsigned int MPMKONGEMJA_TypeDefinitionIndex = 93618;

class MPMKONGEMJA : public ::PJBGHMDHHBM
{
public:
	::JCDHHOBKMKB DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PFBHGJKBHCL*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMKONGEMJA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMKONGEMJA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPMKONGEMJA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMKONGEMJA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::PFBHGJKBHCL*>* EAIDIDHAPBK(::System::Int32 KJPNMJJONNO)
	{
		return ((::System::Collections::Generic::List_1<::PFBHGJKBHCL*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MPMKONGEMJA_EAIDIDHAPBK_OFFSET))(this, KJPNMJJONNO);
	}
};
