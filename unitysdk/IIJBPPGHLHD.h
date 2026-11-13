#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverStyle.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define IIJBPPGHLHD_CTOR_OFFSET UNITYSDK_OFFSET(0x3E378D0)
#define IIJBPPGHLHD_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3E379F0)
#define IIJBPPGHLHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E379C0)
#define IIJBPPGHLHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E37950)
#define IIJBPPGHLHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E37940)
#define IIJBPPGHLHD_GET_AUTOCOOKSAMEDEVICEINTERVAL_OFFSET UNITYSDK_OFFSET(0xAECE00)
#define IIJBPPGHLHD_GET_AUTOCOOKSTEPINTERVAL_OFFSET UNITYSDK_OFFSET(0xFDD0D0)
#define IIJBPPGHLHD_GET_CHARGETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define IIJBPPGHLHD_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x7CEEB0)
#define IIJBPPGHLHD_GET_STYLE_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define IIJBPPGHLHD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x193D1330)
#define IIJBPPGHLHD_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x193D12F0)
#define IIJBPPGHLHD_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E37920)
#define IIJBPPGHLHD_SET_AUTOCOOKSAMEDEVICEINTERVAL_OFFSET UNITYSDK_OFFSET(0x3E37900)
#define IIJBPPGHLHD_SET_AUTOCOOKSTEPINTERVAL_OFFSET UNITYSDK_OFFSET(0x3DD03E0)
#define IIJBPPGHLHD_SET_CHARGETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define IIJBPPGHLHD_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x3DD0300)
#define IIJBPPGHLHD_SET_STYLE_OFFSET UNITYSDK_OFFSET(0x3D73BE0)
#define IIJBPPGHLHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E37910)

inline static constexpr unsigned int IIJBPPGHLHD_TypeDefinitionIndex = 79966;

	struct alignas(4) IIJBPPGHLHD
	{
		::System::Int32 _ChargeThreshold_k__BackingField; // 0x10
		::System::Single _Duration_k__BackingField; // 0x14
		::RPG::Client::LittleGame::ComicDessert::FeverStyle _Style_k__BackingField; // 0x18
		::System::Single _AutoCookStepInterval_k__BackingField; // 0x1C
		::System::Single _AutoCookSameDeviceInterval_k__BackingField; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::RPG::Client::LittleGame::ComicDessert::FeverStyle a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ComicDessert::FeverStyle, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_ChargeThreshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_GET_CHARGETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_ChargeThreshold(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_SET_CHARGETHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_SET_DURATION_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ComicDessert::FeverStyle get_Style()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::FeverStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_GET_STYLE_OFFSET))(this);
		}

		::System::Void set_Style(::RPG::Client::LittleGame::ComicDessert::FeverStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::FeverStyle))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_SET_STYLE_OFFSET))(this, a1);
		}

		::System::Single get_AutoCookStepInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_GET_AUTOCOOKSTEPINTERVAL_OFFSET))(this);
		}

		::System::Void set_AutoCookStepInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_SET_AUTOCOOKSTEPINTERVAL_OFFSET))(this, a1);
		}

		::System::Single get_AutoCookSameDeviceInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_GET_AUTOCOOKSAMEDEVICEINTERVAL_OFFSET))(this);
		}

		::System::Void set_AutoCookSameDeviceInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_SET_AUTOCOOKSAMEDEVICEINTERVAL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::IIJBPPGHLHD a1, ::IIJBPPGHLHD a2)
		{
			return ((::System::Boolean(*)(::IIJBPPGHLHD, ::IIJBPPGHLHD))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::IIJBPPGHLHD a1, ::IIJBPPGHLHD a2)
		{
			return ((::System::Boolean(*)(::IIJBPPGHLHD, ::IIJBPPGHLHD))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::IIJBPPGHLHD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIJBPPGHLHD))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::Int32 a1, ::System::Single a2, ::RPG::Client::LittleGame::ComicDessert::FeverStyle a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ComicDessert::FeverStyle, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIJBPPGHLHD_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
