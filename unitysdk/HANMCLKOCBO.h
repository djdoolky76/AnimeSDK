#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANMCLKOCBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HANMCLKOCBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E50A4A0)
#define HANMCLKOCBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50A820)
#define HANMCLKOCBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E50A0B0)
#define HANMCLKOCBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E50A070)
#define HANMCLKOCBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50A060)
#define HANMCLKOCBO_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E50A150)
#define HANMCLKOCBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E50A210)
#define HANMCLKOCBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E50A190)
#define HANMCLKOCBO_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E50A160)
#define HANMCLKOCBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E50A2E0)
#define HANMCLKOCBO_HMONDLMJCPN_OFFSET UNITYSDK_OFFSET(0x1E50A170)
#define HANMCLKOCBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E509FF0)
#define HANMCLKOCBO_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1E50A140)
#define HANMCLKOCBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E50A680)
#define HANMCLKOCBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E50A630)
#define HANMCLKOCBO_MJPHDCNMLLB_OFFSET UNITYSDK_OFFSET(0x1E50A180)
#define HANMCLKOCBO_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1E50A130)
#define HANMCLKOCBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E50A050)
#define HANMCLKOCBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E50A310)
#define HANMCLKOCBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E50A370)

	class HANMCLKOCBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HHCEMNIBHIE; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		::System::UInt32 LHDGGNKAOHJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HANMCLKOCBO")->GetStaticField(0x23860);
		}

		// static const ::System::Object BDDGFOPHBML; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object MOBAGOHLJCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HANMCLKOCBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANMCLKOCBO*))((::PBYTE)hIl2Cpp + HANMCLKOCBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANMCLKOCBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HANMCLKOCBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HANMCLKOCBO* Clone()
		{
			return ((::HANMCLKOCBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OLEJNDFFHPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HANMCLKOCBO_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HANMCLKOCBO_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 HMONDLMJCPN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_HMONDLMJCPN_OFFSET))(this);
		}

		::System::Void MJPHDCNMLLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HANMCLKOCBO_MJPHDCNMLLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HANMCLKOCBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HANMCLKOCBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HANMCLKOCBO*))((::PBYTE)hIl2Cpp + HANMCLKOCBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HANMCLKOCBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HANMCLKOCBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANMCLKOCBO*))((::PBYTE)hIl2Cpp + HANMCLKOCBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HANMCLKOCBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
