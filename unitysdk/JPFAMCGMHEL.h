#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define JPFAMCGMHEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BCA30)
#define JPFAMCGMHEL_GET_ACTUALVALUE_OFFSET UNITYSDK_OFFSET(0xB2BC9F0)
#define JPFAMCGMHEL_GET_EXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0xB2BCA10)
#define JPFAMCGMHEL_GET_INITIALVALUE_OFFSET UNITYSDK_OFFSET(0xB2BC9D0)
#define JPFAMCGMHEL_SET_ACTUALVALUE_OFFSET UNITYSDK_OFFSET(0xB2BCA00)
#define JPFAMCGMHEL_SET_EXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0xB2BCA20)
#define JPFAMCGMHEL_SET_INITIALVALUE_OFFSET UNITYSDK_OFFSET(0xB2BC9E0)

inline static constexpr unsigned int JPFAMCGMHEL_TypeDefinitionIndex = 77853;

	class JPFAMCGMHEL : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint _InitialValue_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _ActualValue_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _ExpectedValue_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPFAMCGMHEL_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_InitialValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFAMCGMHEL_GET_INITIALVALUE_OFFSET))(this);
		}

		::System::Void set_InitialValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPFAMCGMHEL_SET_INITIALVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ActualValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFAMCGMHEL_GET_ACTUALVALUE_OFFSET))(this);
		}

		::System::Void set_ActualValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPFAMCGMHEL_SET_ACTUALVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ExpectedValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFAMCGMHEL_GET_EXPECTEDVALUE_OFFSET))(this);
		}

		::System::Void set_ExpectedValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPFAMCGMHEL_SET_EXPECTEDVALUE_OFFSET))(this, a1);
		}

	};
