#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFBFKKCMNFC.h"
#include "unitysdk/System/Object.h"
class MFLJIEBFMOF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HBPJOJJIPPM_BCILDEBJHNK_OFFSET UNITYSDK_OFFSET(0x15C14550)
#define HBPJOJJIPPM_BEMACBLELDJ_OFFSET UNITYSDK_OFFSET(0x15C14350)
#define HBPJOJJIPPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C13D30)
#define HBPJOJJIPPM_FOGOJEJGHIN_OFFSET UNITYSDK_OFFSET(0x15C13C90)
#define HBPJOJJIPPM_GBHBENOAJFG_OFFSET UNITYSDK_OFFSET(0x15C13DD0)
#define HBPJOJJIPPM_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x15C13C70)
#define HBPJOJJIPPM_JLOPMIJFCDG_OFFSET UNITYSDK_OFFSET(0x15C14070)
#define HBPJOJJIPPM_LNIMKEADCGB_OFFSET UNITYSDK_OFFSET(0x15C13CE0)
#define HBPJOJJIPPM_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x15C13C80)

	class HBPJOJJIPPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MFLJIEBFMOF*>* BNOFEDBMPNJ; // 0x10
		::System::Int32 NCDEGDCPCHN; // 0x18
		::System::Single CGEMFNECKAJ; // 0x1C
		::System::Boolean _IsEnded_k__BackingField; // 0x20
		::System::Boolean IGNMEMEMPLH; // 0x21
		::System::Byte _padding0[0x2];
		::HFBFKKCMNFC IGHAHBNLIJA; // 0x24
		::System::Int32 CLNKKOFGAAA; // 0x34
		::System::UInt32 IBEIJHJAELJ; // 0x38
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
