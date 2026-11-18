#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMPILGDODEL.h"
#include "unitysdk/PJBGHMDHHBM.h"

class ANCCHDCILGM;
class KGBFLHNJHHN;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGINEIPGBAC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EFA3170)
#define IGINEIPGBAC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1EFA3680)
#define IGINEIPGBAC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EFA3240)
#define IGINEIPGBAC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EFA35D0)
#define IGINEIPGBAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA31B0)

inline static constexpr unsigned int IGINEIPGBAC_TypeDefinitionIndex = 28773;

class IGINEIPGBAC : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ANCCHDCILGM*>* JMINOGAOFIL; // 0x18
	::EMPILGDODEL DHDJDGFNBOA; // 0x20
	::KGBFLHNJHHN* DGLFBEGCIAN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGINEIPGBAC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGINEIPGBAC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGINEIPGBAC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::ANCCHDCILGM* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ANCCHDCILGM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IGINEIPGBAC_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGINEIPGBAC_PHOADBJGFBE_OFFSET))(this);
	}
};
