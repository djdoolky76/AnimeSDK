#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_CCTOR_OFFSET UNITYSDK_OFFSET(0xE959A10)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_CTOR_1_OFFSET UNITYSDK_OFFSET(0xF93B0)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_EQUALS_OFFSET UNITYSDK_OFFSET(0xF93E0)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF9460)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_HLHHCMCHBOO_OFFSET UNITYSDK_OFFSET(0x1D30)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xE630)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF9470)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightInstanceID_TypeDefinitionIndex = 49148;

	struct alignas(4) LightInstanceID
	{
		::System::Int64 hash; // 0x10
		static ::ScenenLightManager::LightInstanceID* StaticGet_InvalidID()
		{
			return (::ScenenLightManager::LightInstanceID*)UnitySDK::FromName("ScenenLightManager", "LightInstanceID")->GetStaticField(0x22E0);
		}

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_EQUALS_OFFSET))(this, a1);
		}

		::System::Int64 HLHHCMCHBOO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_HLHHCMCHBOO_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_TOSTRING_OFFSET))(this);
		}

	};
}
