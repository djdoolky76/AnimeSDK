#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFIIJKCCICO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFIIJKCCICO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E46FD90)
#define GFIIJKCCICO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46FE30)
#define GFIIJKCCICO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E46FA80)
#define GFIIJKCCICO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E46FA50)
#define GFIIJKCCICO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46FA40)
#define GFIIJKCCICO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E46FB90)
#define GFIIJKCCICO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E46FAC0)
#define GFIIJKCCICO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E46FCF0)
#define GFIIJKCCICO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E46FA00)
#define GFIIJKCCICO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E46FDE0)
#define GFIIJKCCICO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E46FDB0)
#define GFIIJKCCICO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E46FA30)
#define GFIIJKCCICO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E46FD20)
#define GFIIJKCCICO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E46FD80)

inline static constexpr unsigned int GFIIJKCCICO_TypeDefinitionIndex = 27866;

	class GFIIJKCCICO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFIIJKCCICO")->GetStaticField(0x14660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJKCCICO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFIIJKCCICO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFIIJKCCICO*))((::PBYTE)hIl2Cpp + GFIIJKCCICO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFIIJKCCICO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFIIJKCCICO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJKCCICO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFIIJKCCICO* Clone()
		{
			return ((::GFIIJKCCICO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJKCCICO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFIIJKCCICO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFIIJKCCICO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFIIJKCCICO*))((::PBYTE)hIl2Cpp + GFIIJKCCICO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJKCCICO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJKCCICO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFIIJKCCICO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJKCCICO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFIIJKCCICO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFIIJKCCICO*))((::PBYTE)hIl2Cpp + GFIIJKCCICO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFIIJKCCICO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
