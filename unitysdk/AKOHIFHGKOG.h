#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAFIACIMMHE;

#define AKOHIFHGKOG_CTOR_OFFSET UNITYSDK_OFFSET(0x163C5550)
#define AKOHIFHGKOG_GET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0x163C5530)
#define AKOHIFHGKOG_GET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x163C5510)
#define AKOHIFHGKOG_GET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0x163C54F0)
#define AKOHIFHGKOG_SET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0x163C5540)
#define AKOHIFHGKOG_SET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x163C5520)
#define AKOHIFHGKOG_SET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0x163C5500)

inline static constexpr unsigned int AKOHIFHGKOG_TypeDefinitionIndex = 82520;

	class AKOHIFHGKOG : public ::System::Object
	{
	public:
		::AAFIACIMMHE* _DivisionLevelUpRule_k__BackingField; // 0x10
		::System::Int32 _CurrentPercent_k__BackingField; // 0x18
		::System::Int32 _MaxPercent_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOHIFHGKOG_CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOHIFHGKOG_GET_MAXPERCENT_OFFSET))(this);
		}

		::System::Void set_MaxPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOHIFHGKOG_SET_MAXPERCENT_OFFSET))(this, a1);
		}

		::AAFIACIMMHE* get_DivisionLevelUpRule()
		{
			return ((::AAFIACIMMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOHIFHGKOG_GET_DIVISIONLEVELUPRULE_OFFSET))(this);
		}

		::System::Void set_DivisionLevelUpRule(::AAFIACIMMHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAFIACIMMHE*))((::PBYTE)hIl2Cpp + AKOHIFHGKOG_SET_DIVISIONLEVELUPRULE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOHIFHGKOG_GET_CURRENTPERCENT_OFFSET))(this);
		}

		::System::Void set_CurrentPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOHIFHGKOG_SET_CURRENTPERCENT_OFFSET))(this, a1);
		}

	};
