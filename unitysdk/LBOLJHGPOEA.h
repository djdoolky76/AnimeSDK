#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DACHBCNPGPJ.h"
#include "unitysdk/EBDKCHECNEH.h"
#include "unitysdk/GOPMDBBNGGK.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBOLJHGPOEA_DCBMECFJKEL_OFFSET UNITYSDK_OFFSET(0x359320)
#define LBOLJHGPOEA_EGJOJHGFFDD_OFFSET UNITYSDK_OFFSET(0x784A70)
#define LBOLJHGPOEA_FKCKFFCONPB_OFFSET UNITYSDK_OFFSET(0x784A80)
#define LBOLJHGPOEA_HNMOFADMIKD_OFFSET UNITYSDK_OFFSET(0x784A20)
#define LBOLJHGPOEA_LEMPFCCLOGF_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define LBOLJHGPOEA__CTOR_OFFSET UNITYSDK_OFFSET(0x784A00)

inline static constexpr unsigned int LBOLJHGPOEA_TypeDefinitionIndex = 89546;

struct alignas(8) LBOLJHGPOEA
{
	::System::Int32 IONKGACLBLK; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::EBDKCHECNEH>* BBGIJLDJIDF; // 0x18
	::System::Collections::Generic::List_1<::DACHBCNPGPJ>* NACPCFEHHPL; // 0x20
	::System::String* CEGKJNBPOJM; // 0x28
	::System::Boolean AEFACGMKAND; // 0x30

	::System::Void _ctor(::System::String* MJGHEOIHGFK, ::System::Collections::Generic::List_1<::EBDKCHECNEH>* JKMCDIDPLKK, ::System::Collections::Generic::List_1<::DACHBCNPGPJ>* PAGNBKMHJMP, ::System::Boolean KNFGKNMLPDM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::EBDKCHECNEH>*, ::System::Collections::Generic::List_1<::DACHBCNPGPJ>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LBOLJHGPOEA__CTOR_OFFSET))(this, MJGHEOIHGFK, JKMCDIDPLKK, PAGNBKMHJMP, KNFGKNMLPDM);
	}

	::System::Int32 DCBMECFJKEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOLJHGPOEA_DCBMECFJKEL_OFFSET))(this);
	}

	::System::Void HNMOFADMIKD(::System::Int32 GLDJGPELMJD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBOLJHGPOEA_HNMOFADMIKD_OFFSET))(this, GLDJGPELMJD);
	}

	::System::Void EGJOJHGFFDD(::GOPMDBBNGGK AELLPLBJELA, ::System::Int32 OFJNPAJADAI, ::System::Int32 BCGOKLPODNL, ::System::Int32 FMECMDJIFMN, ::System::Int32 IPPKPOJHIHP, ::System::Int32 IFJNBAGEMBG)
	{
		return ((::System::Void(*)(::PVOID, ::GOPMDBBNGGK, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LBOLJHGPOEA_EGJOJHGFFDD_OFFSET))(this, AELLPLBJELA, OFJNPAJADAI, BCGOKLPODNL, FMECMDJIFMN, IPPKPOJHIHP, IFJNBAGEMBG);
	}

	::System::UInt16 FKCKFFCONPB(::System::UInt16 BKHFPNIBNCB)
	{
		return ((::System::UInt16(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + LBOLJHGPOEA_FKCKFFCONPB_OFFSET))(this, BKHFPNIBNCB);
	}

	::System::Collections::Generic::List_1<::DACHBCNPGPJ>* LEMPFCCLOGF()
	{
		return ((::System::Collections::Generic::List_1<::DACHBCNPGPJ>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOLJHGPOEA_LEMPFCCLOGF_OFFSET))(this);
	}
};
