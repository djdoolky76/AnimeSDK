#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOIGBKBEGOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOIGBKBEGOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7A4060)
#define JOIGBKBEGOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A4100)
#define JOIGBKBEGOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7A3D50)
#define JOIGBKBEGOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7A3D20)
#define JOIGBKBEGOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A3D10)
#define JOIGBKBEGOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7A3E60)
#define JOIGBKBEGOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7A3D90)
#define JOIGBKBEGOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7A3FC0)
#define JOIGBKBEGOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7A3CD0)
#define JOIGBKBEGOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7A40B0)
#define JOIGBKBEGOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7A4080)
#define JOIGBKBEGOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7A3D00)
#define JOIGBKBEGOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7A3FF0)
#define JOIGBKBEGOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7A4050)

inline static constexpr unsigned int JOIGBKBEGOB_TypeDefinitionIndex = 30893;

	class JOIGBKBEGOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOIGBKBEGOB")->GetStaticField(0x6D0A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOIGBKBEGOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOIGBKBEGOB*))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOIGBKBEGOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOIGBKBEGOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOIGBKBEGOB* Clone()
		{
			return ((::JOIGBKBEGOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOIGBKBEGOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOIGBKBEGOB*))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOIGBKBEGOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOIGBKBEGOB*))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOIGBKBEGOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
