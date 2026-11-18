#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCEOGEIKLGJ.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/System/ValueTuple_2.h"

class OEMHJDFOHGF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define DECNGCAONIA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E2E5730)
#define DECNGCAONIA_IKIGIFOPOCA_OFFSET UNITYSDK_OFFSET(0x1E2E5EE0)
#define DECNGCAONIA_JPLICNMMMBH_OFFSET UNITYSDK_OFFSET(0x1E2E5DC0)
#define DECNGCAONIA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E2E5BE0)
#define DECNGCAONIA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E2E6230)
#define DECNGCAONIA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E2E59C0)
#define DECNGCAONIA_OFGOHJNLOEK_OFFSET UNITYSDK_OFFSET(0x1E2E5F90)
#define DECNGCAONIA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E2E6020)
#define DECNGCAONIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E5770)

inline static constexpr unsigned int DECNGCAONIA_TypeDefinitionIndex = 93793;

class DECNGCAONIA : public ::PJBGHMDHHBM
{
public:
	::JCEOGEIKLGJ DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GPEPDCDNGOG; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OEMHJDFOHGF*>* JMINOGAOFIL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* ENBIPBMMAMJ; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>*>* GCHOAFPNMPF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECNGCAONIA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECNGCAONIA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DECNGCAONIA_MDGCOKBMLFG_OFFSET))(this);
	}

	::OEMHJDFOHGF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::OEMHJDFOHGF*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DECNGCAONIA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>* JPLICNMMMBH(::System::Int32 EEIKCCDAFCI)
	{
		return ((::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DECNGCAONIA_JPLICNMMMBH_OFFSET))(this, EEIKCCDAFCI);
	}

	::OEMHJDFOHGF* IKIGIFOPOCA(::System::Int32 EEIKCCDAFCI, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::OEMHJDFOHGF*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DECNGCAONIA_IKIGIFOPOCA_OFFSET))(this, EEIKCCDAFCI, MOBNMDEDJIP);
	}

	::System::Int32 OFGOHJNLOEK(::System::Int32 EEIKCCDAFCI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DECNGCAONIA_OFGOHJNLOEK_OFFSET))(this, EEIKCCDAFCI);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECNGCAONIA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DECNGCAONIA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
