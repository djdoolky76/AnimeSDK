#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHEKDBPKDFF_FOKCJPKLBAD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHEKDBPKDFF_EEDADLDOACC_DBDIINKDLDL_OFFSET UNITYSDK_OFFSET(0x1479C980)
#define CHEKDBPKDFF_EEDADLDOACC_EBBODBBBAMK_OFFSET UNITYSDK_OFFSET(0x1479CC50)
#define CHEKDBPKDFF_EEDADLDOACC__CTOR_OFFSET UNITYSDK_OFFSET(0x1479C970)

inline static constexpr unsigned int CHEKDBPKDFF_EEDADLDOACC_TypeDefinitionIndex = 42807;

class CHEKDBPKDFF_EEDADLDOACC : public ::System::Object
{
public:
	::CHEKDBPKDFF_FOKCJPKLBAD* FGBNBFHOKAA; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* EBKOMHOMGEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_EEDADLDOACC__CTOR_OFFSET))(this);
	}

	::System::Void DBDIINKDLDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_EEDADLDOACC_DBDIINKDLDL_OFFSET))(this);
	}

	::System::Void EBBODBBBAMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_EEDADLDOACC_EBBODBBBAMK_OFFSET))(this);
	}
};
