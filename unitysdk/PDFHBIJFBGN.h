#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMDEDHLILMG.h"
#include "unitysdk/PJBGHMDHHBM.h"

class GPGKDEHMBMC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDFHBIJFBGN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1F62F850)
#define PDFHBIJFBGN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1F62FBA0)
#define PDFHBIJFBGN_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1F62F920)
#define PDFHBIJFBGN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F62FAF0)
#define PDFHBIJFBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F62F890)

inline static constexpr unsigned int PDFHBIJFBGN_TypeDefinitionIndex = 94490;

class PDFHBIJFBGN : public ::PJBGHMDHHBM
{
public:
	::OMDEDHLILMG DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GPGKDEHMBMC*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFHBIJFBGN__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFHBIJFBGN_BHLAEBMEOLO_OFFSET))(this);
	}

	::GPGKDEHMBMC* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GPGKDEHMBMC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDFHBIJFBGN_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFHBIJFBGN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDFHBIJFBGN_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
