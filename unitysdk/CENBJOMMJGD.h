#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENBJOMMJGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CENBJOMMJGD_BNMGMLHBKGB_OFFSET UNITYSDK_OFFSET(0x1E09C790)
#define CENBJOMMJGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E09CB10)
#define CENBJOMMJGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09CDE0)
#define CENBJOMMJGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E09C710)
#define CENBJOMMJGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E09C6E0)
#define CENBJOMMJGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09C6D0)
#define CENBJOMMJGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E09C8D0)
#define CENBJOMMJGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E09C7C0)
#define CENBJOMMJGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E09C9A0)
#define CENBJOMMJGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E09C660)
#define CENBJOMMJGD_LPGIBPNADOJ_OFFSET UNITYSDK_OFFSET(0x1E09C780)
#define CENBJOMMJGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E09CC60)
#define CENBJOMMJGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E09CC20)
#define CENBJOMMJGD_MJPGIEICBAP_OFFSET UNITYSDK_OFFSET(0x1E09C7A0)
#define CENBJOMMJGD_OKPOGFPMGNM_OFFSET UNITYSDK_OFFSET(0x1E09C7B0)
#define CENBJOMMJGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E09C6C0)
#define CENBJOMMJGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E09C9D0)
#define CENBJOMMJGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E09CA30)

inline static constexpr unsigned int CENBJOMMJGD_TypeDefinitionIndex = 29659;

	class CENBJOMMJGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDPGGIDBGDI; // 0x18
		::System::UInt32 NGFGMKLACAK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CENBJOMMJGD")->GetStaticField(0x12880);
		}

		// static const ::System::Object PLGIICNKEFB; // 0x0
		// static const ::System::Object JBEKMBAIGCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CENBJOMMJGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENBJOMMJGD*))((::PBYTE)hIl2Cpp + CENBJOMMJGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CENBJOMMJGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CENBJOMMJGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CENBJOMMJGD* Clone()
		{
			return ((::CENBJOMMJGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD_CLONE_OFFSET))(this);
		}

		::System::UInt32 LPGIBPNADOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD_LPGIBPNADOJ_OFFSET))(this);
		}

		::System::Void BNMGMLHBKGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CENBJOMMJGD_BNMGMLHBKGB_OFFSET))(this, a1);
		}

		::System::UInt32 MJPGIEICBAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD_MJPGIEICBAP_OFFSET))(this);
		}

		::System::Void OKPOGFPMGNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CENBJOMMJGD_OKPOGFPMGNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CENBJOMMJGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CENBJOMMJGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENBJOMMJGD*))((::PBYTE)hIl2Cpp + CENBJOMMJGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CENBJOMMJGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CENBJOMMJGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENBJOMMJGD*))((::PBYTE)hIl2Cpp + CENBJOMMJGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CENBJOMMJGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
