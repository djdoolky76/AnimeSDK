#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONGKBHNLPEK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class NHCHOCELKJP;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLDCMBNCLJM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E579630)
#define BLDCMBNCLJM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E579980)
#define BLDCMBNCLJM_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1E579700)
#define BLDCMBNCLJM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E5798D0)
#define BLDCMBNCLJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E579670)

inline static constexpr unsigned int BLDCMBNCLJM_TypeDefinitionIndex = 94870;

class BLDCMBNCLJM : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NHCHOCELKJP*>* JMINOGAOFIL; // 0x18
	::ONGKBHNLPEK DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDCMBNCLJM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDCMBNCLJM_BHLAEBMEOLO_OFFSET))(this);
	}

	::NHCHOCELKJP* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NHCHOCELKJP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLDCMBNCLJM_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDCMBNCLJM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLDCMBNCLJM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
