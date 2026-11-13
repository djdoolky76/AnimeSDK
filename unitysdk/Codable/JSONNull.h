#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONTextMode.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
namespace Codable { class JSONNull; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONNULL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A67D490)
#define CODABLE_JSONNULL_CREATEORGET_OFFSET UNITYSDK_OFFSET(0x1A6770C0)
#define CODABLE_JSONNULL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A67D340)
#define CODABLE_JSONNULL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A67D3D0)
#define CODABLE_JSONNULL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A67D370)
#define CODABLE_JSONNULL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A67D450)
#define CODABLE_JSONNULL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1A67D3B0)
#define CODABLE_JSONNULL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1A67D360)
#define CODABLE_JSONNULL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A67D350)
#define CODABLE_JSONNULL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A67D390)
#define CODABLE_JSONNULL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1A67D3C0)
#define CODABLE_JSONNULL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A67D3A0)
#define CODABLE_JSONNULL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1A67D460)

namespace Codable
{
	inline static constexpr unsigned int JSONNull_TypeDefinitionIndex = 47112;

	class JSONNull : public ::Codable::JSONNode
	{
	public:
		static ::Codable::JSONNull** StaticGet_m_StaticInstance()
		{
			return (::Codable::JSONNull**)UnitySDK::FromName("Codable", "JSONNull")->GetStaticField(0x13B90);
		}

		static ::System::Boolean* StaticGet_reuseSameInstance()
		{
			return (::System::Boolean*)UnitySDK::FromName("Codable", "JSONNull")->GetStaticField(0x4650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_CCTOR_OFFSET))();
		}

		static ::Codable::JSONNull* CreateOrGet()
		{
			return ((::Codable::JSONNull*(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_CREATEORGET_OFFSET))();
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_ISNULL_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::Codable::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
