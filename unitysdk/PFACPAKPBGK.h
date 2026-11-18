#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLAKGDMMNNF.h"
#include "unitysdk/PJBGHMDHHBM.h"

class IMNHEMEHEIP;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFACPAKPBGK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E4E3560)
#define PFACPAKPBGK_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E4E3630)
#define PFACPAKPBGK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E4E3AE0)
#define PFACPAKPBGK_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E4E3810)
#define PFACPAKPBGK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E4E3A30)
#define PFACPAKPBGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E35A0)

inline static constexpr unsigned int PFACPAKPBGK_TypeDefinitionIndex = 94171;

class PFACPAKPBGK : public ::PJBGHMDHHBM
{
public:
	::OLAKGDMMNNF DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IMNHEMEHEIP*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACPAKPBGK__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACPAKPBGK_BHLAEBMEOLO_OFFSET))(this);
	}

	::IMNHEMEHEIP* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::IMNHEMEHEIP*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PFACPAKPBGK_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACPAKPBGK_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACPAKPBGK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFACPAKPBGK_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
