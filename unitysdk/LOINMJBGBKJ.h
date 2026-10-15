#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDALBFCHGNK;
namespace System { class String; }

#define LOINMJBGBKJ_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0xB7FF0A0)
#define LOINMJBGBKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FF2B0)
#define LOINMJBGBKJ_GET_RECOMMENDMAINAFFIXBONUS_OFFSET UNITYSDK_OFFSET(0xB7FF080)
#define LOINMJBGBKJ_GET_RELICSCORERESULTINFO_OFFSET UNITYSDK_OFFSET(0xB7FF060)
#define LOINMJBGBKJ_JNKMCJOEFEP_OFFSET UNITYSDK_OFFSET(0xB7FF130)
#define LOINMJBGBKJ_SET_RECOMMENDMAINAFFIXBONUS_OFFSET UNITYSDK_OFFSET(0xB7FF090)
#define LOINMJBGBKJ_SET_RELICSCORERESULTINFO_OFFSET UNITYSDK_OFFSET(0xB7FF070)

inline static constexpr unsigned int LOINMJBGBKJ_TypeDefinitionIndex = 74433;

	class LOINMJBGBKJ : public ::System::Object
	{
	public:
		::JDALBFCHGNK* _RelicScoreResultInfo_k__BackingField; // 0x10
		::System::Single _RecommendMainAffixBonus_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINMJBGBKJ_CTOR_OFFSET))(this);
		}

		::JDALBFCHGNK* get_RelicScoreResultInfo()
		{
			return ((::JDALBFCHGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINMJBGBKJ_GET_RELICSCORERESULTINFO_OFFSET))(this);
		}

		::System::Void set_RelicScoreResultInfo(::JDALBFCHGNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDALBFCHGNK*))((::PBYTE)hIl2Cpp + LOINMJBGBKJ_SET_RELICSCORERESULTINFO_OFFSET))(this, a1);
		}

		::System::Single get_RecommendMainAffixBonus()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINMJBGBKJ_GET_RECOMMENDMAINAFFIXBONUS_OFFSET))(this);
		}

		::System::Void set_RecommendMainAffixBonus(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOINMJBGBKJ_SET_RECOMMENDMAINAFFIXBONUS_OFFSET))(this, a1);
		}

		::System::Single CBOFFPEFEPP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINMJBGBKJ_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::String* JNKMCJOEFEP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINMJBGBKJ_JNKMCJOEFEP_OFFSET))(this);
		}

	};
