#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MENCBJMOEML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MENCBJMOEML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E40B0)
#define MENCBJMOEML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4340)
#define MENCBJMOEML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E3CD0)
#define MENCBJMOEML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E3CA0)
#define MENCBJMOEML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E3C90)
#define MENCBJMOEML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E3E10)
#define MENCBJMOEML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E3D40)
#define MENCBJMOEML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E3F80)
#define MENCBJMOEML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E3C50)
#define MENCBJMOEML_LFFBJPAANPK_OFFSET UNITYSDK_OFFSET(0x1E9E3D30)
#define MENCBJMOEML_LPIJKBNFEEP_OFFSET UNITYSDK_OFFSET(0x1E9E3D20)
#define MENCBJMOEML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E41E0)
#define MENCBJMOEML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E41A0)
#define MENCBJMOEML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E3C80)
#define MENCBJMOEML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E3FC0)
#define MENCBJMOEML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E4020)

inline static constexpr unsigned int MENCBJMOEML_TypeDefinitionIndex = 26661;

	class MENCBJMOEML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 CMKPAGJOPMB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MENCBJMOEML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MENCBJMOEML*>**)UnitySDK::FromName("", "MENCBJMOEML")->GetStaticField(0x4E090);
		}

		// static const ::System::Object JKCCMACNANL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MENCBJMOEML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MENCBJMOEML*))((::PBYTE)hIl2Cpp + MENCBJMOEML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENCBJMOEML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MENCBJMOEML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MENCBJMOEML*>*(*)())((::PBYTE)hIl2Cpp + MENCBJMOEML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MENCBJMOEML* Clone()
		{
			return ((::MENCBJMOEML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_CLONE_OFFSET))(this);
		}

		::System::UInt64 LPIJKBNFEEP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_LPIJKBNFEEP_OFFSET))(this);
		}

		::System::Void LFFBJPAANPK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MENCBJMOEML_LFFBJPAANPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MENCBJMOEML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MENCBJMOEML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MENCBJMOEML*))((::PBYTE)hIl2Cpp + MENCBJMOEML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MENCBJMOEML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MENCBJMOEML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MENCBJMOEML*))((::PBYTE)hIl2Cpp + MENCBJMOEML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MENCBJMOEML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
