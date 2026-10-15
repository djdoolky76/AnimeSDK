#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJOBHGFOGHP;
class MDKHMNKAECP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDKHMNKAECP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D82D0)
#define MDKHMNKAECP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D85D0)
#define MDKHMNKAECP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D7E50)
#define MDKHMNKAECP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D7DA0)
#define MDKHMNKAECP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7D50)
#define MDKHMNKAECP_DDJBLHGAGDF_OFFSET UNITYSDK_OFFSET(0x1E9D7EA0)
#define MDKHMNKAECP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D8030)
#define MDKHMNKAECP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D7EB0)
#define MDKHMNKAECP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D8150)
#define MDKHMNKAECP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D7CE0)
#define MDKHMNKAECP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D8410)
#define MDKHMNKAECP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D8370)
#define MDKHMNKAECP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7D40)
#define MDKHMNKAECP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D81C0)
#define MDKHMNKAECP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D8220)

inline static constexpr unsigned int MDKHMNKAECP_TypeDefinitionIndex = 29380;

	class MDKHMNKAECP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JJOBHGFOGHP*>* LGHDGPNJLLG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MDKHMNKAECP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MDKHMNKAECP*>**)UnitySDK::FromName("", "MDKHMNKAECP")->GetStaticField(0x4C8E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::JJOBHGFOGHP*>** StaticGet_PNMKGCHGFML()
		{
			return (::Google::Protobuf::FieldCodec_1<::JJOBHGFOGHP*>**)UnitySDK::FromName("", "MDKHMNKAECP")->GetStaticField(0x4C8E8);
		}

		// static const ::System::Object LFKIHOHCPJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDKHMNKAECP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDKHMNKAECP*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDKHMNKAECP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MDKHMNKAECP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MDKHMNKAECP*>*(*)())((::PBYTE)hIl2Cpp + MDKHMNKAECP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDKHMNKAECP* Clone()
		{
			return ((::MDKHMNKAECP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JJOBHGFOGHP*>* DDJBLHGAGDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JJOBHGFOGHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_DDJBLHGAGDF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDKHMNKAECP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDKHMNKAECP*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDKHMNKAECP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDKHMNKAECP*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
