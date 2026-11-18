#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEANDBKCDHA.h"
#include "unitysdk/PJBGHMDHHBM.h"

class FCNLFHGIINA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLIKIAPAIEM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DB93790)
#define PLIKIAPAIEM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DB94060)
#define PLIKIAPAIEM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DB938D0)
#define PLIKIAPAIEM_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB93E40)
#define PLIKIAPAIEM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DB93D90)
#define PLIKIAPAIEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB937D0)

inline static constexpr unsigned int PLIKIAPAIEM_TypeDefinitionIndex = 93401;

class PLIKIAPAIEM : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FCNLFHGIINA*>* JMINOGAOFIL; // 0x18
	::DEANDBKCDHA DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FCNLFHGIINA*>*>* NLDIGKEIHAO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIKIAPAIEM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIKIAPAIEM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLIKIAPAIEM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIKIAPAIEM_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIKIAPAIEM_PHOADBJGFBE_OFFSET))(this);
	}

	::FCNLFHGIINA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::FCNLFHGIINA*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PLIKIAPAIEM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
