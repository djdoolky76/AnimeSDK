#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBAAHKDOHDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBAAHKDOHDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60E940)
#define IBAAHKDOHDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60EB60)
#define IBAAHKDOHDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E60E590)
#define IBAAHKDOHDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E60E560)
#define IBAAHKDOHDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60E550)
#define IBAAHKDOHDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60E6C0)
#define IBAAHKDOHDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E60E5F0)
#define IBAAHKDOHDB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E60E5E0)
#define IBAAHKDOHDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60E830)
#define IBAAHKDOHDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E60E510)
#define IBAAHKDOHDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60EA00)
#define IBAAHKDOHDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60E9D0)
#define IBAAHKDOHDB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E60E5D0)
#define IBAAHKDOHDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60E540)
#define IBAAHKDOHDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60E860)
#define IBAAHKDOHDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60E8C0)

inline static constexpr unsigned int IBAAHKDOHDB_TypeDefinitionIndex = 28837;

	class IBAAHKDOHDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IBAAHKDOHDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBAAHKDOHDB*>**)UnitySDK::FromName("", "IBAAHKDOHDB")->GetStaticField(0x407D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBAAHKDOHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBAAHKDOHDB*))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBAAHKDOHDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBAAHKDOHDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBAAHKDOHDB*>*(*)())((::PBYTE)hIl2Cpp + IBAAHKDOHDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBAAHKDOHDB* Clone()
		{
			return ((::IBAAHKDOHDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBAAHKDOHDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBAAHKDOHDB*))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBAAHKDOHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBAAHKDOHDB*))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBAAHKDOHDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
