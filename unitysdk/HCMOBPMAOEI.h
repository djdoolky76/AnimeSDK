#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCMOBPMAOEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCMOBPMAOEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E543C50)
#define HCMOBPMAOEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E543EB0)
#define HCMOBPMAOEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E543850)
#define HCMOBPMAOEI_CLPBIKLGHPG_OFFSET UNITYSDK_OFFSET(0x1E543880)
#define HCMOBPMAOEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5437C0)
#define HCMOBPMAOEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E543770)
#define HCMOBPMAOEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E543980)
#define HCMOBPMAOEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E543890)
#define HCMOBPMAOEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E543A70)
#define HCMOBPMAOEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E543730)
#define HCMOBPMAOEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E543D10)
#define HCMOBPMAOEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E543CC0)
#define HCMOBPMAOEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E543760)
#define HCMOBPMAOEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E543B70)
#define HCMOBPMAOEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E543BD0)

	class HCMOBPMAOEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GMCBFKPHMCC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCMOBPMAOEI")->GetStaticField(0x30AB0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FHONEDIAILF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HCMOBPMAOEI")->GetStaticField(0x30AB8);
		}

		// static const ::System::Object NMEODHEIPGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCMOBPMAOEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCMOBPMAOEI*))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCMOBPMAOEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCMOBPMAOEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCMOBPMAOEI* Clone()
		{
			return ((::HCMOBPMAOEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLPBIKLGHPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_CLPBIKLGHPG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCMOBPMAOEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCMOBPMAOEI*))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCMOBPMAOEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCMOBPMAOEI*))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCMOBPMAOEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
