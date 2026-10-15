#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJEGABKNHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDJEGABKNHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EA130)
#define BDJEGABKNHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EA480)
#define BDJEGABKNHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E9C10)
#define BDJEGABKNHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E9B50)
#define BDJEGABKNHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E9AE0)
#define BDJEGABKNHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E9DD0)
#define BDJEGABKNHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E9C80)
#define BDJEGABKNHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E9EE0)
#define BDJEGABKNHN_IPBHLODAAFA_OFFSET UNITYSDK_OFFSET(0x1E8E9C70)
#define BDJEGABKNHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E9A70)
#define BDJEGABKNHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EA260)
#define BDJEGABKNHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EA200)
#define BDJEGABKNHN_OJOIOJOAPPO_OFFSET UNITYSDK_OFFSET(0x1E8E9C60)
#define BDJEGABKNHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E9AD0)
#define BDJEGABKNHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E9FF0)
#define BDJEGABKNHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EA050)

inline static constexpr unsigned int BDJEGABKNHN_TypeDefinitionIndex = 28327;

	class BDJEGABKNHN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FNAPKPOJHFB; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IMIMICPCLNC; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CFDJMLIGEAF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BDJEGABKNHN")->GetStaticField(0x51F00);
		}

		static ::Google::Protobuf::MessageParser_1<::BDJEGABKNHN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDJEGABKNHN*>**)UnitySDK::FromName("", "BDJEGABKNHN")->GetStaticField(0x51F08);
		}

		static ::System::Object** StaticGet_LJOLGENMNNI()
		{
			return (::System::Object**)UnitySDK::FromName("", "BDJEGABKNHN")->GetStaticField(0x51F10);
		}

		// static const ::System::Object ALGBCHNCBEG; // 0x0
		// static const ::System::Object CDBMBHGJCAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDJEGABKNHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJEGABKNHN*))((::PBYTE)hIl2Cpp + BDJEGABKNHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJEGABKNHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDJEGABKNHN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDJEGABKNHN*>*(*)())((::PBYTE)hIl2Cpp + BDJEGABKNHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDJEGABKNHN* Clone()
		{
			return ((::BDJEGABKNHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OJOIOJOAPPO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN_OJOIOJOAPPO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IPBHLODAAFA()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN_IPBHLODAAFA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDJEGABKNHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDJEGABKNHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDJEGABKNHN*))((::PBYTE)hIl2Cpp + BDJEGABKNHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDJEGABKNHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDJEGABKNHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJEGABKNHN*))((::PBYTE)hIl2Cpp + BDJEGABKNHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDJEGABKNHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
