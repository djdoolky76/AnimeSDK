#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMLLDKHEDCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMLLDKHEDCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA8EA50)
#define MMLLDKHEDCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8EAF0)
#define MMLLDKHEDCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA8E740)
#define MMLLDKHEDCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA8E710)
#define MMLLDKHEDCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8E700)
#define MMLLDKHEDCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA8E850)
#define MMLLDKHEDCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA8E780)
#define MMLLDKHEDCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA8E9B0)
#define MMLLDKHEDCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA8E6C0)
#define MMLLDKHEDCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA8EAA0)
#define MMLLDKHEDCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA8EA70)
#define MMLLDKHEDCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA8E6F0)
#define MMLLDKHEDCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA8E9E0)
#define MMLLDKHEDCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA8EA40)

inline static constexpr unsigned int MMLLDKHEDCJ_TypeDefinitionIndex = 31181;

	class MMLLDKHEDCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MMLLDKHEDCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMLLDKHEDCJ*>**)UnitySDK::FromName("", "MMLLDKHEDCJ")->GetStaticField(0x590C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMLLDKHEDCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMLLDKHEDCJ*))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMLLDKHEDCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMLLDKHEDCJ*>*(*)())((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMLLDKHEDCJ* Clone()
		{
			return ((::MMLLDKHEDCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMLLDKHEDCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMLLDKHEDCJ*))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMLLDKHEDCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMLLDKHEDCJ*))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
