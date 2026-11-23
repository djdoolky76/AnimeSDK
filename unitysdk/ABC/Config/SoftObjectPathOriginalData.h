#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x266C630)
#define ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x266C760)
#define ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x266C690)
#define ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x266C7C0)
#define ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x21A2B90)

namespace ABC::Config
{
	inline static constexpr unsigned int SoftObjectPathOriginalData_TypeDefinitionIndex = 6292;

	struct alignas(8) SoftObjectPathOriginalData
	{
		::System::String* AssetPath; // 0x10
		::System::String* AssetName; // 0x18
		::System::String* TypeName; // 0x20
		::System::UInt64 AssetHash; // 0x28

		/*
		::System::Int32 CompareTo(::ABC::Config::SoftObjectPathOriginalData BEEE7A5A60941632)
		{
			return ((::System::Int32(*)(::PVOID, ::ABC::Config::SoftObjectPathOriginalData))((::PBYTE)hIl2Cpp + ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_COMPARETO_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::ABC::Config::SoftObjectPathOriginalData BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Config::SoftObjectPathOriginalData))((::PBYTE)hIl2Cpp + ABC_CONFIG_SOFTOBJECTPATHORIGINALDATA_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/
	};
}
