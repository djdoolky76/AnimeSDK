#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIPGBJIIHLK.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/System/ValueTuple_2.h"

class DCGDFOFHLLC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKPCJNBKCHD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9B6490)
#define HKPCJNBKCHD_GLIGDACFCEN_OFFSET UNITYSDK_OFFSET(0x1D9B6910)
#define HKPCJNBKCHD_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9B6EF0)
#define HKPCJNBKCHD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9B6B20)
#define HKPCJNBKCHD_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9B65D0)
#define HKPCJNBKCHD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9B67F0)
#define HKPCJNBKCHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B64D0)

inline static constexpr unsigned int HKPCJNBKCHD_TypeDefinitionIndex = 93842;

class HKPCJNBKCHD : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::DCGDFOFHLLC*>* FOHBDALMGOE; // 0x18
	::AIPGBJIIHLK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DCGDFOFHLLC*>* JMINOGAOFIL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPCJNBKCHD__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPCJNBKCHD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPCJNBKCHD_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPCJNBKCHD_PHOADBJGFBE_OFFSET))(this);
	}

	::DCGDFOFHLLC* GLIGDACFCEN(::System::Int32 INEMAOLPAFN, ::System::Int32 MOBNMDEDJIP, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::DCGDFOFHLLC*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HKPCJNBKCHD_GLIGDACFCEN_OFFSET))(this, INEMAOLPAFN, MOBNMDEDJIP, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKPCJNBKCHD_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::DCGDFOFHLLC* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::DCGDFOFHLLC*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HKPCJNBKCHD_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
