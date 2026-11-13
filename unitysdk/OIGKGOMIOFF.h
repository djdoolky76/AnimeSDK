#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIGKGOMIOFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIGKGOMIOFF_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1FCED730)
#define OIGKGOMIOFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCEDB70)
#define OIGKGOMIOFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCEDE60)
#define OIGKGOMIOFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCED6E0)
#define OIGKGOMIOFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCED650)
#define OIGKGOMIOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCED600)
#define OIGKGOMIOFF_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1FCED710)
#define OIGKGOMIOFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCED840)
#define OIGKGOMIOFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCED740)
#define OIGKGOMIOFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCED930)
#define OIGKGOMIOFF_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1FCED720)
#define OIGKGOMIOFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCED5C0)
#define OIGKGOMIOFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCEDCB0)
#define OIGKGOMIOFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCEDC60)
#define OIGKGOMIOFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCED5F0)
#define OIGKGOMIOFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCEDA30)
#define OIGKGOMIOFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCEDA90)

inline static constexpr unsigned int OIGKGOMIOFF_TypeDefinitionIndex = 33706;

	class OIGKGOMIOFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x18
		::System::UInt32 DEJFOEHNFJA; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OIGKGOMIOFF")->GetStaticField(0x18320);
		}

		static ::Google::Protobuf::MessageParser_1<::OIGKGOMIOFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIGKGOMIOFF*>**)UnitySDK::FromName("", "OIGKGOMIOFF")->GetStaticField(0x18328);
		}

		// static const ::System::Object NDFHHFGKMAI; // 0x0
		// static const ::System::Object EIDJNEEOOCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIGKGOMIOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIGKGOMIOFF*))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIGKGOMIOFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OIGKGOMIOFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OIGKGOMIOFF*>*(*)())((::PBYTE)hIl2Cpp + OIGKGOMIOFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIGKGOMIOFF* Clone()
		{
			return ((::OIGKGOMIOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::UInt32 IDNFENJBNPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIGKGOMIOFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIGKGOMIOFF*))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIGKGOMIOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIGKGOMIOFF*))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIGKGOMIOFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
