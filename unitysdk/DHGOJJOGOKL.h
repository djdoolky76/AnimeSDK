#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGOJJOGOKL;
class NGLOBFBCGBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHGOJJOGOKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4907C0)
#define DHGOJJOGOKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F490AA0)
#define DHGOJJOGOKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4903A0)
#define DHGOJJOGOKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F490310)
#define DHGOJJOGOKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4902D0)
#define DHGOJJOGOKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F490520)
#define DHGOJJOGOKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4903E0)
#define DHGOJJOGOKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F490640)
#define DHGOJJOGOKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F490290)
#define DHGOJJOGOKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F490900)
#define DHGOJJOGOKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F490860)
#define DHGOJJOGOKL_MNEOPLOFIJP_OFFSET UNITYSDK_OFFSET(0x1F4903D0)
#define DHGOJJOGOKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4902C0)
#define DHGOJJOGOKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4906B0)
#define DHGOJJOGOKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F490710)

inline static constexpr unsigned int DHGOJJOGOKL_TypeDefinitionIndex = 32228;

	class DHGOJJOGOKL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>* HFMEFEKDMLA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DHGOJJOGOKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DHGOJJOGOKL*>**)UnitySDK::FromName("", "DHGOJJOGOKL")->GetStaticField(0x302E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::NGLOBFBCGBB*>** StaticGet_OACCMGBAPJG()
		{
			return (::Google::Protobuf::FieldCodec_1<::NGLOBFBCGBB*>**)UnitySDK::FromName("", "DHGOJJOGOKL")->GetStaticField(0x302E8);
		}

		// static const ::System::Object BOOLNNFAGNK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHGOJJOGOKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHGOJJOGOKL*))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGOJJOGOKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DHGOJJOGOKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DHGOJJOGOKL*>*(*)())((::PBYTE)hIl2Cpp + DHGOJJOGOKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHGOJJOGOKL* Clone()
		{
			return ((::DHGOJJOGOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>* MNEOPLOFIJP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_MNEOPLOFIJP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHGOJJOGOKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHGOJJOGOKL*))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHGOJJOGOKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHGOJJOGOKL*))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHGOJJOGOKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
