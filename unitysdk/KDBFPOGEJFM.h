#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBIJJJJKFCD.h"
#include "unitysdk/PJBGHMDHHBM.h"

class PJJDPJBAHPL;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDBFPOGEJFM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E76E220)
#define KDBFPOGEJFM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E76E2F0)
#define KDBFPOGEJFM_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1E76E730)
#define KDBFPOGEJFM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E76E680)
#define KDBFPOGEJFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E76E260)

inline static constexpr unsigned int KDBFPOGEJFM_TypeDefinitionIndex = 94481;

class KDBFPOGEJFM : public ::PJBGHMDHHBM
{
public:
	::LBIJJJJKFCD DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PJJDPJBAHPL*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBFPOGEJFM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBFPOGEJFM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDBFPOGEJFM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBFPOGEJFM_PHOADBJGFBE_OFFSET))(this);
	}

	::PJJDPJBAHPL* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PJJDPJBAHPL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDBFPOGEJFM_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}
};
