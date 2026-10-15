#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GABKFNAJIDD;
class JJDNPDECDDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJDNPDECDDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E758930)
#define JJDNPDECDDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E758CB0)
#define JJDNPDECDDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E758480)
#define JJDNPDECDDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7583C0)
#define JJDNPDECDDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E758370)
#define JJDNPDECDDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E758630)
#define JJDNPDECDDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7584E0)
#define JJDNPDECDDA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7584C0)
#define JJDNPDECDDA_FPKEDHHKIFE_OFFSET UNITYSDK_OFFSET(0x1E7584D0)
#define JJDNPDECDDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E758760)
#define JJDNPDECDDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E758330)
#define JJDNPDECDDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E758AE0)
#define JJDNPDECDDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E758A40)
#define JJDNPDECDDA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7584B0)
#define JJDNPDECDDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E758360)
#define JJDNPDECDDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7587D0)
#define JJDNPDECDDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E758830)

inline static constexpr unsigned int JJDNPDECDDA_TypeDefinitionIndex = 30206;

	class JJDNPDECDDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GABKFNAJIDD*>* DGCEFPNIJND; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_CPPANOBNFFG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JJDNPDECDDA")->GetStaticField(0x64EC0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JJDNPDECDDA")->GetStaticField(0x64EC8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LHHEBKGHPGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJDNPDECDDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDNPDECDDA*))((::PBYTE)hIl2Cpp + JJDNPDECDDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJDNPDECDDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JJDNPDECDDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJDNPDECDDA* Clone()
		{
			return ((::JJDNPDECDDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJDNPDECDDA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GABKFNAJIDD*>* FPKEDHHKIFE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GABKFNAJIDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA_FPKEDHHKIFE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJDNPDECDDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJDNPDECDDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDNPDECDDA*))((::PBYTE)hIl2Cpp + JJDNPDECDDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJDNPDECDDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJDNPDECDDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDNPDECDDA*))((::PBYTE)hIl2Cpp + JJDNPDECDDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJDNPDECDDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
