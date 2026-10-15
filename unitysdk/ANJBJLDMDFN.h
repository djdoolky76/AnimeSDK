#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANJBJLDMDFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANJBJLDMDFN_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E634240)
#define ANJBJLDMDFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6345E0)
#define ANJBJLDMDFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E634800)
#define ANJBJLDMDFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6341D0)
#define ANJBJLDMDFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6341A0)
#define ANJBJLDMDFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E634190)
#define ANJBJLDMDFN_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E634250)
#define ANJBJLDMDFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E634360)
#define ANJBJLDMDFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E634260)
#define ANJBJLDMDFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6344D0)
#define ANJBJLDMDFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E634120)
#define ANJBJLDMDFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6346A0)
#define ANJBJLDMDFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E634670)
#define ANJBJLDMDFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E634180)
#define ANJBJLDMDFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E634500)
#define ANJBJLDMDFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E634560)

inline static constexpr unsigned int ANJBJLDMDFN_TypeDefinitionIndex = 28351;

	class ANJBJLDMDFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ANJBJLDMDFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANJBJLDMDFN*>**)UnitySDK::FromName("", "ANJBJLDMDFN")->GetStaticField(0x47900);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANJBJLDMDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANJBJLDMDFN*))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANJBJLDMDFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANJBJLDMDFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANJBJLDMDFN*>*(*)())((::PBYTE)hIl2Cpp + ANJBJLDMDFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANJBJLDMDFN* Clone()
		{
			return ((::ANJBJLDMDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANJBJLDMDFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANJBJLDMDFN*))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANJBJLDMDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANJBJLDMDFN*))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANJBJLDMDFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
