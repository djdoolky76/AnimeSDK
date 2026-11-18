#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLFFEDJCKJM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class HHDCEJNLLBG;
class IDLLHODJLIO;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKMKPBHHEOG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E8C3500)
#define OKMKPBHHEOG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E8B3F70)
#define OKMKPBHHEOG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E8C3930)
#define OKMKPBHHEOG_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E8C3710)
#define OKMKPBHHEOG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E8C3620)
#define OKMKPBHHEOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C3540)

inline static constexpr unsigned int OKMKPBHHEOG_TypeDefinitionIndex = 94702;

class OKMKPBHHEOG : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IDLLHODJLIO*>* JMINOGAOFIL; // 0x18
	::MLFFEDJCKJM DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::List_1<::HHDCEJNLLBG*>* MPKLADBLKCN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMKPBHHEOG__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMKPBHHEOG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMKPBHHEOG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMKPBHHEOG_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKMKPBHHEOG_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::IDLLHODJLIO* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::IDLLHODJLIO*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OKMKPBHHEOG_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
