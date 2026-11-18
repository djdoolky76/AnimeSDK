#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEEBPCFEFBK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class LPEFBMOHGGF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHANBOKPFLO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DB7B1C0)
#define GHANBOKPFLO_FLAKECCPMHI_OFFSET UNITYSDK_OFFSET(0x1DB7B750)
#define GHANBOKPFLO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DB7B950)
#define GHANBOKPFLO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DB7B300)
#define GHANBOKPFLO_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB7BB30)
#define GHANBOKPFLO_OBBGEKEIBKK_OFFSET UNITYSDK_OFFSET(0x1DB7BD50)
#define GHANBOKPFLO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DB7B6A0)
#define GHANBOKPFLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7B200)

inline static constexpr unsigned int GHANBOKPFLO_TypeDefinitionIndex = 93424;

class GHANBOKPFLO : public ::PJBGHMDHHBM
{
public:
	::MEEBPCFEFBK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::LPEFBMOHGGF*>*>* OPCOIDLHPNM; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LPEFBMOHGGF*>* JMINOGAOFIL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHANBOKPFLO__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHANBOKPFLO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHANBOKPFLO_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::LPEFBMOHGGF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::LPEFBMOHGGF*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GHANBOKPFLO_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHANBOKPFLO_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHANBOKPFLO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::LPEFBMOHGGF*>* FLAKECCPMHI(::LPEFBMOHGGF* FBGIBFPFCKN)
	{
		return ((::System::Collections::Generic::List_1<::LPEFBMOHGGF*>*(*)(::PVOID, ::LPEFBMOHGGF*))((::PBYTE)hIl2Cpp + GHANBOKPFLO_FLAKECCPMHI_OFFSET))(this, FBGIBFPFCKN);
	}

	::System::Collections::Generic::List_1<::LPEFBMOHGGF*>* OBBGEKEIBKK(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Collections::Generic::List_1<::LPEFBMOHGGF*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHANBOKPFLO_OBBGEKEIBKK_OFFSET))(this, KMMGKJPAOMF);
	}
};
