#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMMMIGPFIOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMMMIGPFIOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A9190)
#define GMMMIGPFIOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A9450)
#define GMMMIGPFIOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A8D10)
#define GMMMIGPFIOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A8C80)
#define GMMMIGPFIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A8C30)
#define GMMMIGPFIOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A8E90)
#define GMMMIGPFIOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A8D70)
#define GMMMIGPFIOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A8F80)
#define GMMMIGPFIOH_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E4A8D60)
#define GMMMIGPFIOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A8BC0)
#define GMMMIGPFIOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A9280)
#define GMMMIGPFIOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A9230)
#define GMMMIGPFIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A8C20)
#define GMMMIGPFIOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A9080)
#define GMMMIGPFIOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A90E0)

inline static constexpr unsigned int GMMMIGPFIOH_TypeDefinitionIndex = 25224;

	class GMMMIGPFIOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GMMMIGPFIOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMMMIGPFIOH*>**)UnitySDK::FromName("", "GMMMIGPFIOH")->GetStaticField(0x1F230);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMMMIGPFIOH")->GetStaticField(0x1F238);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMMMIGPFIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMMMIGPFIOH*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMMMIGPFIOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMMMIGPFIOH*>*(*)())((::PBYTE)hIl2Cpp + GMMMIGPFIOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMMMIGPFIOH* Clone()
		{
			return ((::GMMMIGPFIOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMMMIGPFIOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMMMIGPFIOH*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMMMIGPFIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMMMIGPFIOH*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
