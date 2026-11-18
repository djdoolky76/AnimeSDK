#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLJOEJMKPBJ.h"
#include "unitysdk/PJBGHMDHHBM.h"

class AINOBNMJNKB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEKJDGDAMFE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ED44C50)
#define DEKJDGDAMFE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1ED45380)
#define DEKJDGDAMFE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ED44DD0)
#define DEKJDGDAMFE_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1ED45160)
#define DEKJDGDAMFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ED44D20)
#define DEKJDGDAMFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED44C90)

inline static constexpr unsigned int DEKJDGDAMFE_TypeDefinitionIndex = 94581;

class DEKJDGDAMFE : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AINOBNMJNKB*>* JMINOGAOFIL; // 0x18
	::HLJOEJMKPBJ DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKJDGDAMFE__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKJDGDAMFE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKJDGDAMFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEKJDGDAMFE_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKJDGDAMFE_MDGCOKBMLFG_OFFSET))(this);
	}

	::AINOBNMJNKB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AINOBNMJNKB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEKJDGDAMFE_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
