#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENAMJPBLEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CENAMJPBLEG_AMKCJBAHNJC_OFFSET UNITYSDK_OFFSET(0x1E06E610)
#define CENAMJPBLEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06EB30)
#define CENAMJPBLEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06EE90)
#define CENAMJPBLEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E06E5A0)
#define CENAMJPBLEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06E4A0)
#define CENAMJPBLEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06E410)
#define CENAMJPBLEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E06E660)
#define CENAMJPBLEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06E630)
#define CENAMJPBLEG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E06E5F0)
#define CENAMJPBLEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06E780)
#define CENAMJPBLEG_HAPELACCNPP_OFFSET UNITYSDK_OFFSET(0x1E06E600)
#define CENAMJPBLEG_HHKNFHDPOOD_OFFSET UNITYSDK_OFFSET(0x1E06E5D0)
#define CENAMJPBLEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E06E3D0)
#define CENAMJPBLEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E06ED60)
#define CENAMJPBLEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E06ECF0)
#define CENAMJPBLEG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E06E5E0)
#define CENAMJPBLEG_OEMILEFLNHN_OFFSET UNITYSDK_OFFSET(0x1E06E620)
#define CENAMJPBLEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E06E400)
#define CENAMJPBLEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06E950)
#define CENAMJPBLEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06E9B0)

inline static constexpr unsigned int CENAMJPBLEG_TypeDefinitionIndex = 34285;

	class CENAMJPBLEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EHMGJDCEJOE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DOCLCAKECCA; // 0x20
		::System::UInt32 EIGJAAPLADO; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::CENAMJPBLEG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CENAMJPBLEG*>**)UnitySDK::FromName("", "CENAMJPBLEG")->GetStaticField(0x11380);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NJOPDFMOJNJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CENAMJPBLEG")->GetStaticField(0x11388);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HFEGOFEFNMJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CENAMJPBLEG")->GetStaticField(0x11390);
		}

		// static const ::System::Object DFPPCAJDBFK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EFDMJICCNOB; // 0x0
		// static const ::System::Object FEKMNNACCAJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CENAMJPBLEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENAMJPBLEG*))((::PBYTE)hIl2Cpp + CENAMJPBLEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CENAMJPBLEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CENAMJPBLEG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CENAMJPBLEG*>*(*)())((::PBYTE)hIl2Cpp + CENAMJPBLEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CENAMJPBLEG* Clone()
		{
			return ((::CENAMJPBLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HHKNFHDPOOD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_HHKNFHDPOOD_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CENAMJPBLEG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HAPELACCNPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_HAPELACCNPP_OFFSET))(this);
		}

		::System::UInt32 AMKCJBAHNJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_AMKCJBAHNJC_OFFSET))(this);
		}

		::System::Void OEMILEFLNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CENAMJPBLEG_OEMILEFLNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CENAMJPBLEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CENAMJPBLEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENAMJPBLEG*))((::PBYTE)hIl2Cpp + CENAMJPBLEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CENAMJPBLEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CENAMJPBLEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENAMJPBLEG*))((::PBYTE)hIl2Cpp + CENAMJPBLEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CENAMJPBLEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
