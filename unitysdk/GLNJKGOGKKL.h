#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLNJKGOGKKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLNJKGOGKKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E499ED0)
#define GLNJKGOGKKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49A1D0)
#define GLNJKGOGKKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E499A50)
#define GLNJKGOGKKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4999C0)
#define GLNJKGOGKKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E499980)
#define GLNJKGOGKKL_EDCAIEEGNML_OFFSET UNITYSDK_OFFSET(0x1E499AA0)
#define GLNJKGOGKKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E499C30)
#define GLNJKGOGKKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E499AB0)
#define GLNJKGOGKKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E499D50)
#define GLNJKGOGKKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E499910)
#define GLNJKGOGKKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E49A010)
#define GLNJKGOGKKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E499F70)
#define GLNJKGOGKKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E499970)
#define GLNJKGOGKKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E499DC0)
#define GLNJKGOGKKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E499E20)

inline static constexpr unsigned int GLNJKGOGKKL_TypeDefinitionIndex = 32157;

	class GLNJKGOGKKL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* FLAMEAGFLPG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_LOLKEKDMBHC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)UnitySDK::FromName("", "GLNJKGOGKKL")->GetStaticField(0x1D450);
		}

		static ::Google::Protobuf::MessageParser_1<::GLNJKGOGKKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GLNJKGOGKKL*>**)UnitySDK::FromName("", "GLNJKGOGKKL")->GetStaticField(0x1D458);
		}

		// static const ::System::Object DCLKJKLKOGF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLNJKGOGKKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLNJKGOGKKL*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GLNJKGOGKKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GLNJKGOGKKL*>*(*)())((::PBYTE)hIl2Cpp + GLNJKGOGKKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLNJKGOGKKL* Clone()
		{
			return ((::GLNJKGOGKKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* EDCAIEEGNML()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_EDCAIEEGNML_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLNJKGOGKKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLNJKGOGKKL*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLNJKGOGKKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLNJKGOGKKL*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
