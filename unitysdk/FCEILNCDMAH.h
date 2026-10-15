#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCEILNCDMAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCEILNCDMAH_ABJBCBDIBAA_OFFSET UNITYSDK_OFFSET(0x1E317370)
#define FCEILNCDMAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E317740)
#define FCEILNCDMAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3179A0)
#define FCEILNCDMAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E317340)
#define FCEILNCDMAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3172B0)
#define FCEILNCDMAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E317260)
#define FCEILNCDMAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E317470)
#define FCEILNCDMAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E317380)
#define FCEILNCDMAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E317560)
#define FCEILNCDMAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E317220)
#define FCEILNCDMAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E317800)
#define FCEILNCDMAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3177B0)
#define FCEILNCDMAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E317250)
#define FCEILNCDMAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E317660)
#define FCEILNCDMAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3176C0)

inline static constexpr unsigned int FCEILNCDMAH_TypeDefinitionIndex = 29665;

	class FCEILNCDMAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPAACBEDJAL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FCEILNCDMAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCEILNCDMAH*>**)UnitySDK::FromName("", "FCEILNCDMAH")->GetStaticField(0x509B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CEBEHEIEICH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FCEILNCDMAH")->GetStaticField(0x509B8);
		}

		// static const ::System::Object OPHEPKPJAFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCEILNCDMAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEILNCDMAH*))((::PBYTE)hIl2Cpp + FCEILNCDMAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEILNCDMAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCEILNCDMAH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCEILNCDMAH*>*(*)())((::PBYTE)hIl2Cpp + FCEILNCDMAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCEILNCDMAH* Clone()
		{
			return ((::FCEILNCDMAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ABJBCBDIBAA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH_ABJBCBDIBAA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCEILNCDMAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCEILNCDMAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCEILNCDMAH*))((::PBYTE)hIl2Cpp + FCEILNCDMAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCEILNCDMAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCEILNCDMAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEILNCDMAH*))((::PBYTE)hIl2Cpp + FCEILNCDMAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCEILNCDMAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
