#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHCNFGDIIEI.h"
#include "unitysdk/PGMPFAADIAG.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/System/ValueTuple_2.h"

class DJODFMOHJNG;
namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGDCIDIKMHJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D6A4960)
#define MGDCIDIKMHJ_FCHHKCANDIE_OFFSET UNITYSDK_OFFSET(0x1D6A5020)
#define MGDCIDIKMHJ_FEELJLPNDOE_OFFSET UNITYSDK_OFFSET(0x1D6A5B00)
#define MGDCIDIKMHJ_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D6A4C20)
#define MGDCIDIKMHJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D6A62C0)
#define MGDCIDIKMHJ_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D6A4E00)
#define MGDCIDIKMHJ_MLNPPBEAPNM_OFFSET UNITYSDK_OFFSET(0x1D6A5760)
#define MGDCIDIKMHJ_NKHJMJFEIFA_OFFSET UNITYSDK_OFFSET(0x1D6A5930)
#define MGDCIDIKMHJ_NLAPAKDFKFD_OFFSET UNITYSDK_OFFSET(0x1D6A5590)
#define MGDCIDIKMHJ_PFKCAFBICLG_OFFSET UNITYSDK_OFFSET(0x1D6A53C0)
#define MGDCIDIKMHJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D6A60B0)
#define MGDCIDIKMHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A49A0)

inline static constexpr unsigned int MGDCIDIKMHJ_TypeDefinitionIndex = 93869;

class MGDCIDIKMHJ : public ::PJBGHMDHHBM
{
public:
	// static const ::System::Int32 KJEINKKGMNJ = 0x5; // 0x0
	// static const ::System::Int32 GDEBOHGFOHP = 0x1; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* JEGEFGGJNPL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* OCCNJNALFBL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* GOANANGIGLF; // 0x28
	::BHCNFGDIIEI DHDJDGFNBOA; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DJODFMOHJNG*>* JMINOGAOFIL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::DJODFMOHJNG* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::DJODFMOHJNG*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::String* FCHHKCANDIE(::PGMPFAADIAG OLKHDAAGGAA, ::PGMPFAADIAG HODAIDNDKHD)
	{
		return ((::System::String*(*)(::PVOID, ::PGMPFAADIAG, ::PGMPFAADIAG))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_FCHHKCANDIE_OFFSET))(this, OLKHDAAGGAA, HODAIDNDKHD);
	}

	::System::Boolean PFKCAFBICLG(::PGMPFAADIAG OLKHDAAGGAA, ::PGMPFAADIAG HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::PGMPFAADIAG, ::PGMPFAADIAG))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_PFKCAFBICLG_OFFSET))(this, OLKHDAAGGAA, HODAIDNDKHD);
	}

	::System::Void FEELJLPNDOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_FEELJLPNDOE_OFFSET))(this);
	}

	::System::Boolean NLAPAKDFKFD(::PGMPFAADIAG OLKHDAAGGAA, ::PGMPFAADIAG HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::PGMPFAADIAG, ::PGMPFAADIAG))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_NLAPAKDFKFD_OFFSET))(this, OLKHDAAGGAA, HODAIDNDKHD);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Int32 MLNPPBEAPNM(::PGMPFAADIAG OLKHDAAGGAA, ::PGMPFAADIAG HODAIDNDKHD)
	{
		return ((::System::Int32(*)(::PVOID, ::PGMPFAADIAG, ::PGMPFAADIAG))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_MLNPPBEAPNM_OFFSET))(this, OLKHDAAGGAA, HODAIDNDKHD);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Int32 NKHJMJFEIFA(::PGMPFAADIAG OLKHDAAGGAA, ::PGMPFAADIAG HODAIDNDKHD)
	{
		return ((::System::Int32(*)(::PVOID, ::PGMPFAADIAG, ::PGMPFAADIAG))((::PBYTE)hIl2Cpp + MGDCIDIKMHJ_NKHJMJFEIFA_OFFSET))(this, OLKHDAAGGAA, HODAIDNDKHD);
	}
};
