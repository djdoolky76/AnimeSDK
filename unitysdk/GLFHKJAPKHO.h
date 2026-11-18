#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BINNNFLGAAN.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CLAGGKKIIML;
class NewByteBuffer;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLFHKJAPKHO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EEACF30)
#define GLFHKJAPKHO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1EEAD850)
#define GLFHKJAPKHO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1EEAD680)
#define GLFHKJAPKHO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EEAD2D0)
#define GLFHKJAPKHO_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1EEAD0B0)
#define GLFHKJAPKHO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EEAD000)
#define GLFHKJAPKHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEACF70)

inline static constexpr unsigned int GLFHKJAPKHO_TypeDefinitionIndex = 94729;

class GLFHKJAPKHO : public ::PJBGHMDHHBM
{
public:
	::BINNNFLGAAN DHDJDGFNBOA; // 0x18
	::NewByteBuffer* HDFJGEOIOIO; // 0x30
	::Il2CppArray<::System::Byte>* BOGPCMIBLPL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CLAGGKKIIML*>* JMINOGAOFIL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFHKJAPKHO__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFHKJAPKHO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFHKJAPKHO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFHKJAPKHO_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLFHKJAPKHO_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::CLAGGKKIIML* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CLAGGKKIIML*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLFHKJAPKHO_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::GLFHKJAPKHO* DGNAAPGKIPL()
	{
		return ((::GLFHKJAPKHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFHKJAPKHO_DGNAAPGKIPL_OFFSET))(this);
	}
};
