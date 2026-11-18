#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJLHKINJFKN.h"
#include "unitysdk/PJBGHMDHHBM.h"

class IIBECEJFNKE;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPEJGCLGENA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D68E460)
#define BPEJGCLGENA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D68E530)
#define BPEJGCLGENA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D68E9E0)
#define BPEJGCLGENA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D68E7C0)
#define BPEJGCLGENA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D68E710)
#define BPEJGCLGENA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E4A0)

inline static constexpr unsigned int BPEJGCLGENA_TypeDefinitionIndex = 93714;

class BPEJGCLGENA : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IIBECEJFNKE*>* JMINOGAOFIL; // 0x18
	::AJLHKINJFKN DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEJGCLGENA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEJGCLGENA_BHLAEBMEOLO_OFFSET))(this);
	}

	::IIBECEJFNKE* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::IIBECEJFNKE*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BPEJGCLGENA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEJGCLGENA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEJGCLGENA_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPEJGCLGENA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
