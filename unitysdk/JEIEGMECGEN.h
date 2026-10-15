#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEIEGMECGEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEIEGMECGEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6EFF90)
#define JEIEGMECGEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F0240)
#define JEIEGMECGEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6EFB90)
#define JEIEGMECGEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6EFB20)
#define JEIEGMECGEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EFAF0)
#define JEIEGMECGEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6EFD50)
#define JEIEGMECGEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6EFC30)
#define JEIEGMECGEN_FJKMOOGCENG_OFFSET UNITYSDK_OFFSET(0x1E6EFC20)
#define JEIEGMECGEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6EFE40)
#define JEIEGMECGEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6EFA80)
#define JEIEGMECGEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6F0080)
#define JEIEGMECGEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6F0030)
#define JEIEGMECGEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6EFAE0)
#define JEIEGMECGEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6EFE80)
#define JEIEGMECGEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6EFEE0)

inline static constexpr unsigned int JEIEGMECGEN_TypeDefinitionIndex = 29276;

	class JEIEGMECGEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ECMHNEICIAO; // 0x18
		static ::System::Object** StaticGet_KHMCBHCLGOP()
		{
			return (::System::Object**)UnitySDK::FromName("", "JEIEGMECGEN")->GetStaticField(0x5C6E0);
		}

		static ::Google::Protobuf::MessageParser_1<::JEIEGMECGEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEIEGMECGEN*>**)UnitySDK::FromName("", "JEIEGMECGEN")->GetStaticField(0x5C6E8);
		}

		// static const ::System::Object PGDMMDENEOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEIEGMECGEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEIEGMECGEN*))((::PBYTE)hIl2Cpp + JEIEGMECGEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEIEGMECGEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEIEGMECGEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEIEGMECGEN*>*(*)())((::PBYTE)hIl2Cpp + JEIEGMECGEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEIEGMECGEN* Clone()
		{
			return ((::JEIEGMECGEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* FJKMOOGCENG()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN_FJKMOOGCENG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIEGMECGEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEIEGMECGEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEIEGMECGEN*))((::PBYTE)hIl2Cpp + JEIEGMECGEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEIEGMECGEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEIEGMECGEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEIEGMECGEN*))((::PBYTE)hIl2Cpp + JEIEGMECGEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEIEGMECGEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
