#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBOPJAHGNOJ.h"
#include "unitysdk/PJBGHMDHHBM.h"

class HOEFIAIGAMJ;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNDIGLHMODF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E1C73A0)
#define HNDIGLHMODF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E1C78B0)
#define HNDIGLHMODF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E1C7520)
#define HNDIGLHMODF_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E1C7A90)
#define HNDIGLHMODF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E1C7470)
#define HNDIGLHMODF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C73E0)

inline static constexpr unsigned int HNDIGLHMODF_TypeDefinitionIndex = 93377;

class HNDIGLHMODF : public ::PJBGHMDHHBM
{
public:
	::IBOPJAHGNOJ DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HOEFIAIGAMJ*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDIGLHMODF__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDIGLHMODF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDIGLHMODF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNDIGLHMODF_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::HOEFIAIGAMJ* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::HOEFIAIGAMJ*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDIGLHMODF_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDIGLHMODF_MDGCOKBMLFG_OFFSET))(this);
	}
};
