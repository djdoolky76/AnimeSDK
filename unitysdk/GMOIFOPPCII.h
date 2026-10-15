#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GMOIFOPPCII_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15ACF020)
#define GMOIFOPPCII_CCCGGMJNGLL_OFFSET UNITYSDK_OFFSET(0x15ACF0C0)
#define GMOIFOPPCII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15ACF010)
#define GMOIFOPPCII_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACF000)
#define GMOIFOPPCII_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x15ACF070)
#define GMOIFOPPCII_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x15ACF120)
#define GMOIFOPPCII_FLFAOLFFLAB_OFFSET UNITYSDK_OFFSET(0x15ACF180)
#define GMOIFOPPCII_NKFKGHLMMNK_OFFSET UNITYSDK_OFFSET(0x15ACF1D0)
#define GMOIFOPPCII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15ACF220)

inline static constexpr unsigned int GMOIFOPPCII_TypeDefinitionIndex = 59614;

	class GMOIFOPPCII : public ::System::Object
	{
	public:
		::System::Int64 IDBGAMAMDMJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOIFOPPCII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GMOIFOPPCII_CTOR_1_OFFSET))(this, a1);
		}

		::System::Int64 ACMKLFOMPFC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOIFOPPCII_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GMOIFOPPCII_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Boolean CCCGGMJNGLL(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GMOIFOPPCII_CCCGGMJNGLL_OFFSET))(this, a1);
		}

		::System::Int64 EGFCFCBHJJP(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GMOIFOPPCII_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Int64 FLFAOLFFLAB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOIFOPPCII_FLFAOLFFLAB_OFFSET))(this);
		}

		::System::Int64 NKFKGHLMMNK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOIFOPPCII_NKFKGHLMMNK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOIFOPPCII_TOSTRING_OFFSET))(this);
		}

	};
