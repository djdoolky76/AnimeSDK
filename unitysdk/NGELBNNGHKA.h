#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGBHOHIFHEM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class EJAKGNFCOCK;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGELBNNGHKA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E1D2570)
#define NGELBNNGHKA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E1D27D0)
#define NGELBNNGHKA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E1D29A0)
#define NGELBNNGHKA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E1D26B0)
#define NGELBNNGHKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D25B0)

inline static constexpr unsigned int NGELBNNGHKA_TypeDefinitionIndex = 93298;

class NGELBNNGHKA : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::EJAKGNFCOCK*>*>* BDHIAFHJBIB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EJAKGNFCOCK*>* JMINOGAOFIL; // 0x20
	::EGBHOHIFHEM DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGELBNNGHKA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGELBNNGHKA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGELBNNGHKA_PHOADBJGFBE_OFFSET))(this);
	}

	::EJAKGNFCOCK* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EJAKGNFCOCK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGELBNNGHKA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGELBNNGHKA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
