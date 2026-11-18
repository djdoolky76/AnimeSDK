#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFONKMKLHNI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define OKAICNPAJLA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1DCF84E0)
#define OKAICNPAJLA_BEJLHALMHDL_OFFSET UNITYSDK_OFFSET(0x1DCF8150)
#define OKAICNPAJLA_BFBMIOODGEK_OFFSET UNITYSDK_OFFSET(0x1DCF8100)
#define OKAICNPAJLA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1DCF8DE0)
#define OKAICNPAJLA_FJNNHOGKICD_OFFSET UNITYSDK_OFFSET(0x1DCF8AD0)
#define OKAICNPAJLA_GFGALLLMGLK_OFFSET UNITYSDK_OFFSET(0x1DCF8BD0)
#define OKAICNPAJLA_KJILLOLNGOF_OFFSET UNITYSDK_OFFSET(0x1DCF8B70)
#define OKAICNPAJLA_LBHMJPMPPPI_OFFSET UNITYSDK_OFFSET(0x1DCF9020)
#define OKAICNPAJLA_LLNMIANAGEH_OFFSET UNITYSDK_OFFSET(0x1DCF88F0)
#define OKAICNPAJLA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1DCF8BC0)
#define OKAICNPAJLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF8310)

inline static constexpr unsigned int OKAICNPAJLA_TypeDefinitionIndex = 95128;

class OKAICNPAJLA : public ::BFONKMKLHNI
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x48; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* GJGHKENAOGM; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* FLCDJNBKMFK; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* JJHFJNDIPJL; // 0x80
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKAICNPAJLA__CTOR_OFFSET))(this);
	}

	::System::Int32 BFBMIOODGEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKAICNPAJLA_BFBMIOODGEK_OFFSET))(this);
	}

	::System::Void BEJLHALMHDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKAICNPAJLA_BEJLHALMHDL_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OKAICNPAJLA_BBOMJDBNHIC_OFFSET))(this, NJOAJLDJCCJ);
	}

	::System::Void LLNMIANAGEH(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKAICNPAJLA_LLNMIANAGEH_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void FJNNHOGKICD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKAICNPAJLA_FJNNHOGKICD_OFFSET))(this);
	}

	::OKAICNPAJLA* KJILLOLNGOF()
	{
		return ((::OKAICNPAJLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKAICNPAJLA_KJILLOLNGOF_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKAICNPAJLA_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GFGALLLMGLK(::System::String* HIAIKHDFCLN, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OKAICNPAJLA_GFGALLLMGLK_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void DGNAAPGKIPL(::OKAICNPAJLA* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::OKAICNPAJLA*))((::PBYTE)hIl2Cpp + OKAICNPAJLA_DGNAAPGKIPL_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void LBHMJPMPPPI(::System::String* HIAIKHDFCLN, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKAICNPAJLA_LBHMJPMPPPI_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
	}
};
