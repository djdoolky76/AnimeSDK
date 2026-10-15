#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKKCLMHGJNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKKCLMHGJNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E740740)
#define JKKCLMHGJNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E740960)
#define JKKCLMHGJNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E740390)
#define JKKCLMHGJNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E740360)
#define JKKCLMHGJNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E740350)
#define JKKCLMHGJNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7404C0)
#define JKKCLMHGJNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7403F0)
#define JKKCLMHGJNN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7403E0)
#define JKKCLMHGJNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E740630)
#define JKKCLMHGJNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E740310)
#define JKKCLMHGJNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E740800)
#define JKKCLMHGJNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7407D0)
#define JKKCLMHGJNN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7403D0)
#define JKKCLMHGJNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E740340)
#define JKKCLMHGJNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E740660)
#define JKKCLMHGJNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7406C0)

inline static constexpr unsigned int JKKCLMHGJNN_TypeDefinitionIndex = 34443;

	class JKKCLMHGJNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JKKCLMHGJNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JKKCLMHGJNN*>**)UnitySDK::FromName("", "JKKCLMHGJNN")->GetStaticField(0x63720);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKKCLMHGJNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKKCLMHGJNN*))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKKCLMHGJNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JKKCLMHGJNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JKKCLMHGJNN*>*(*)())((::PBYTE)hIl2Cpp + JKKCLMHGJNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKKCLMHGJNN* Clone()
		{
			return ((::JKKCLMHGJNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKKCLMHGJNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKKCLMHGJNN*))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKKCLMHGJNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKKCLMHGJNN*))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKKCLMHGJNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
