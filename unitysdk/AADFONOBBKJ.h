#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AADFONOBBKJ;
class KPLHHLEGGCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AADFONOBBKJ_AILACCLIFBD_OFFSET UNITYSDK_OFFSET(0x1DDB8240)
#define AADFONOBBKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB86B0)
#define AADFONOBBKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB8A50)
#define AADFONOBBKJ_CDKKINMBCIE_OFFSET UNITYSDK_OFFSET(0x1DDB8260)
#define AADFONOBBKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB8210)
#define AADFONOBBKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB8150)
#define AADFONOBBKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB8100)
#define AADFONOBBKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB83C0)
#define AADFONOBBKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB8270)
#define AADFONOBBKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB84E0)
#define AADFONOBBKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB80C0)
#define AADFONOBBKJ_LMHNIBJJPOD_OFFSET UNITYSDK_OFFSET(0x1DDB8250)
#define AADFONOBBKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB8880)
#define AADFONOBBKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB87E0)
#define AADFONOBBKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB80F0)
#define AADFONOBBKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB8550)
#define AADFONOBBKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB85B0)

inline static constexpr unsigned int AADFONOBBKJ_TypeDefinitionIndex = 28038;

	class AADFONOBBKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>* JCBODCAOPNP; // 0x18
		::System::UInt32 LFCMKNPJFAK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AADFONOBBKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AADFONOBBKJ*>**)UnitySDK::FromName("", "AADFONOBBKJ")->GetStaticField(0x36A30);
		}

		static ::Google::Protobuf::FieldCodec_1<::KPLHHLEGGCD*>** StaticGet_MHKCJBOBAEH()
		{
			return (::Google::Protobuf::FieldCodec_1<::KPLHHLEGGCD*>**)UnitySDK::FromName("", "AADFONOBBKJ")->GetStaticField(0x36A38);
		}

		// static const ::System::Object BFLHHJPMDGD; // 0x0
		// static const ::System::Object KMHAHCHEEBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AADFONOBBKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AADFONOBBKJ*))((::PBYTE)hIl2Cpp + AADFONOBBKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AADFONOBBKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AADFONOBBKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AADFONOBBKJ*>*(*)())((::PBYTE)hIl2Cpp + AADFONOBBKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AADFONOBBKJ* Clone()
		{
			return ((::AADFONOBBKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>* AILACCLIFBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ_AILACCLIFBD_OFFSET))(this);
		}

		::System::UInt32 LMHNIBJJPOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ_LMHNIBJJPOD_OFFSET))(this);
		}

		::System::Void CDKKINMBCIE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AADFONOBBKJ_CDKKINMBCIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AADFONOBBKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AADFONOBBKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AADFONOBBKJ*))((::PBYTE)hIl2Cpp + AADFONOBBKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AADFONOBBKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AADFONOBBKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AADFONOBBKJ*))((::PBYTE)hIl2Cpp + AADFONOBBKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AADFONOBBKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
