#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGFDCGKPJBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGFDCGKPJBE_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E61DC10)
#define IGFDCGKPJBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61DF80)
#define IGFDCGKPJBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61E1A0)
#define IGFDCGKPJBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61DBD0)
#define IGFDCGKPJBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61DBA0)
#define IGFDCGKPJBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61DB90)
#define IGFDCGKPJBE_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E61DC20)
#define IGFDCGKPJBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61DD00)
#define IGFDCGKPJBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61DC30)
#define IGFDCGKPJBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61DE70)
#define IGFDCGKPJBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61DB50)
#define IGFDCGKPJBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61E040)
#define IGFDCGKPJBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61E010)
#define IGFDCGKPJBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61DB80)
#define IGFDCGKPJBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61DEA0)
#define IGFDCGKPJBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61DF00)

inline static constexpr unsigned int IGFDCGKPJBE_TypeDefinitionIndex = 32593;

	class IGFDCGKPJBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IGFDCGKPJBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGFDCGKPJBE*>**)UnitySDK::FromName("", "IGFDCGKPJBE")->GetStaticField(0x4B010);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGFDCGKPJBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGFDCGKPJBE*))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGFDCGKPJBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGFDCGKPJBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGFDCGKPJBE*>*(*)())((::PBYTE)hIl2Cpp + IGFDCGKPJBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGFDCGKPJBE* Clone()
		{
			return ((::IGFDCGKPJBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGFDCGKPJBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGFDCGKPJBE*))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGFDCGKPJBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGFDCGKPJBE*))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGFDCGKPJBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
