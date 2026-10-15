#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class KMGFDBOANJO;
namespace System { class Object; }

#define KMGFDBOANJO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB54E590)
#define KMGFDBOANJO_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB54E520)
#define KMGFDBOANJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB54E370)
#define KMGFDBOANJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB54E480)
#define KMGFDBOANJO_EQUALS_OFFSET UNITYSDK_OFFSET(0xB54E3F0)
#define KMGFDBOANJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB54E4E0)
#define KMGFDBOANJO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB54E3B0)
#define KMGFDBOANJO_GET_ID_OFFSET UNITYSDK_OFFSET(0xB54E380)
#define KMGFDBOANJO_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xB54E3D0)
#define KMGFDBOANJO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB54E390)
#define KMGFDBOANJO_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB54E3C0)
#define KMGFDBOANJO_SET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xB54E3E0)
#define KMGFDBOANJO_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB54E3A0)

inline static constexpr unsigned int KMGFDBOANJO_TypeDefinitionIndex = 81081;

	class KMGFDBOANJO : public ::System::Object
	{
	public:
		::System::Boolean _IsDisplayed_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _ID_k__BackingField; // 0x14
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::RPG::Client::TextID _Desc_k__BackingField; // 0x28
		static ::KMGFDBOANJO** StaticGet_IFDKFOGNOAN()
		{
			return (::KMGFDBOANJO**)UnitySDK::FromName("", "KMGFDBOANJO")->GetStaticField(0x16DB0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMGFDBOANJO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMGFDBOANJO_CCTOR_OFFSET))();
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGFDBOANJO_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGFDBOANJO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KMGFDBOANJO_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGFDBOANJO_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KMGFDBOANJO_SET_DESC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGFDBOANJO_GET_ISDISPLAYED_OFFSET))(this);
		}

		::System::Void set_IsDisplayed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMGFDBOANJO_SET_ISDISPLAYED_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMGFDBOANJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGFDBOANJO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::KMGFDBOANJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + KMGFDBOANJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::KMGFDBOANJO* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + KMGFDBOANJO_COMPARETO_OFFSET))(this, a1);
		}

	};
