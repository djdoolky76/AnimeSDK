#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CINHIBEMBNI.h"
#include "unitysdk/PJBGHMDHHBM.h"

class INGGGDACPKA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFDENDJJDJK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCDC8C0)
#define PFDENDJJDJK_FLAKECCPMHI_OFFSET UNITYSDK_OFFSET(0x1CCDCBC0)
#define PFDENDJJDJK_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1CCDC9E0)
#define PFDENDJJDJK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCDCDC0)
#define PFDENDJJDJK_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1CCC7950)
#define PFDENDJJDJK_OBBGEKEIBKK_OFFSET UNITYSDK_OFFSET(0x1CCDC900)
#define PFDENDJJDJK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCDD160)
#define PFDENDJJDJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC8A00)

inline static constexpr unsigned int PFDENDJJDJK_TypeDefinitionIndex = 94229;

class PFDENDJJDJK : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::INGGGDACPKA*>* JMINOGAOFIL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::INGGGDACPKA*>*>* OPCOIDLHPNM; // 0x20
	::CINHIBEMBNI DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDENDJJDJK__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDENDJJDJK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::INGGGDACPKA*>* OBBGEKEIBKK(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Collections::Generic::List_1<::INGGGDACPKA*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFDENDJJDJK_OBBGEKEIBKK_OFFSET))(this, KMMGKJPAOMF);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDENDJJDJK_MDGCOKBMLFG_OFFSET))(this);
	}

	::INGGGDACPKA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::INGGGDACPKA*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PFDENDJJDJK_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Collections::Generic::List_1<::INGGGDACPKA*>* FLAKECCPMHI(::INGGGDACPKA* FBGIBFPFCKN)
	{
		return ((::System::Collections::Generic::List_1<::INGGGDACPKA*>*(*)(::PVOID, ::INGGGDACPKA*))((::PBYTE)hIl2Cpp + PFDENDJJDJK_FLAKECCPMHI_OFFSET))(this, FBGIBFPFCKN);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFDENDJJDJK_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDENDJJDJK_PHOADBJGFBE_OFFSET))(this);
	}
};
