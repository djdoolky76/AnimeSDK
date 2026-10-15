#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMEKJABIGGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMEKJABIGGH_AAPPHPNLIAG_OFFSET UNITYSDK_OFFSET(0x1EB72980)
#define NMEKJABIGGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB72CD0)
#define NMEKJABIGGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB72FA0)
#define NMEKJABIGGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB72920)
#define NMEKJABIGGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB728F0)
#define NMEKJABIGGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB728E0)
#define NMEKJABIGGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB72A90)
#define NMEKJABIGGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB729B0)
#define NMEKJABIGGH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB729A0)
#define NMEKJABIGGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB72B60)
#define NMEKJABIGGH_JACDAFKIBFK_OFFSET UNITYSDK_OFFSET(0x1EB72970)
#define NMEKJABIGGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB728A0)
#define NMEKJABIGGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB72E20)
#define NMEKJABIGGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB72DE0)
#define NMEKJABIGGH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB72990)
#define NMEKJABIGGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB728D0)
#define NMEKJABIGGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB72B90)
#define NMEKJABIGGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB72BF0)

	class NMEKJABIGGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 JACDEHEPDAI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMEKJABIGGH")->GetStaticField(0x6C180);
		}

		// static const ::System::Object ONNHIMIHFBH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMEKJABIGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMEKJABIGGH*))((::PBYTE)hIl2Cpp + NMEKJABIGGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMEKJABIGGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMEKJABIGGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMEKJABIGGH* Clone()
		{
			return ((::NMEKJABIGGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JACDAFKIBFK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH_JACDAFKIBFK_OFFSET))(this);
		}

		::System::Void AAPPHPNLIAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMEKJABIGGH_AAPPHPNLIAG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMEKJABIGGH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMEKJABIGGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMEKJABIGGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMEKJABIGGH*))((::PBYTE)hIl2Cpp + NMEKJABIGGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMEKJABIGGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMEKJABIGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMEKJABIGGH*))((::PBYTE)hIl2Cpp + NMEKJABIGGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMEKJABIGGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
