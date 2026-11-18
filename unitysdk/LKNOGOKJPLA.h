#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/PKBDKALMPEH.h"

class HIEOAHMBJAA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKNOGOKJPLA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DACB8F0)
#define LKNOGOKJPLA_CPJHEIBCLFI_OFFSET UNITYSDK_OFFSET(0x1DACB930)
#define LKNOGOKJPLA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DAB06C0)
#define LKNOGOKJPLA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DACB9E0)
#define LKNOGOKJPLA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DACBD00)
#define LKNOGOKJPLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB4040)

inline static constexpr unsigned int LKNOGOKJPLA_TypeDefinitionIndex = 94126;

class LKNOGOKJPLA : public ::PJBGHMDHHBM
{
public:
	// static const ::System::Int32 GBPBGEABIAF = 0x1; // 0x0
	// static const ::System::Int32 LODBOEKOFBE = 0x2; // 0x0
	// static const ::System::Int32 ODLHPJBBMAG = 0x3; // 0x0
	// static const ::System::Int32 JNEJJBHCCBG = 0x4; // 0x0
	// static const ::System::Int32 JAJLPNKBNAP = 0x5; // 0x0
	// static const ::System::Int32 FOOPANJBOLL = 0x6; // 0x0
	// static const ::System::Int32 DOADBADBJOG = 0x7; // 0x0
	// static const ::System::Int32 HBBCFDPAOAI = 0x9; // 0x0
	// static const ::System::Int32 MGFAADGHBKP = 0xB; // 0x0
	// static const ::System::Int32 FOBOJOLHPDP = 0xC; // 0x0
	// static const ::System::Int32 DCFMIEHFOOB = 0xD; // 0x0
	// static const ::System::Int32 OIAFLHMHAMI = 0xE; // 0x0
	::PKBDKALMPEH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HIEOAHMBJAA*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNOGOKJPLA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNOGOKJPLA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Int32 CPJHEIBCLFI(::System::Int32 MGMDLMBEDJF, ::System::Int32 ABHBKFJKINO, ::System::Int32 PDFEDOCLDHG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LKNOGOKJPLA_CPJHEIBCLFI_OFFSET))(this, MGMDLMBEDJF, ABHBKFJKINO, PDFEDOCLDHG);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKNOGOKJPLA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNOGOKJPLA_PHOADBJGFBE_OFFSET))(this);
	}

	::HIEOAHMBJAA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HIEOAHMBJAA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKNOGOKJPLA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
