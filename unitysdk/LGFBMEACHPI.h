#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGFBMEACHPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGFBMEACHPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC710B0)
#define LGFBMEACHPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC71370)
#define LGFBMEACHPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC70C30)
#define LGFBMEACHPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC70BA0)
#define LGFBMEACHPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC70B50)
#define LGFBMEACHPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC70DB0)
#define LGFBMEACHPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC70C90)
#define LGFBMEACHPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC70EA0)
#define LGFBMEACHPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC70AE0)
#define LGFBMEACHPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC711A0)
#define LGFBMEACHPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC71150)
#define LGFBMEACHPI_OCBGAOHGJKG_OFFSET UNITYSDK_OFFSET(0x1FC70C80)
#define LGFBMEACHPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC70B40)
#define LGFBMEACHPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC70FA0)
#define LGFBMEACHPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC71000)

inline static constexpr unsigned int LGFBMEACHPI_TypeDefinitionIndex = 27721;

	class LGFBMEACHPI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKCEEIGOLPD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LGFBMEACHPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGFBMEACHPI*>**)UnitySDK::FromName("", "LGFBMEACHPI")->GetStaticField(0x32220);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FOBBGPGCHAL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LGFBMEACHPI")->GetStaticField(0x32228);
		}

		// static const ::System::Object IMODNGCBMKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGFBMEACHPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGFBMEACHPI*))((::PBYTE)hIl2Cpp + LGFBMEACHPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFBMEACHPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGFBMEACHPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGFBMEACHPI*>*(*)())((::PBYTE)hIl2Cpp + LGFBMEACHPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGFBMEACHPI* Clone()
		{
			return ((::LGFBMEACHPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OCBGAOHGJKG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI_OCBGAOHGJKG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGFBMEACHPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGFBMEACHPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGFBMEACHPI*))((::PBYTE)hIl2Cpp + LGFBMEACHPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGFBMEACHPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFBMEACHPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGFBMEACHPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGFBMEACHPI*))((::PBYTE)hIl2Cpp + LGFBMEACHPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGFBMEACHPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
