#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHAJJBBEHBE;
class LAABPKPBJEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAABPKPBJEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC01700)
#define LAABPKPBJEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC01A00)
#define LAABPKPBJEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC01280)
#define LAABPKPBJEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC011D0)
#define LAABPKPBJEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC01180)
#define LAABPKPBJEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC01460)
#define LAABPKPBJEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC012E0)
#define LAABPKPBJEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC01580)
#define LAABPKPBJEG_JGGLLPAMMBB_OFFSET UNITYSDK_OFFSET(0x1FC012D0)
#define LAABPKPBJEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC01110)
#define LAABPKPBJEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC01840)
#define LAABPKPBJEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC017A0)
#define LAABPKPBJEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC01170)
#define LAABPKPBJEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC015F0)
#define LAABPKPBJEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC01650)

inline static constexpr unsigned int LAABPKPBJEG_TypeDefinitionIndex = 33381;

	class LAABPKPBJEG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GHAJJBBEHBE*>* FOFJBJNPCPI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::GHAJJBBEHBE*>** StaticGet_EEHMBNDCGAF()
		{
			return (::Google::Protobuf::FieldCodec_1<::GHAJJBBEHBE*>**)UnitySDK::FromName("", "LAABPKPBJEG")->GetStaticField(0x25210);
		}

		static ::Google::Protobuf::MessageParser_1<::LAABPKPBJEG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LAABPKPBJEG*>**)UnitySDK::FromName("", "LAABPKPBJEG")->GetStaticField(0x25218);
		}

		// static const ::System::Object EGLDAFCHAKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAABPKPBJEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAABPKPBJEG*))((::PBYTE)hIl2Cpp + LAABPKPBJEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAABPKPBJEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LAABPKPBJEG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LAABPKPBJEG*>*(*)())((::PBYTE)hIl2Cpp + LAABPKPBJEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAABPKPBJEG* Clone()
		{
			return ((::LAABPKPBJEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GHAJJBBEHBE*>* JGGLLPAMMBB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GHAJJBBEHBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG_JGGLLPAMMBB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAABPKPBJEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAABPKPBJEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAABPKPBJEG*))((::PBYTE)hIl2Cpp + LAABPKPBJEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAABPKPBJEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAABPKPBJEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAABPKPBJEG*))((::PBYTE)hIl2Cpp + LAABPKPBJEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAABPKPBJEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
