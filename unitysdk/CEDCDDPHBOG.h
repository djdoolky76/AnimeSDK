#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEDCDDPHBOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEDCDDPHBOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0903F0)
#define CEDCDDPHBOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E090490)
#define CEDCDDPHBOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0900E0)
#define CEDCDDPHBOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0900B0)
#define CEDCDDPHBOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0900A0)
#define CEDCDDPHBOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0901F0)
#define CEDCDDPHBOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E090120)
#define CEDCDDPHBOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E090350)
#define CEDCDDPHBOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E090060)
#define CEDCDDPHBOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E090440)
#define CEDCDDPHBOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E090410)
#define CEDCDDPHBOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E090090)
#define CEDCDDPHBOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E090380)
#define CEDCDDPHBOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0903E0)

inline static constexpr unsigned int CEDCDDPHBOG_TypeDefinitionIndex = 32952;

	class CEDCDDPHBOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CEDCDDPHBOG")->GetStaticField(0x104C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEDCDDPHBOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEDCDDPHBOG*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CEDCDDPHBOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEDCDDPHBOG* Clone()
		{
			return ((::CEDCDDPHBOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEDCDDPHBOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEDCDDPHBOG*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEDCDDPHBOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEDCDDPHBOG*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
