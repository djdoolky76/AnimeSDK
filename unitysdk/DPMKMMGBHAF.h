#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class KHOLLIGHNLK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class EILBPOADDGK_1;

#define DPMKMMGBHAF_HMEEIPDNPLD_OFFSET UNITYSDK_OFFSET(0x1D97D4C0)
#define DPMKMMGBHAF_IAPJIACGKIJ_OFFSET UNITYSDK_OFFSET(0x1D97D430)
#define DPMKMMGBHAF_JJLCIPBKCKF_OFFSET UNITYSDK_OFFSET(0x1D97D6F0)
#define DPMKMMGBHAF_NANNBCKPGKB_OFFSET UNITYSDK_OFFSET(0x1D97D6B0)
#define DPMKMMGBHAF_PLHJCBKMPAI_OFFSET UNITYSDK_OFFSET(0x1D97D570)
#define DPMKMMGBHAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D97D380)
#define DPMKMMGBHAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D97D420)

inline static constexpr unsigned int DPMKMMGBHAF_TypeDefinitionIndex = 94343;

class DPMKMMGBHAF : public ::System::Object
{
public:
	// static const ::System::String* CCNOIJANGNG; // 0x0
	// static const ::System::Int32 MILHDCJMIOK = 0x7FFFFFFF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMKMMGBHAF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMKMMGBHAF__CTOR_OFFSET))(this);
	}

	static ::System::Int32 IAPJIACGKIJ()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DPMKMMGBHAF_IAPJIACGKIJ_OFFSET))();
	}

	static ::KHOLLIGHNLK* HMEEIPDNPLD(::System::String* HIAIKHDFCLN)
	{
		return ((::KHOLLIGHNLK*(*)(::System::String*))((::PBYTE)hIl2Cpp + DPMKMMGBHAF_HMEEIPDNPLD_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>>* PLHJCBKMPAI()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>>*(*)())((::PBYTE)hIl2Cpp + DPMKMMGBHAF_PLHJCBKMPAI_OFFSET))();
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* NANNBCKPGKB()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + DPMKMMGBHAF_NANNBCKPGKB_OFFSET))();
	}

	static ::System::Int32 JJLCIPBKCKF(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + DPMKMMGBHAF_JJLCIPBKCKF_OFFSET))(HIAIKHDFCLN);
	}
};
