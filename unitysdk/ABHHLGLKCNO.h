#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAFIACIMMHE;
class DHHMOPOLKBF;
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define ABHHLGLKCNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F9200)
#define ABHHLGLKCNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0F9240)
#define ABHHLGLKCNO_EIFEDGJKDDA_OFFSET UNITYSDK_OFFSET(0xB0F9150)
#define ABHHLGLKCNO_GET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0xB0F91F0)
#define ABHHLGLKCNO_GET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0xB0F91E0)

inline static constexpr unsigned int ABHHLGLKCNO_TypeDefinitionIndex = 79571;

	class ABHHLGLKCNO : public ::System::Object
	{
	public:
		::AAFIACIMMHE* _DivisionLevelUpRule_k__BackingField; // 0x10
		::DHHMOPOLKBF* JOKBAPFCJFM; // 0x18
		::R3::ReadOnlyReactiveProperty_1<::System::Int32>* _CurrentPercent_k__BackingField; // 0x20
		::System::Void _ctor(::DHHMOPOLKBF* a1, ::AAFIACIMMHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHHMOPOLKBF*, ::AAFIACIMMHE*))((::PBYTE)hIl2Cpp + ABHHLGLKCNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 EIFEDGJKDDA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHHLGLKCNO_EIFEDGJKDDA_OFFSET))(this);
		}

		::AAFIACIMMHE* get_DivisionLevelUpRule()
		{
			return ((::AAFIACIMMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHHLGLKCNO_GET_DIVISIONLEVELUPRULE_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Int32>* get_CurrentPercent()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHHLGLKCNO_GET_CURRENTPERCENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHHLGLKCNO_DISPOSE_OFFSET))(this);
		}

	};
