#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOODEJFJLCK.h"
#include "unitysdk/System/Object.h"

class PLABMFJGBAH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHLMDPLGLBP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1F013D80)
#define HHLMDPLGLBP_LKLBKCAOJNG_OFFSET UNITYSDK_OFFSET(0x1F014360)
#define HHLMDPLGLBP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1F013DC0)
#define HHLMDPLGLBP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F0142A0)
#define HHLMDPLGLBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0101C0)

inline static constexpr unsigned int HHLMDPLGLBP_TypeDefinitionIndex = 36090;

class HHLMDPLGLBP : public ::System::Object
{
public:
	// static const ::System::Int32 BLIJKIGHBHK = 0x192; // 0x0
	// static const ::System::Int32 MNHHHHHFNPF = 0x3E9; // 0x0
	// static const ::System::Int32 IMKPHCGNEGJ = 0x3ED; // 0x0
	// static const ::System::Int32 AIEJNKGPIHA = 0x3EE; // 0x0
	// static const ::System::Int32 EDBAGLPFHEM = 0x3EF; // 0x0
	::NOODEJFJLCK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PLABMFJGBAH*>* JMINOGAOFIL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLMDPLGLBP__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLMDPLGLBP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHLMDPLGLBP_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLMDPLGLBP_PHOADBJGFBE_OFFSET))(this);
	}

	::PLABMFJGBAH* LKLBKCAOJNG(::System::Int32 OBNIAHNMHPF)
	{
		return ((::PLABMFJGBAH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHLMDPLGLBP_LKLBKCAOJNG_OFFSET))(this, OBNIAHNMHPF);
	}
};
