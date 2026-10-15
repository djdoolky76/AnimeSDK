#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBMGNLFKMMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBMGNLFKMMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5009D0)
#define HBMGNLFKMMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E500BF0)
#define HBMGNLFKMMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5005C0)
#define HBMGNLFKMMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E500590)
#define HBMGNLFKMMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E500580)
#define HBMGNLFKMMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E500750)
#define HBMGNLFKMMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E500650)
#define HBMGNLFKMMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5008C0)
#define HBMGNLFKMMK_HOJMIDMPGEJ_OFFSET UNITYSDK_OFFSET(0x1E500630)
#define HBMGNLFKMMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E500510)
#define HBMGNLFKMMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E500A90)
#define HBMGNLFKMMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E500A60)
#define HBMGNLFKMMK_MJBPNFKDBMF_OFFSET UNITYSDK_OFFSET(0x1E500640)
#define HBMGNLFKMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E500570)
#define HBMGNLFKMMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5008F0)
#define HBMGNLFKMMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E500950)

inline static constexpr unsigned int HBMGNLFKMMK_TypeDefinitionIndex = 29857;

	class HBMGNLFKMMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IIKBFBEOMLN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HBMGNLFKMMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HBMGNLFKMMK*>**)UnitySDK::FromName("", "HBMGNLFKMMK")->GetStaticField(0x25B80);
		}

		// static const ::System::Object MGBDGGHMGBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBMGNLFKMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBMGNLFKMMK*))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBMGNLFKMMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HBMGNLFKMMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HBMGNLFKMMK*>*(*)())((::PBYTE)hIl2Cpp + HBMGNLFKMMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBMGNLFKMMK* Clone()
		{
			return ((::HBMGNLFKMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOJMIDMPGEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_HOJMIDMPGEJ_OFFSET))(this);
		}

		::System::Void MJBPNFKDBMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_MJBPNFKDBMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBMGNLFKMMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBMGNLFKMMK*))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBMGNLFKMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBMGNLFKMMK*))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBMGNLFKMMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
