#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGKCALPKMHK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CBANFAFHNEO;
class GMBDKAPICHA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NANFBGHMFIC_AKNHMJAICMD_OFFSET UNITYSDK_OFFSET(0x1D9C57C0)
#define NANFBGHMFIC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9C4A30)
#define NANFBGHMFIC_KGNEJKNNODJ_1_OFFSET UNITYSDK_OFFSET(0x1D9C5BF0)
#define NANFBGHMFIC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9C58F0)
#define NANFBGHMFIC_LJBGAGJMNIF_OFFSET UNITYSDK_OFFSET(0x1D9C5AC0)
#define NANFBGHMFIC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9C4BF0)
#define NANFBGHMFIC_MIDCMDILPAP_OFFSET UNITYSDK_OFFSET(0x1D9C5690)
#define NANFBGHMFIC_NOIANMDABAM_OFFSET UNITYSDK_OFFSET(0x1D9C5D70)
#define NANFBGHMFIC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9C5570)
#define NANFBGHMFIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C4A70)

inline static constexpr unsigned int NANFBGHMFIC_TypeDefinitionIndex = 93628;

class NANFBGHMFIC : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::CBANFAFHNEO*>*>* KKGMOFKBHMJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CBANFAFHNEO*>* JMINOGAOFIL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GMBDKAPICHA*>* GLFAOENCCBH; // 0x28
	::EGKCALPKMHK DHDJDGFNBOA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANFBGHMFIC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANFBGHMFIC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NANFBGHMFIC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Int32 MIDCMDILPAP(::System::Int32 FDKNBIGOLID, ::System::Int32 FMEKFDKKEDH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NANFBGHMFIC_MIDCMDILPAP_OFFSET))(this, FDKNBIGOLID, FMEKFDKKEDH);
	}

	::System::Int32 AKNHMJAICMD(::System::Int32 FDKNBIGOLID, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NANFBGHMFIC_AKNHMJAICMD_OFFSET))(this, FDKNBIGOLID, MOBNMDEDJIP);
	}

	::CBANFAFHNEO* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CBANFAFHNEO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NANFBGHMFIC_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Int32 LJBGAGJMNIF(::System::Int32 FDKNBIGOLID, ::System::Int32 FMEKFDKKEDH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NANFBGHMFIC_LJBGAGJMNIF_OFFSET))(this, FDKNBIGOLID, FMEKFDKKEDH);
	}

	::CBANFAFHNEO* KGNEJKNNODJ_1(::System::Int32 FDKNBIGOLID, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::CBANFAFHNEO*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NANFBGHMFIC_KGNEJKNNODJ_1_OFFSET))(this, FDKNBIGOLID, MOBNMDEDJIP);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANFBGHMFIC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean NOIANMDABAM(::System::Int32 FDKNBIGOLID, ::System::Int32 FMEKFDKKEDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NANFBGHMFIC_NOIANMDABAM_OFFSET))(this, FDKNBIGOLID, FMEKFDKKEDH);
	}
};
