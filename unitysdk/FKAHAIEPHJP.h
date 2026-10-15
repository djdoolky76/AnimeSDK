#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBPJOJJIPPM;
class MFLJIEBFMOF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKAHAIEPHJP_CIHOEIDLBLN_OFFSET UNITYSDK_OFFSET(0x157D7CC0)
#define FKAHAIEPHJP_CTOR_OFFSET UNITYSDK_OFFSET(0x157D8060)
#define FKAHAIEPHJP_JLOPMIJFCDG_OFFSET UNITYSDK_OFFSET(0x157D7D00)
#define FKAHAIEPHJP_NBNIHPHIOKJ_OFFSET UNITYSDK_OFFSET(0x157D7E60)
#define FKAHAIEPHJP_ONMKOKMPANB_OFFSET UNITYSDK_OFFSET(0x157D7A80)
#define FKAHAIEPHJP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x157D7FC0)

inline static constexpr unsigned int FKAHAIEPHJP_TypeDefinitionIndex = 68931;

	class FKAHAIEPHJP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HBPJOJJIPPM*>* AIOLHKLPDDO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKAHAIEPHJP_CTOR_OFFSET))(this);
		}

		::System::Void ONMKOKMPANB(::HBPJOJJIPPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBPJOJJIPPM*))((::PBYTE)hIl2Cpp + FKAHAIEPHJP_ONMKOKMPANB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::HBPJOJJIPPM*>* CIHOEIDLBLN()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::HBPJOJJIPPM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKAHAIEPHJP_CIHOEIDLBLN_OFFSET))(this);
		}

		::MFLJIEBFMOF* JLOPMIJFCDG(::System::Single a1, ::System::Single a2)
		{
			return ((::MFLJIEBFMOF*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FKAHAIEPHJP_JLOPMIJFCDG_OFFSET))(this, a1, a2);
		}

		::System::Void NBNIHPHIOKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKAHAIEPHJP_NBNIHPHIOKJ_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKAHAIEPHJP_PJPFIHFAHGO_OFFSET))(this);
		}

	};
