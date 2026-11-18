#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBLOFGBBHKD.h"
#include "unitysdk/PJBGHMDHHBM.h"

class JLHCLGDBMJN;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHPCHJJAKGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EA25B10)
#define NHPCHJJAKGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EA25DB0)
#define NHPCHJJAKGC_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1EA25BE0)
#define NHPCHJJAKGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EA26140)
#define NHPCHJJAKGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA25B50)

inline static constexpr unsigned int NHPCHJJAKGC_TypeDefinitionIndex = 94872;

class NHPCHJJAKGC : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JLHCLGDBMJN*>* JMINOGAOFIL; // 0x18
	::DBLOFGBBHKD DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPCHJJAKGC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPCHJJAKGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::JLHCLGDBMJN* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JLHCLGDBMJN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHPCHJJAKGC_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHPCHJJAKGC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPCHJJAKGC_PHOADBJGFBE_OFFSET))(this);
	}
};
