#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCMFAIBMOHB;
class KHCBONJOLDP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHCBONJOLDP_ADFBNDEBELO_OFFSET UNITYSDK_OFFSET(0x1E83FA60)
#define KHCBONJOLDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E840070)
#define KHCBONJOLDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E840370)
#define KHCBONJOLDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83F8F0)
#define KHCBONJOLDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83F7A0)
#define KHCBONJOLDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83F790)
#define KHCBONJOLDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83FBE0)
#define KHCBONJOLDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83FA70)
#define KHCBONJOLDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83FEB0)
#define KHCBONJOLDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83F750)
#define KHCBONJOLDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8401E0)
#define KHCBONJOLDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8400D0)
#define KHCBONJOLDP_NHLEFCEKMAM_OFFSET UNITYSDK_OFFSET(0x1E83FA50)
#define KHCBONJOLDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83F780)
#define KHCBONJOLDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83FF80)
#define KHCBONJOLDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83FFE0)

inline static constexpr unsigned int KHCBONJOLDP_TypeDefinitionIndex = 32722;

	class KHCBONJOLDP : public ::System::Object
	{
	public:
		::KCMFAIBMOHB* CCAGFEOIGIE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHCBONJOLDP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHCBONJOLDP*>**)UnitySDK::FromName("", "KHCBONJOLDP")->GetStaticField(0x16DE0);
		}

		// static const ::System::Object PHNAANFIFGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCBONJOLDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHCBONJOLDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHCBONJOLDP*))((::PBYTE)hIl2Cpp + KHCBONJOLDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCBONJOLDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHCBONJOLDP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHCBONJOLDP*>*(*)())((::PBYTE)hIl2Cpp + KHCBONJOLDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCBONJOLDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHCBONJOLDP* Clone()
		{
			return ((::KHCBONJOLDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCBONJOLDP_CLONE_OFFSET))(this);
		}

		::KCMFAIBMOHB* NHLEFCEKMAM()
		{
			return ((::KCMFAIBMOHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCBONJOLDP_NHLEFCEKMAM_OFFSET))(this);
		}

		::System::Void ADFBNDEBELO(::KCMFAIBMOHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMFAIBMOHB*))((::PBYTE)hIl2Cpp + KHCBONJOLDP_ADFBNDEBELO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHCBONJOLDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHCBONJOLDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHCBONJOLDP*))((::PBYTE)hIl2Cpp + KHCBONJOLDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCBONJOLDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCBONJOLDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHCBONJOLDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCBONJOLDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHCBONJOLDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHCBONJOLDP*))((::PBYTE)hIl2Cpp + KHCBONJOLDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHCBONJOLDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
