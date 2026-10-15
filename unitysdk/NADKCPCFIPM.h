#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NADKCPCFIPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NADKCPCFIPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA917F0)
#define NADKCPCFIPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA91A10)
#define NADKCPCFIPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA91440)
#define NADKCPCFIPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA91410)
#define NADKCPCFIPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA91400)
#define NADKCPCFIPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA91570)
#define NADKCPCFIPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA914A0)
#define NADKCPCFIPM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA91490)
#define NADKCPCFIPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA916E0)
#define NADKCPCFIPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA913C0)
#define NADKCPCFIPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA918B0)
#define NADKCPCFIPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA91880)
#define NADKCPCFIPM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA91480)
#define NADKCPCFIPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA913F0)
#define NADKCPCFIPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA91710)
#define NADKCPCFIPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA91770)

inline static constexpr unsigned int NADKCPCFIPM_TypeDefinitionIndex = 33561;

	class NADKCPCFIPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NADKCPCFIPM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NADKCPCFIPM*>**)UnitySDK::FromName("", "NADKCPCFIPM")->GetStaticField(0x5C800);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NADKCPCFIPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NADKCPCFIPM*))((::PBYTE)hIl2Cpp + NADKCPCFIPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NADKCPCFIPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NADKCPCFIPM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NADKCPCFIPM*>*(*)())((::PBYTE)hIl2Cpp + NADKCPCFIPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NADKCPCFIPM* Clone()
		{
			return ((::NADKCPCFIPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NADKCPCFIPM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NADKCPCFIPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NADKCPCFIPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NADKCPCFIPM*))((::PBYTE)hIl2Cpp + NADKCPCFIPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NADKCPCFIPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NADKCPCFIPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NADKCPCFIPM*))((::PBYTE)hIl2Cpp + NADKCPCFIPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NADKCPCFIPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
