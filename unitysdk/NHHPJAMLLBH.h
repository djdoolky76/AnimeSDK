#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODDJFAMPFOB.h"
#include "unitysdk/PJBGHMDHHBM.h"

class EEMPHDILPCA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHHPJAMLLBH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E8282C0)
#define NHHPJAMLLBH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E8287D0)
#define NHHPJAMLLBH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E8283E0)
#define NHHPJAMLLBH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E8286E0)
#define NHHPJAMLLBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E828300)

inline static constexpr unsigned int NHHPJAMLLBH_TypeDefinitionIndex = 94377;

class NHHPJAMLLBH : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EEMPHDILPCA*>* JMINOGAOFIL; // 0x18
	::ODDJFAMPFOB DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::List_1<::EEMPHDILPCA*>* MNFENIJANCP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHPJAMLLBH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHPJAMLLBH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHHPJAMLLBH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHPJAMLLBH_PHOADBJGFBE_OFFSET))(this);
	}

	::EEMPHDILPCA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EEMPHDILPCA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHHPJAMLLBH_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
