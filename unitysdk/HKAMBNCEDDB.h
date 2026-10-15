#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAMBNCEDDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKAMBNCEDDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5ADB90)
#define HKAMBNCEDDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5ADDB0)
#define HKAMBNCEDDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5AD7E0)
#define HKAMBNCEDDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5AD7B0)
#define HKAMBNCEDDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AD7A0)
#define HKAMBNCEDDB_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E5AD820)
#define HKAMBNCEDDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5AD910)
#define HKAMBNCEDDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5AD840)
#define HKAMBNCEDDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5ADA80)
#define HKAMBNCEDDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5AD760)
#define HKAMBNCEDDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5ADC50)
#define HKAMBNCEDDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5ADC20)
#define HKAMBNCEDDB_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E5AD830)
#define HKAMBNCEDDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5AD790)
#define HKAMBNCEDDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5ADAB0)
#define HKAMBNCEDDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5ADB10)

inline static constexpr unsigned int HKAMBNCEDDB_TypeDefinitionIndex = 26845;

	class HKAMBNCEDDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLBKCMIIFFP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HKAMBNCEDDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKAMBNCEDDB*>**)UnitySDK::FromName("", "HKAMBNCEDDB")->GetStaticField(0x44470);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKAMBNCEDDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKAMBNCEDDB*))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKAMBNCEDDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKAMBNCEDDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKAMBNCEDDB*>*(*)())((::PBYTE)hIl2Cpp + HKAMBNCEDDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKAMBNCEDDB* Clone()
		{
			return ((::HKAMBNCEDDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKAMBNCEDDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAMBNCEDDB*))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKAMBNCEDDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKAMBNCEDDB*))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKAMBNCEDDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
