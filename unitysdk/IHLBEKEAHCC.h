#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMIFDMBJEPD.h"
#include "unitysdk/PJBGHMDHHBM.h"

class AACOMHCCHKH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHLBEKEAHCC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EA18240)
#define IHLBEKEAHCC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1EA18310)
#define IHLBEKEAHCC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EA184E0)
#define IHLBEKEAHCC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EA18870)
#define IHLBEKEAHCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA18280)

inline static constexpr unsigned int IHLBEKEAHCC_TypeDefinitionIndex = 94573;

class IHLBEKEAHCC : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AACOMHCCHKH*>* JMINOGAOFIL; // 0x18
	::AMIFDMBJEPD DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLBEKEAHCC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLBEKEAHCC_BHLAEBMEOLO_OFFSET))(this);
	}

	::AACOMHCCHKH* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AACOMHCCHKH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHLBEKEAHCC_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHLBEKEAHCC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLBEKEAHCC_PHOADBJGFBE_OFFSET))(this);
	}
};
