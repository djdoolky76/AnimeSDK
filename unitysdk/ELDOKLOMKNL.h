#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ELDOKLOMKNL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15512400)
#define ELDOKLOMKNL_CCCGGMJNGLL_1_OFFSET UNITYSDK_OFFSET(0x15512530)
#define ELDOKLOMKNL_CCCGGMJNGLL_OFFSET UNITYSDK_OFFSET(0x155124E0)
#define ELDOKLOMKNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155123F0)
#define ELDOKLOMKNL_CTOR_OFFSET UNITYSDK_OFFSET(0x155123E0)
#define ELDOKLOMKNL_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x15512490)
#define ELDOKLOMKNL_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x15512590)
#define ELDOKLOMKNL_FLFAOLFFLAB_OFFSET UNITYSDK_OFFSET(0x155125E0)
#define ELDOKLOMKNL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15512440)
#define ELDOKLOMKNL_NKFKGHLMMNK_OFFSET UNITYSDK_OFFSET(0x15512630)
#define ELDOKLOMKNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15512680)

inline static constexpr unsigned int ELDOKLOMKNL_TypeDefinitionIndex = 59613;

	class ELDOKLOMKNL : public ::System::Object
	{
	public:
		::System::Int32 IDBGAMAMDMJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 ACMKLFOMPFC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Boolean CCCGGMJNGLL(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_CCCGGMJNGLL_OFFSET))(this, a1);
		}

		::System::Boolean CCCGGMJNGLL_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_CCCGGMJNGLL_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 EGFCFCBHJJP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Int32 FLFAOLFFLAB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_FLFAOLFFLAB_OFFSET))(this);
		}

		::System::Int32 NKFKGHLMMNK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_NKFKGHLMMNK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKLOMKNL_TOSTRING_OFFSET))(this);
		}

	};
