#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CANHNOJACGI;
class MJMGOBMOPDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CANHNOJACGI_BNAKJCEGDFL_OFFSET UNITYSDK_OFFSET(0x1E05EBF0)
#define CANHNOJACGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05F050)
#define CANHNOJACGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05F3C0)
#define CANHNOJACGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E05EBA0)
#define CANHNOJACGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05EB10)
#define CANHNOJACGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05EAD0)
#define CANHNOJACGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05ED50)
#define CANHNOJACGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E05EC00)
#define CANHNOJACGI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E05EBE0)
#define CANHNOJACGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05EE80)
#define CANHNOJACGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E05EA90)
#define CANHNOJACGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05F200)
#define CANHNOJACGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05F160)
#define CANHNOJACGI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E05EBD0)
#define CANHNOJACGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05EAC0)
#define CANHNOJACGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05EEF0)
#define CANHNOJACGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05EF50)

inline static constexpr unsigned int CANHNOJACGI_TypeDefinitionIndex = 33736;

	class CANHNOJACGI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MJMGOBMOPDL*>* NDEEIPNCINM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_IONPMGIIDOE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CANHNOJACGI")->GetStaticField(0x2BC0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CANHNOJACGI")->GetStaticField(0x2BC8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OHIAHIBONCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CANHNOJACGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CANHNOJACGI*))((::PBYTE)hIl2Cpp + CANHNOJACGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CANHNOJACGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CANHNOJACGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CANHNOJACGI* Clone()
		{
			return ((::CANHNOJACGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CANHNOJACGI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MJMGOBMOPDL*>* BNAKJCEGDFL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MJMGOBMOPDL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI_BNAKJCEGDFL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CANHNOJACGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CANHNOJACGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CANHNOJACGI*))((::PBYTE)hIl2Cpp + CANHNOJACGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CANHNOJACGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CANHNOJACGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CANHNOJACGI*))((::PBYTE)hIl2Cpp + CANHNOJACGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CANHNOJACGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
