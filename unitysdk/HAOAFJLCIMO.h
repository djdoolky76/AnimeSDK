#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAOAFJLCIMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAOAFJLCIMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200A9770)
#define HAOAFJLCIMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x200A9810)
#define HAOAFJLCIMO_CLONE_OFFSET UNITYSDK_OFFSET(0x200A9460)
#define HAOAFJLCIMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200A9430)
#define HAOAFJLCIMO_CTOR_OFFSET UNITYSDK_OFFSET(0x200A9420)
#define HAOAFJLCIMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x200A9570)
#define HAOAFJLCIMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x200A94A0)
#define HAOAFJLCIMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x200A96D0)
#define HAOAFJLCIMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200A93E0)
#define HAOAFJLCIMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200A97C0)
#define HAOAFJLCIMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x200A9790)
#define HAOAFJLCIMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200A9410)
#define HAOAFJLCIMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200A9700)
#define HAOAFJLCIMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x200A9760)

inline static constexpr unsigned int HAOAFJLCIMO_TypeDefinitionIndex = 35535;

	class HAOAFJLCIMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HAOAFJLCIMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAOAFJLCIMO*>**)UnitySDK::FromName("", "HAOAFJLCIMO")->GetStaticField(0x20420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAOAFJLCIMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAOAFJLCIMO*))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAOAFJLCIMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAOAFJLCIMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAOAFJLCIMO*>*(*)())((::PBYTE)hIl2Cpp + HAOAFJLCIMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAOAFJLCIMO* Clone()
		{
			return ((::HAOAFJLCIMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAOAFJLCIMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAOAFJLCIMO*))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAOAFJLCIMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAOAFJLCIMO*))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAOAFJLCIMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
