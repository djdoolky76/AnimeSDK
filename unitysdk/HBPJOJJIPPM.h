#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFBFKKCMNFC.h"
#include "unitysdk/System/Object.h"
class MFLJIEBFMOF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HBPJOJJIPPM_BCILDEBJHNK_OFFSET UNITYSDK_OFFSET(0x16B56590)
#define HBPJOJJIPPM_BEMACBLELDJ_OFFSET UNITYSDK_OFFSET(0x16B563C0)
#define HBPJOJJIPPM_CTOR_OFFSET UNITYSDK_OFFSET(0x16B55E30)
#define HBPJOJJIPPM_FOGOJEJGHIN_OFFSET UNITYSDK_OFFSET(0x16B55D90)
#define HBPJOJJIPPM_GBHBENOAJFG_OFFSET UNITYSDK_OFFSET(0x16B55EA0)
#define HBPJOJJIPPM_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x16B55D70)
#define HBPJOJJIPPM_JLOPMIJFCDG_OFFSET UNITYSDK_OFFSET(0x16B56120)
#define HBPJOJJIPPM_LNIMKEADCGB_OFFSET UNITYSDK_OFFSET(0x16B55DE0)
#define HBPJOJJIPPM_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x16B55D80)

inline static constexpr unsigned int HBPJOJJIPPM_TypeDefinitionIndex = 70886;

	class HBPJOJJIPPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MFLJIEBFMOF*>* BNOFEDBMPNJ; // 0x10
		::System::Single CGEMFNECKAJ; // 0x18
		::System::UInt32 IBEIJHJAELJ; // 0x1C
		::System::Int32 CLNKKOFGAAA; // 0x20
		::System::Int32 NCDEGDCPCHN; // 0x24
		::HFBFKKCMNFC IGHAHBNLIJA; // 0x28
		::System::Boolean IGNMEMEMPLH; // 0x38
		::System::Boolean _IsEnded_k__BackingField; // 0x39
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::MFLJIEBFMOF*>* a1, ::HFBFKKCMNFC a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MFLJIEBFMOF*>*, ::HFBFKKCMNFC, ::System::Single))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_GET_ISENDED_OFFSET))(this);
		}

		::System::Void set_IsEnded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_SET_ISENDED_OFFSET))(this, a1);
		}

		::System::Boolean FOGOJEJGHIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_FOGOJEJGHIN_OFFSET))(this);
		}

		::System::Single LNIMKEADCGB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_LNIMKEADCGB_OFFSET))(this);
		}

		::MFLJIEBFMOF* JLOPMIJFCDG(::System::Single a1)
		{
			return ((::MFLJIEBFMOF*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_JLOPMIJFCDG_OFFSET))(this, a1);
		}

		::System::Void BEMACBLELDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_BEMACBLELDJ_OFFSET))(this);
		}

		::System::Void BCILDEBJHNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_BCILDEBJHNK_OFFSET))(this);
		}

		::System::Int32 GBHBENOAJFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPJOJJIPPM_GBHBENOAJFG_OFFSET))(this);
		}

	};
