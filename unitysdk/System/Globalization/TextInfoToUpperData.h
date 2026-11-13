#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_TEXTINFOTOUPPERDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x19E0F2B0)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfoToUpperData_TypeDefinitionIndex = 788;

	class TextInfoToUpperData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_range_1e01_1ff3()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Globalization", "TextInfoToUpperData")->GetStaticField(0xE800);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_range_a723_a78c()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Globalization", "TextInfoToUpperData")->GetStaticField(0xE808);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_range_00e0_0586()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Globalization", "TextInfoToUpperData")->GetStaticField(0xE810);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_range_2c30_2ce3()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Globalization", "TextInfoToUpperData")->GetStaticField(0xE818);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_range_2d00_2d25()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Globalization", "TextInfoToUpperData")->GetStaticField(0xE820);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_range_a641_a697()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Globalization", "TextInfoToUpperData")->GetStaticField(0xE828);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_range_24d0_24e9()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Globalization", "TextInfoToUpperData")->GetStaticField(0xE830);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_range_2170_2184()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Globalization", "TextInfoToUpperData")->GetStaticField(0xE838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFOTOUPPERDATA_CCTOR_OFFSET))();
		}

	};
}
