#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHFKDABLFJN_ACLCANBCAJH_OFFSET UNITYSDK_OFFSET(0x1A609F00)
#define LHFKDABLFJN_ANCFIDFMPKE_OFFSET UNITYSDK_OFFSET(0x1A609F30)
#define LHFKDABLFJN_DFEBFEPIDMC_OFFSET UNITYSDK_OFFSET(0x1A609F20)
#define LHFKDABLFJN_EEJLMHCIKHP_OFFSET UNITYSDK_OFFSET(0x1A609F40)
#define LHFKDABLFJN_KCBHHPOCMGI_OFFSET UNITYSDK_OFFSET(0x1A609F50)
#define LHFKDABLFJN_NPMJHHPNDKF_OFFSET UNITYSDK_OFFSET(0x1A609EF0)
#define LHFKDABLFJN_OPKAHHCDBDO_OFFSET UNITYSDK_OFFSET(0x1A609F10)
#define LHFKDABLFJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A609ED0)

inline static constexpr unsigned int LHFKDABLFJN_TypeDefinitionIndex = 85459;

class LHFKDABLFJN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _DDKALPAIIDA_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* _OIHODDFGBIH_k__BackingField; // 0x18
	::System::Boolean _BGMKMFHBKFD_k__BackingField; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 _AOHMFIMCDDF_k__BackingField; // 0x24

	::System::Void _ctor(::System::Int32 GDEDKJDIPCD, ::System::Collections::Generic::List_1<::System::Int32>* FDHHCBCPJDP, ::System::Collections::Generic::List_1<::System::Int32>* CBLFIMKGMOB, ::System::Boolean NGBBCNBOLDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHFKDABLFJN__CTOR_OFFSET))(this, GDEDKJDIPCD, FDHHCBCPJDP, CBLFIMKGMOB, NGBBCNBOLDL);
	}

	::System::Boolean NPMJHHPNDKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFKDABLFJN_NPMJHHPNDKF_OFFSET))(this);
	}

	::System::Boolean ACLCANBCAJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFKDABLFJN_ACLCANBCAJH_OFFSET))(this);
	}

	::System::Boolean OPKAHHCDBDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFKDABLFJN_OPKAHHCDBDO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DFEBFEPIDMC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFKDABLFJN_DFEBFEPIDMC_OFFSET))(this);
	}

	::System::Int32 ANCFIDFMPKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFKDABLFJN_ANCFIDFMPKE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EEJLMHCIKHP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFKDABLFJN_EEJLMHCIKHP_OFFSET))(this);
	}

	::System::Int32 KCBHHPOCMGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFKDABLFJN_KCBHHPOCMGI_OFFSET))(this);
	}
};
