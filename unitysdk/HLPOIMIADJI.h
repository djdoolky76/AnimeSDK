#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLPOIMIADJI;
class PDJFHJFADOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLPOIMIADJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C80B0)
#define HLPOIMIADJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8430)
#define HLPOIMIADJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C7BF0)
#define HLPOIMIADJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C7B30)
#define HLPOIMIADJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7AE0)
#define HLPOIMIADJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C7DA0)
#define HLPOIMIADJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C7C50)
#define HLPOIMIADJI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5C7C30)
#define HLPOIMIADJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C7ED0)
#define HLPOIMIADJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C7AA0)
#define HLPOIMIADJI_MALGACLGPFD_OFFSET UNITYSDK_OFFSET(0x1E5C7C40)
#define HLPOIMIADJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C8260)
#define HLPOIMIADJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C81C0)
#define HLPOIMIADJI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5C7C20)
#define HLPOIMIADJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7AD0)
#define HLPOIMIADJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C7F40)
#define HLPOIMIADJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C7FA0)

	class HLPOIMIADJI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PDJFHJFADOI*>* AOBCLNAMIHH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_OMAIBINBEKK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HLPOIMIADJI")->GetStaticField(0x48F40);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLPOIMIADJI")->GetStaticField(0x48F48);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CAPEEHFOEIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLPOIMIADJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLPOIMIADJI*))((::PBYTE)hIl2Cpp + HLPOIMIADJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLPOIMIADJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLPOIMIADJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLPOIMIADJI* Clone()
		{
			return ((::HLPOIMIADJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLPOIMIADJI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PDJFHJFADOI*>* MALGACLGPFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PDJFHJFADOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI_MALGACLGPFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLPOIMIADJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLPOIMIADJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLPOIMIADJI*))((::PBYTE)hIl2Cpp + HLPOIMIADJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLPOIMIADJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLPOIMIADJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLPOIMIADJI*))((::PBYTE)hIl2Cpp + HLPOIMIADJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLPOIMIADJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
