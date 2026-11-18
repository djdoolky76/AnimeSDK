#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONGNECKGKKM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class FDDKNMFDEJM;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJHJGLMFNIN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DE594A0)
#define KJHJGLMFNIN_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DE59BD0)
#define KJHJGLMFNIN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DE59620)
#define KJHJGLMFNIN_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DE599B0)
#define KJHJGLMFNIN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DE59570)
#define KJHJGLMFNIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE594E0)

inline static constexpr unsigned int KJHJGLMFNIN_TypeDefinitionIndex = 93595;

class KJHJGLMFNIN : public ::PJBGHMDHHBM
{
public:
	::ONGNECKGKKM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FDDKNMFDEJM*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJGLMFNIN__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJGLMFNIN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJGLMFNIN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJHJGLMFNIN_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJGLMFNIN_MDGCOKBMLFG_OFFSET))(this);
	}

	::FDDKNMFDEJM* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::FDDKNMFDEJM*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KJHJGLMFNIN_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
