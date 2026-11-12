#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputRangeType.h"

#define INCONTROL_INPUTRANGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB872B0)
#define INCONTROL_INPUTRANGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E5B080)
#define INCONTROL_INPUTRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x3E5B070)
#define INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET UNITYSDK_OFFSET(0x1CB77710)
#define INCONTROL_INPUTRANGE_EXCLUDES_OFFSET UNITYSDK_OFFSET(0x3E5B150)
#define INCONTROL_INPUTRANGE_INCLUDES_OFFSET UNITYSDK_OFFSET(0x3E5B120)
#define INCONTROL_INPUTRANGE_REMAP_1_OFFSET UNITYSDK_OFFSET(0x1CB777E0)
#define INCONTROL_INPUTRANGE_REMAP_OFFSET UNITYSDK_OFFSET(0x1CB87230)

namespace InControl
{
	inline static constexpr unsigned int InputRange_TypeDefinitionIndex = 41801;

	struct alignas(4) InputRange
	{
		::System::Single Value0; // 0x10
		::System::Single Value1; // 0x14
		::InControl::InputRangeType Type; // 0x18
		static ::Il2CppArray<::InControl::InputRange>** StaticGet_typeToRange()
		{
			return (::Il2CppArray<::InControl::InputRange>**)UnitySDK::FromName("InControl", "InputRange")->GetStaticField(0x695B0);
		}

		static ::InControl::InputRange* StaticGet_OneToMinusOne()
		{
			return (::InControl::InputRange*)UnitySDK::FromName("InControl", "InputRange")->GetStaticField(0x151F0);
		}

		static ::InControl::InputRange* StaticGet_None()
		{
			return (::InControl::InputRange*)UnitySDK::FromName("InControl", "InputRange")->GetStaticField(0x151FC);
		}

		static ::InControl::InputRange* StaticGet_MinusOneToZero()
		{
			return (::InControl::InputRange*)UnitySDK::FromName("InControl", "InputRange")->GetStaticField(0x15208);
		}

		static ::InControl::InputRange* StaticGet_ZeroToOne()
		{
			return (::InControl::InputRange*)UnitySDK::FromName("InControl", "InputRange")->GetStaticField(0x15214);
		}

		static ::InControl::InputRange* StaticGet_MinusOneToOne()
		{
			return (::InControl::InputRange*)UnitySDK::FromName("InControl", "InputRange")->GetStaticField(0x15220);
		}

		static ::InControl::InputRange* StaticGet_ZeroToMinusOne()
		{
			return (::InControl::InputRange*)UnitySDK::FromName("InControl", "InputRange")->GetStaticField(0x1522C);
		}

		static ::InControl::InputRange* StaticGet_OneToZero()
		{
			return (::InControl::InputRange*)UnitySDK::FromName("InControl", "InputRange")->GetStaticField(0x15238);
		}

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::InControl::InputRangeType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::InControl::InputRangeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_CCTOR_OFFSET))();
		}

		::System::Boolean Includes(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_INCLUDES_OFFSET))(this, a1);
		}

		::System::Boolean Excludes(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_EXCLUDES_OFFSET))(this, a1);
		}

		static ::System::Boolean Excludes_1(::InControl::InputRangeType a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::InControl::InputRangeType, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET))(a1, a2);
		}

		/*
		static ::System::Single Remap(::System::Single a1, ::InControl::InputRange a2, ::InControl::InputRange a3)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::InputRange, ::InControl::InputRange))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_REMAP_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::Single Remap_1(::System::Single a1, ::InControl::InputRangeType a2, ::InControl::InputRangeType a3)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::InputRangeType, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_REMAP_1_OFFSET))(a1, a2, a3);
		}

	};
}
