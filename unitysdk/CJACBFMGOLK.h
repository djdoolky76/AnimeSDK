#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJACBFMGOLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJACBFMGOLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D8460)
#define CJACBFMGOLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8500)
#define CJACBFMGOLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D8150)
#define CJACBFMGOLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D8120)
#define CJACBFMGOLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8110)
#define CJACBFMGOLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D8260)
#define CJACBFMGOLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D8190)
#define CJACBFMGOLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D83C0)
#define CJACBFMGOLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D80D0)
#define CJACBFMGOLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D84B0)
#define CJACBFMGOLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D8480)
#define CJACBFMGOLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8100)
#define CJACBFMGOLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D83F0)
#define CJACBFMGOLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D8450)

inline static constexpr unsigned int CJACBFMGOLK_TypeDefinitionIndex = 33529;

	class CJACBFMGOLK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CJACBFMGOLK")->GetStaticField(0x18AD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJACBFMGOLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJACBFMGOLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJACBFMGOLK*))((::PBYTE)hIl2Cpp + CJACBFMGOLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJACBFMGOLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CJACBFMGOLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJACBFMGOLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJACBFMGOLK* Clone()
		{
			return ((::CJACBFMGOLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJACBFMGOLK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJACBFMGOLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJACBFMGOLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJACBFMGOLK*))((::PBYTE)hIl2Cpp + CJACBFMGOLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJACBFMGOLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJACBFMGOLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJACBFMGOLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJACBFMGOLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJACBFMGOLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJACBFMGOLK*))((::PBYTE)hIl2Cpp + CJACBFMGOLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJACBFMGOLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
