#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAOMJJDOGHK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class FCMLNKHCHNA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJDLJKGIINI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E1C5A40)
#define GJDLJKGIINI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E1C5B10)
#define GJDLJKGIINI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E1C5DA0)
#define GJDLJKGIINI_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E1C6130)
#define GJDLJKGIINI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E1C5CF0)
#define GJDLJKGIINI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C5A80)

inline static constexpr unsigned int GJDLJKGIINI_TypeDefinitionIndex = 93467;

class GJDLJKGIINI : public ::PJBGHMDHHBM
{
public:
	::NAOMJJDOGHK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FCMLNKHCHNA*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDLJKGIINI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDLJKGIINI_BHLAEBMEOLO_OFFSET))(this);
	}

	::FCMLNKHCHNA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::FCMLNKHCHNA*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDLJKGIINI_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDLJKGIINI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJDLJKGIINI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDLJKGIINI_MDGCOKBMLFG_OFFSET))(this);
	}
};
