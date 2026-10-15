#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDOKCLHEDBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDOKCLHEDBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05EF90)
#define CDOKCLHEDBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05F1B0)
#define CDOKCLHEDBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E05EBE0)
#define CDOKCLHEDBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05EBB0)
#define CDOKCLHEDBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05EBA0)
#define CDOKCLHEDBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05ED10)
#define CDOKCLHEDBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E05EC40)
#define CDOKCLHEDBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E05EC30)
#define CDOKCLHEDBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05EE80)
#define CDOKCLHEDBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E05EB60)
#define CDOKCLHEDBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05F050)
#define CDOKCLHEDBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05F020)
#define CDOKCLHEDBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E05EC20)
#define CDOKCLHEDBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05EB90)
#define CDOKCLHEDBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05EEB0)
#define CDOKCLHEDBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05EF10)

inline static constexpr unsigned int CDOKCLHEDBO_TypeDefinitionIndex = 32764;

	class CDOKCLHEDBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CDOKCLHEDBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDOKCLHEDBO*>**)UnitySDK::FromName("", "CDOKCLHEDBO")->GetStaticField(0xF740);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDOKCLHEDBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDOKCLHEDBO*))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDOKCLHEDBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDOKCLHEDBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDOKCLHEDBO*>*(*)())((::PBYTE)hIl2Cpp + CDOKCLHEDBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDOKCLHEDBO* Clone()
		{
			return ((::CDOKCLHEDBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDOKCLHEDBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDOKCLHEDBO*))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDOKCLHEDBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDOKCLHEDBO*))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDOKCLHEDBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
