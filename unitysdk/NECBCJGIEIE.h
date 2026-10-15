#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_2.h"
class NECBCJGIEIE_ILKLIMGPMMP;
class PBGNKMMDBGD;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NECBCJGIEIE_AFMOOIOMNGK_OFFSET UNITYSDK_OFFSET(0x1C75B500)
#define NECBCJGIEIE_ALHFALBOLOE_OFFSET UNITYSDK_OFFSET(0x1C75A5E0)
#define NECBCJGIEIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C75A000)
#define NECBCJGIEIE_GAPIKLPFMLD_OFFSET UNITYSDK_OFFSET(0x1C75A460)
#define NECBCJGIEIE_MIMPOIOIOFM_OFFSET UNITYSDK_OFFSET(0x1C75AF60)
#define NECBCJGIEIE_OIPHGBIAPMI_OFFSET UNITYSDK_OFFSET(0x1C75A110)
#define NECBCJGIEIE_OKPFCDEKBCJ_OFFSET UNITYSDK_OFFSET(0x1C75B2C0)

inline static constexpr unsigned int NECBCJGIEIE_TypeDefinitionIndex = 37301;

	class NECBCJGIEIE : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedDictionary_2<::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>>*>* FEGAFKJJHCO; // 0x10
		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::Object*>* HJCOANHJMMO; // 0x18
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + NECBCJGIEIE_CTOR_OFFSET))(this, a1);
		}

		::System::Void OIPHGBIAPMI(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + NECBCJGIEIE_OIPHGBIAPMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GAPIKLPFMLD(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NECBCJGIEIE_GAPIKLPFMLD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ALHFALBOLOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECBCJGIEIE_ALHFALBOLOE_OFFSET))(this);
		}

		::System::Void OKPFCDEKBCJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NECBCJGIEIE_OKPFCDEKBCJ_OFFSET))(this, a1, a2, a3);
		}

		::NECBCJGIEIE_ILKLIMGPMMP* MIMPOIOIOFM(::System::UInt32 a1)
		{
			return ((::NECBCJGIEIE_ILKLIMGPMMP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NECBCJGIEIE_MIMPOIOIOFM_OFFSET))(this, a1);
		}

		::System::UInt64 AFMOOIOMNGK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NECBCJGIEIE_AFMOOIOMNGK_OFFSET))(this);
		}

	};
