#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EILLEIIALNC.h"
#include "unitysdk/PJBGHMDHHBM.h"

class JGGEJFNKPCF;
class NIBBFMLLNCK;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POMJNKIOCFG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DA18AD0)
#define POMJNKIOCFG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DA18BF0)
#define POMJNKIOCFG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DA190E0)
#define POMJNKIOCFG_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DA18EC0)
#define POMJNKIOCFG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DA18DD0)
#define POMJNKIOCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18B10)

inline static constexpr unsigned int POMJNKIOCFG_TypeDefinitionIndex = 93986;

class POMJNKIOCFG : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::List_1<::NIBBFMLLNCK*>* MPKLADBLKCN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JGGEJFNKPCF*>* JMINOGAOFIL; // 0x20
	::EILLEIIALNC DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMJNKIOCFG__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMJNKIOCFG_BHLAEBMEOLO_OFFSET))(this);
	}

	::JGGEJFNKPCF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::JGGEJFNKPCF*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + POMJNKIOCFG_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMJNKIOCFG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POMJNKIOCFG_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POMJNKIOCFG_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
