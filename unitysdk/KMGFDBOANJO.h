#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class KMGFDBOANJO;
namespace System { class Object; }

#define KMGFDBOANJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x18F743B0)
#define KMGFDBOANJO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x18F74340)
#define KMGFDBOANJO_CTOR_OFFSET UNITYSDK_OFFSET(0x17BABC70)
#define KMGFDBOANJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18F742A0)
#define KMGFDBOANJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x18F74210)
#define KMGFDBOANJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18F74300)
#define KMGFDBOANJO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x18F741D0)
#define KMGFDBOANJO_GET_ID_OFFSET UNITYSDK_OFFSET(0x17BABC80)
#define KMGFDBOANJO_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x18F741F0)
#define KMGFDBOANJO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17BABC90)
#define KMGFDBOANJO_SET_DESC_OFFSET UNITYSDK_OFFSET(0x18F741E0)
#define KMGFDBOANJO_SET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x18F74200)
#define KMGFDBOANJO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18F741C0)

inline static constexpr unsigned int KMGFDBOANJO_TypeDefinitionIndex = 83861;

	class KMGFDBOANJO : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Name_k__BackingField; // 0x10
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Boolean _IsDisplayed_k__BackingField; // 0x34
		static ::KMGFDBOANJO** StaticGet_IFDKFOGNOAN()
		{
			return (::KMGFDBOANJO**)UnitySDK::FromName("", "KMGFDBOANJO")->GetStaticField(0x10A30);
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
