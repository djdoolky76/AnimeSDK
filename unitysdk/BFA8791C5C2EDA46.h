#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BFA8791C5C2EDA46_B569EE1D2CEE36B1_1_OFFSET UNITYSDK_OFFSET(0x290EA10)
#define BFA8791C5C2EDA46_B569EE1D2CEE36B1_OFFSET UNITYSDK_OFFSET(0x290E890)
#define BFA8791C5C2EDA46__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFA8791C5C2EDA46_TypeDefinitionIndex = 19697;

class BFA8791C5C2EDA46 : public ::System::Object
{
public:
	static ::System::Void B569EE1D2CEE36B1(::System::String*& EFF983A80A48BB2A)
	{
		return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + BFA8791C5C2EDA46_B569EE1D2CEE36B1_OFFSET))(EFF983A80A48BB2A);
	}

	static ::System::Void B569EE1D2CEE36B1_1(::System::String*& EFF983A80A48BB2A, ::System::Char BDE8D6A37D5B9F95, ::System::Char AC1D5B25E16545A6, ::System::Boolean B9FAEB7035079BF2)
	{
		return ((::System::Void(*)(::System::String*&, ::System::Char, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + BFA8791C5C2EDA46_B569EE1D2CEE36B1_1_OFFSET))(EFF983A80A48BB2A, BDE8D6A37D5B9F95, AC1D5B25E16545A6, B9FAEB7035079BF2);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFA8791C5C2EDA46__CTOR_OFFSET))(this);
	}
};
