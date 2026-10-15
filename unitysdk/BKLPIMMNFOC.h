#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKLPIMMNFOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKLPIMMNFOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2D8E0)
#define BKLPIMMNFOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2DC10)
#define BKLPIMMNFOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2D3E0)
#define BKLPIMMNFOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2D350)
#define BKLPIMMNFOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2D300)
#define BKLPIMMNFOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2D590)
#define BKLPIMMNFOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2D460)
#define BKLPIMMNFOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2D680)
#define BKLPIMMNFOC_ILCPEEHNPGF_OFFSET UNITYSDK_OFFSET(0x1DF2D450)
#define BKLPIMMNFOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2D290)
#define BKLPIMMNFOC_KCFFENAPECL_OFFSET UNITYSDK_OFFSET(0x1DF2D440)
#define BKLPIMMNFOC_MAGAPPDNDDK_OFFSET UNITYSDK_OFFSET(0x1DF2D430)
#define BKLPIMMNFOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2DA40)
#define BKLPIMMNFOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2D9F0)
#define BKLPIMMNFOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2D2F0)
#define BKLPIMMNFOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2D780)
#define BKLPIMMNFOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2D7E0)

inline static constexpr unsigned int BKLPIMMNFOC_TypeDefinitionIndex = 25764;

	class BKLPIMMNFOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAFEBDENPPO; // 0x18
		::System::UInt32 EHPKCCHOLJO; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FAKFNNHOLBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BKLPIMMNFOC")->GetStaticField(0x144C0);
		}

		static ::Google::Protobuf::MessageParser_1<::BKLPIMMNFOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKLPIMMNFOC*>**)UnitySDK::FromName("", "BKLPIMMNFOC")->GetStaticField(0x144C8);
		}

		// static const ::System::Object LNKFMPGAMAD; // 0x0
		// static const ::System::Object HIOIIFFDAAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKLPIMMNFOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKLPIMMNFOC*))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKLPIMMNFOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKLPIMMNFOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKLPIMMNFOC*>*(*)())((::PBYTE)hIl2Cpp + BKLPIMMNFOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKLPIMMNFOC* Clone()
		{
			return ((::BKLPIMMNFOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MAGAPPDNDDK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_MAGAPPDNDDK_OFFSET))(this);
		}

		::System::Void KCFFENAPECL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_KCFFENAPECL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ILCPEEHNPGF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_ILCPEEHNPGF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKLPIMMNFOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKLPIMMNFOC*))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKLPIMMNFOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKLPIMMNFOC*))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKLPIMMNFOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
