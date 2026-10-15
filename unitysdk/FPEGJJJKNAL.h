#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJHHGHKGAIL.h"
#include "unitysdk/System/Object.h"
class FPEGJJJKNAL;
class LMLNNHKJEIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPEGJJJKNAL_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E407540)
#define FPEGJJJKNAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E407A50)
#define FPEGJJJKNAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E407ED0)
#define FPEGJJJKNAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4074F0)
#define FPEGJJJKNAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E407430)
#define FPEGJJJKNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4073E0)
#define FPEGJJJKNAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4076D0)
#define FPEGJJJKNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E407570)
#define FPEGJJJKNAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E407800)
#define FPEGJJJKNAL_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1E407520)
#define FPEGJJJKNAL_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E407530)
#define FPEGJJJKNAL_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E407560)
#define FPEGJJJKNAL_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E407550)
#define FPEGJJJKNAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4073A0)
#define FPEGJJJKNAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E407CE0)
#define FPEGJJJKNAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E407C30)
#define FPEGJJJKNAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4073D0)
#define FPEGJJJKNAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E407870)
#define FPEGJJJKNAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4078D0)

inline static constexpr unsigned int FPEGJJJKNAL_TypeDefinitionIndex = 30445;

	class FPEGJJJKNAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x18
		::CJHHGHKGAIL GMPNCOBOFDM; // 0x20
		::System::UInt32 IBEBBFIHLLP; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FPEGJJJKNAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPEGJJJKNAL*>**)UnitySDK::FromName("", "FPEGJJJKNAL")->GetStaticField(0x667B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>**)UnitySDK::FromName("", "FPEGJJJKNAL")->GetStaticField(0x667B8);
		}

		// static const ::System::Object OIDEIBKKMCB; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPEGJJJKNAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPEGJJJKNAL*))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPEGJJJKNAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPEGJJJKNAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPEGJJJKNAL*>*(*)())((::PBYTE)hIl2Cpp + FPEGJJJKNAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPEGJJJKNAL* Clone()
		{
			return ((::FPEGJJJKNAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::CJHHGHKGAIL JBIOGKPHKKC()
		{
			return ((::CJHHGHKGAIL(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::CJHHGHKGAIL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJHHGHKGAIL))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPEGJJJKNAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPEGJJJKNAL*))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPEGJJJKNAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPEGJJJKNAL*))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPEGJJJKNAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
