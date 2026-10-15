#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKJACADHCCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKJACADHCCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0BE5C0)
#define CKJACADHCCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BE660)
#define CKJACADHCCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0BE2B0)
#define CKJACADHCCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0BE280)
#define CKJACADHCCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BE270)
#define CKJACADHCCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0BE3C0)
#define CKJACADHCCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0BE2F0)
#define CKJACADHCCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0BE520)
#define CKJACADHCCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0BE230)
#define CKJACADHCCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0BE610)
#define CKJACADHCCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0BE5E0)
#define CKJACADHCCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0BE260)
#define CKJACADHCCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0BE550)
#define CKJACADHCCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0BE5B0)

inline static constexpr unsigned int CKJACADHCCC_TypeDefinitionIndex = 26282;

	class CKJACADHCCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CKJACADHCCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKJACADHCCC*>**)UnitySDK::FromName("", "CKJACADHCCC")->GetStaticField(0x19670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJACADHCCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKJACADHCCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKJACADHCCC*))((::PBYTE)hIl2Cpp + CKJACADHCCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKJACADHCCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKJACADHCCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKJACADHCCC*>*(*)())((::PBYTE)hIl2Cpp + CKJACADHCCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJACADHCCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKJACADHCCC* Clone()
		{
			return ((::CKJACADHCCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJACADHCCC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKJACADHCCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKJACADHCCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKJACADHCCC*))((::PBYTE)hIl2Cpp + CKJACADHCCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJACADHCCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJACADHCCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKJACADHCCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJACADHCCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKJACADHCCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKJACADHCCC*))((::PBYTE)hIl2Cpp + CKJACADHCCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKJACADHCCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
