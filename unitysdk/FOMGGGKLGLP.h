#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOMGGGKLGLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOMGGGKLGLP_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E3FF660)
#define FOMGGGKLGLP_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E3FF670)
#define FOMGGGKLGLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3FF9D0)
#define FOMGGGKLGLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FFBF0)
#define FOMGGGKLGLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3FF620)
#define FOMGGGKLGLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3FF5F0)
#define FOMGGGKLGLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FF5E0)
#define FOMGGGKLGLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3FF750)
#define FOMGGGKLGLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3FF680)
#define FOMGGGKLGLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3FF8C0)
#define FOMGGGKLGLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3FF5A0)
#define FOMGGGKLGLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3FFA90)
#define FOMGGGKLGLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3FFA60)
#define FOMGGGKLGLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3FF5D0)
#define FOMGGGKLGLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3FF8F0)
#define FOMGGGKLGLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3FF950)

inline static constexpr unsigned int FOMGGGKLGLP_TypeDefinitionIndex = 26332;

	class FOMGGGKLGLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FOMGGGKLGLP")->GetStaticField(0x66370);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOMGGGKLGLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOMGGGKLGLP*))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOMGGGKLGLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FOMGGGKLGLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOMGGGKLGLP* Clone()
		{
			return ((::FOMGGGKLGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOMGGGKLGLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOMGGGKLGLP*))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOMGGGKLGLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOMGGGKLGLP*))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOMGGGKLGLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
