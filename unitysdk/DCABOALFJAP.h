#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCABOALFJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCABOALFJAP_AAPPHPNLIAG_OFFSET UNITYSDK_OFFSET(0x1E165000)
#define DCABOALFJAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E165360)
#define DCABOALFJAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E165580)
#define DCABOALFJAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E164FB0)
#define DCABOALFJAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E164F80)
#define DCABOALFJAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E164F70)
#define DCABOALFJAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1650E0)
#define DCABOALFJAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E165010)
#define DCABOALFJAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E165250)
#define DCABOALFJAP_JACDAFKIBFK_OFFSET UNITYSDK_OFFSET(0x1E164FF0)
#define DCABOALFJAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E164F30)
#define DCABOALFJAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E165420)
#define DCABOALFJAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1653F0)
#define DCABOALFJAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E164F60)
#define DCABOALFJAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E165280)
#define DCABOALFJAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1652E0)

	class DCABOALFJAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JACDEHEPDAI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DCABOALFJAP")->GetStaticField(0x263B0);
		}

		// static const ::System::Object ONNHIMIHFBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCABOALFJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCABOALFJAP*))((::PBYTE)hIl2Cpp + DCABOALFJAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCABOALFJAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DCABOALFJAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCABOALFJAP* Clone()
		{
			return ((::DCABOALFJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 JACDAFKIBFK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP_JACDAFKIBFK_OFFSET))(this);
		}

		::System::Void AAPPHPNLIAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCABOALFJAP_AAPPHPNLIAG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCABOALFJAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCABOALFJAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCABOALFJAP*))((::PBYTE)hIl2Cpp + DCABOALFJAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCABOALFJAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCABOALFJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCABOALFJAP*))((::PBYTE)hIl2Cpp + DCABOALFJAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCABOALFJAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
