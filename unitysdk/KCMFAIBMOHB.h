#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class KCMFAIBMOHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCMFAIBMOHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203C3A60)
#define KCMFAIBMOHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C3D00)
#define KCMFAIBMOHB_CLONE_OFFSET UNITYSDK_OFFSET(0x203C3390)
#define KCMFAIBMOHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203C3320)
#define KCMFAIBMOHB_CTOR_OFFSET UNITYSDK_OFFSET(0x203C3310)
#define KCMFAIBMOHB_DOKNAGBFBEC_OFFSET UNITYSDK_OFFSET(0x203C3440)
#define KCMFAIBMOHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203C3600)
#define KCMFAIBMOHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x203C3460)
#define KCMFAIBMOHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203C38D0)
#define KCMFAIBMOHB_GJOFDMODOHJ_OFFSET UNITYSDK_OFFSET(0x203C3450)
#define KCMFAIBMOHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203C32A0)
#define KCMFAIBMOHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203C3B50)
#define KCMFAIBMOHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203C3AC0)
#define KCMFAIBMOHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203C3300)
#define KCMFAIBMOHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203C3970)
#define KCMFAIBMOHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x203C39D0)

inline static constexpr unsigned int KCMFAIBMOHB_TypeDefinitionIndex = 33567;

	class KCMFAIBMOHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* PHBFHCCKHIC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KCMFAIBMOHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCMFAIBMOHB*>**)UnitySDK::FromName("", "KCMFAIBMOHB")->GetStaticField(0x6AA10);
		}

		// static const ::System::Object EOPEFMJDFKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCMFAIBMOHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMFAIBMOHB*))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCMFAIBMOHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCMFAIBMOHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCMFAIBMOHB*>*(*)())((::PBYTE)hIl2Cpp + KCMFAIBMOHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCMFAIBMOHB* Clone()
		{
			return ((::KCMFAIBMOHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* DOKNAGBFBEC()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_DOKNAGBFBEC_OFFSET))(this);
		}

		::System::Void GJOFDMODOHJ(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_GJOFDMODOHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCMFAIBMOHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCMFAIBMOHB*))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCMFAIBMOHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMFAIBMOHB*))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCMFAIBMOHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
