#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGNKGGAIGBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGNKGGAIGBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF83770)
#define EGNKGGAIGBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF83810)
#define EGNKGGAIGBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF83460)
#define EGNKGGAIGBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF83430)
#define EGNKGGAIGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF83420)
#define EGNKGGAIGBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF83570)
#define EGNKGGAIGBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF834A0)
#define EGNKGGAIGBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF836D0)
#define EGNKGGAIGBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF833E0)
#define EGNKGGAIGBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF837C0)
#define EGNKGGAIGBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF83790)
#define EGNKGGAIGBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF83410)
#define EGNKGGAIGBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF83700)
#define EGNKGGAIGBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF83760)

inline static constexpr unsigned int EGNKGGAIGBJ_TypeDefinitionIndex = 33359;

	class EGNKGGAIGBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EGNKGGAIGBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGNKGGAIGBJ*>**)UnitySDK::FromName("", "EGNKGGAIGBJ")->GetStaticField(0x3BBA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGNKGGAIGBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGNKGGAIGBJ*))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGNKGGAIGBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGNKGGAIGBJ*>*(*)())((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGNKGGAIGBJ* Clone()
		{
			return ((::EGNKGGAIGBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGNKGGAIGBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGNKGGAIGBJ*))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGNKGGAIGBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGNKGGAIGBJ*))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
