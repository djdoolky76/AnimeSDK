#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEPKLKNFLON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEPKLKNFLON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E09DC50)
#define CEPKLKNFLON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09DCF0)
#define CEPKLKNFLON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E09D940)
#define CEPKLKNFLON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E09D910)
#define CEPKLKNFLON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09D900)
#define CEPKLKNFLON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E09DA50)
#define CEPKLKNFLON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E09D980)
#define CEPKLKNFLON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E09DBB0)
#define CEPKLKNFLON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E09D8C0)
#define CEPKLKNFLON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E09DCA0)
#define CEPKLKNFLON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E09DC70)
#define CEPKLKNFLON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E09D8F0)
#define CEPKLKNFLON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E09DBE0)
#define CEPKLKNFLON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E09DC40)

inline static constexpr unsigned int CEPKLKNFLON_TypeDefinitionIndex = 34429;

	class CEPKLKNFLON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CEPKLKNFLON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEPKLKNFLON*>**)UnitySDK::FromName("", "CEPKLKNFLON")->GetStaticField(0x12970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPKLKNFLON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEPKLKNFLON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEPKLKNFLON*))((::PBYTE)hIl2Cpp + CEPKLKNFLON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEPKLKNFLON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEPKLKNFLON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEPKLKNFLON*>*(*)())((::PBYTE)hIl2Cpp + CEPKLKNFLON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPKLKNFLON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEPKLKNFLON* Clone()
		{
			return ((::CEPKLKNFLON*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPKLKNFLON_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEPKLKNFLON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEPKLKNFLON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEPKLKNFLON*))((::PBYTE)hIl2Cpp + CEPKLKNFLON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPKLKNFLON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPKLKNFLON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEPKLKNFLON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPKLKNFLON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEPKLKNFLON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEPKLKNFLON*))((::PBYTE)hIl2Cpp + CEPKLKNFLON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEPKLKNFLON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
