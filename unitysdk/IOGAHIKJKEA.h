#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNKDEKJDCHL.h"
#include "unitysdk/PJBGHMDHHBM.h"

class JPNNDHNNAII;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOGAHIKJKEA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E3B32A0)
#define IOGAHIKJKEA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E3B3760)
#define IOGAHIKJKEA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E3B3540)
#define IOGAHIKJKEA_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1E3B3370)
#define IOGAHIKJKEA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E3B3AF0)
#define IOGAHIKJKEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B32E0)

inline static constexpr unsigned int IOGAHIKJKEA_TypeDefinitionIndex = 94555;

class IOGAHIKJKEA : public ::PJBGHMDHHBM
{
public:
	::BNKDEKJDCHL DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JPNNDHNNAII*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGAHIKJKEA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGAHIKJKEA_BHLAEBMEOLO_OFFSET))(this);
	}

	::JPNNDHNNAII* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JPNNDHNNAII*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IOGAHIKJKEA_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGAHIKJKEA_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGAHIKJKEA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGAHIKJKEA_PHOADBJGFBE_OFFSET))(this);
	}
};
