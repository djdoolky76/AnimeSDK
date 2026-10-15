#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBIKIIMGKHH;
class IKECLANKKII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKECLANKKII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E69FDD0)
#define IKECLANKKII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0140)
#define IKECLANKKII_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69F8F0)
#define IKECLANKKII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69F7C0)
#define IKECLANKKII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69F730)
#define IKECLANKKII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69F990)
#define IKECLANKKII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69F960)
#define IKECLANKKII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69FAE0)
#define IKECLANKKII_HDEJJEDGFHA_OFFSET UNITYSDK_OFFSET(0x1E69F940)
#define IKECLANKKII_HFJCFBIMLMP_OFFSET UNITYSDK_OFFSET(0x1E69F950)
#define IKECLANKKII_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1E69F930)
#define IKECLANKKII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E69F6F0)
#define IKECLANKKII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E69FFF0)
#define IKECLANKKII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E69FF30)
#define IKECLANKKII_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E69F920)
#define IKECLANKKII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69F720)
#define IKECLANKKII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69FC30)
#define IKECLANKKII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E69FC90)

	class IKECLANKKII : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CBIKIIMGKHH*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 ILBGKJHIEJA; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IKECLANKKII")->GetStaticField(0x55420);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IKECLANKKII")->GetStaticField(0x55428);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IKECLANKKII")->GetStaticField(0x55430);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object CPBPPPJBFGH; // 0x0
		// static const ::System::Object JAAODGJBLJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKECLANKKII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKECLANKKII*))((::PBYTE)hIl2Cpp + IKECLANKKII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKECLANKKII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IKECLANKKII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKECLANKKII* Clone()
		{
			return ((::IKECLANKKII*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CBIKIIMGKHH*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CBIKIIMGKHH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_MJOEMBBMBON_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_JHEFPOGNBND_OFFSET))(this);
		}

		::System::UInt32 HDEJJEDGFHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_HDEJJEDGFHA_OFFSET))(this);
		}

		::System::Void HFJCFBIMLMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKECLANKKII_HFJCFBIMLMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKECLANKKII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKECLANKKII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKECLANKKII*))((::PBYTE)hIl2Cpp + IKECLANKKII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKECLANKKII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKECLANKKII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKECLANKKII*))((::PBYTE)hIl2Cpp + IKECLANKKII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKECLANKKII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
