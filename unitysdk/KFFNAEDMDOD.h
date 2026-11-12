#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFFNAEDMDOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFFNAEDMDOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB2ECE0)
#define KFFNAEDMDOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB2EF00)
#define KFFNAEDMDOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB2E930)
#define KFFNAEDMDOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB2E900)
#define KFFNAEDMDOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2E8F0)
#define KFFNAEDMDOD_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1FB2E970)
#define KFFNAEDMDOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB2EA60)
#define KFFNAEDMDOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB2E990)
#define KFFNAEDMDOD_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1FB2E980)
#define KFFNAEDMDOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB2EBD0)
#define KFFNAEDMDOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB2E8B0)
#define KFFNAEDMDOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB2EDA0)
#define KFFNAEDMDOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB2ED70)
#define KFFNAEDMDOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB2E8E0)
#define KFFNAEDMDOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB2EC00)
#define KFFNAEDMDOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB2EC60)

inline static constexpr unsigned int KFFNAEDMDOD_TypeDefinitionIndex = 27874;

	class KFFNAEDMDOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KFFNAEDMDOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFFNAEDMDOD*>**)UnitySDK::FromName("", "KFFNAEDMDOD")->GetStaticField(0xB6D0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFFNAEDMDOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFFNAEDMDOD*))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFFNAEDMDOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFFNAEDMDOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFFNAEDMDOD*>*(*)())((::PBYTE)hIl2Cpp + KFFNAEDMDOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFFNAEDMDOD* Clone()
		{
			return ((::KFFNAEDMDOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFFNAEDMDOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFFNAEDMDOD*))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFFNAEDMDOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFFNAEDMDOD*))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFFNAEDMDOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
