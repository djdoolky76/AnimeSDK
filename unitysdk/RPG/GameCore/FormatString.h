#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FORMATSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x3E8DFE0)
#define RPG_GAMECORE_FORMATSTRING_DLDBLNNPHKE_1_OFFSET UNITYSDK_OFFSET(0x1E8F4A10)
#define RPG_GAMECORE_FORMATSTRING_DLDBLNNPHKE_2_OFFSET UNITYSDK_OFFSET(0x1E8F4A80)
#define RPG_GAMECORE_FORMATSTRING_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E8F49A0)
#define RPG_GAMECORE_FORMATSTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E74390)
#define RPG_GAMECORE_FORMATSTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3E8E000)
#define RPG_GAMECORE_FORMATSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E74390)
#define RPG_GAMECORE_FORMATSTRING_FEIIDFFOICL_1_OFFSET UNITYSDK_OFFSET(0x1E8F49E0)
#define RPG_GAMECORE_FORMATSTRING_FEIIDFFOICL_2_OFFSET UNITYSDK_OFFSET(0x1E8F4A50)
#define RPG_GAMECORE_FORMATSTRING_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E8F4970)
#define RPG_GAMECORE_FORMATSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E8E080)
#define RPG_GAMECORE_FORMATSTRING_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3E8DFC0)
#define RPG_GAMECORE_FORMATSTRING_GET_RAWSTRING_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_GAMECORE_FORMATSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormatString_TypeDefinitionIndex = 10880;

	struct alignas(8) FormatString
	{
		::System::String* _rawString; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_RawString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_GET_RAWSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_GET_ISNULL_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::RPG::GameCore::FormatString a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::FormatString a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormatString, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::FormatString a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormatString, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL_1(::RPG::GameCore::FormatString a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormatString, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_FEIIDFFOICL_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE_1(::RPG::GameCore::FormatString a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormatString, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_DLDBLNNPHKE_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL_2(::System::String* a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_FEIIDFFOICL_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE_2(::System::String* a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_DLDBLNNPHKE_2_OFFSET))(a1, a2);
		}
		*/

	};
}
