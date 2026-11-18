#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKMJGAAEECN;
class OOPBBMGPCLB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JODMGCIFBLC_BPIPHGMGKIB_OFFSET UNITYSDK_OFFSET(0x18A28800)
#define JODMGCIFBLC_JAOCJOCIJKA_OFFSET UNITYSDK_OFFSET(0x18A28680)
#define JODMGCIFBLC_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x18A287E0)
#define JODMGCIFBLC__CTOR_OFFSET UNITYSDK_OFFSET(0x18A28670)

inline static constexpr unsigned int JODMGCIFBLC_TypeDefinitionIndex = 81658;

class JODMGCIFBLC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MKMJGAAEECN*>* PGPCFNBPJPD; // 0x10
	::System::Int32 MMMHLENHKLN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODMGCIFBLC__CTOR_OFFSET))(this);
	}

	::OOPBBMGPCLB* JAOCJOCIJKA(::System::Int32 DABCKBIAKHA)
	{
		return ((::OOPBBMGPCLB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JODMGCIFBLC_JAOCJOCIJKA_OFFSET))(this, DABCKBIAKHA);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JODMGCIFBLC_NGFKBKCFPLK_OFFSET))(this);
	}

	::OOPBBMGPCLB* BPIPHGMGKIB(::System::String* HIAIKHDFCLN)
	{
		return ((::OOPBBMGPCLB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JODMGCIFBLC_BPIPHGMGKIB_OFFSET))(this, HIAIKHDFCLN);
	}
};
