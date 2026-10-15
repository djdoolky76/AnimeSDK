#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBAGCHAMPEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBAGCHAMPEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E1AA0)
#define IBAGCHAMPEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E1CC0)
#define IBAGCHAMPEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E16F0)
#define IBAGCHAMPEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E16C0)
#define IBAGCHAMPEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E16B0)
#define IBAGCHAMPEK_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E5E1730)
#define IBAGCHAMPEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E1820)
#define IBAGCHAMPEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E1750)
#define IBAGCHAMPEK_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E5E1740)
#define IBAGCHAMPEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E1990)
#define IBAGCHAMPEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E1670)
#define IBAGCHAMPEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E1B60)
#define IBAGCHAMPEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E1B30)
#define IBAGCHAMPEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E16A0)
#define IBAGCHAMPEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E19C0)
#define IBAGCHAMPEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E1A20)

inline static constexpr unsigned int IBAGCHAMPEK_TypeDefinitionIndex = 32188;

	class IBAGCHAMPEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IBAGCHAMPEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBAGCHAMPEK*>**)UnitySDK::FromName("", "IBAGCHAMPEK")->GetStaticField(0x428A0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBAGCHAMPEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBAGCHAMPEK*))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBAGCHAMPEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBAGCHAMPEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBAGCHAMPEK*>*(*)())((::PBYTE)hIl2Cpp + IBAGCHAMPEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBAGCHAMPEK* Clone()
		{
			return ((::IBAGCHAMPEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBAGCHAMPEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBAGCHAMPEK*))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBAGCHAMPEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBAGCHAMPEK*))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBAGCHAMPEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
