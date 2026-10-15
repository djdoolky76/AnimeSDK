#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEIJPEJBDDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEIJPEJBDDH_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E33A410)
#define FEIJPEJBDDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E33A7C0)
#define FEIJPEJBDDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33AA00)
#define FEIJPEJBDDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E33A390)
#define FEIJPEJBDDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E33A360)
#define FEIJPEJBDDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33A350)
#define FEIJPEJBDDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E33A520)
#define FEIJPEJBDDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E33A420)
#define FEIJPEJBDDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E33A690)
#define FEIJPEJBDDH_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E33A400)
#define FEIJPEJBDDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E33A2E0)
#define FEIJPEJBDDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E33A8A0)
#define FEIJPEJBDDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E33A870)
#define FEIJPEJBDDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E33A340)
#define FEIJPEJBDDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E33A6C0)
#define FEIJPEJBDDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E33A720)

inline static constexpr unsigned int FEIJPEJBDDH_TypeDefinitionIndex = 32926;

	class FEIJPEJBDDH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 BFOBOOGAHKB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FEIJPEJBDDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEIJPEJBDDH*>**)UnitySDK::FromName("", "FEIJPEJBDDH")->GetStaticField(0x53D90);
		}

		// static const ::System::Object HOHDLIKKMBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEIJPEJBDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEIJPEJBDDH*))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEIJPEJBDDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FEIJPEJBDDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FEIJPEJBDDH*>*(*)())((::PBYTE)hIl2Cpp + FEIJPEJBDDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEIJPEJBDDH* Clone()
		{
			return ((::FEIJPEJBDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_CLONE_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEIJPEJBDDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEIJPEJBDDH*))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEIJPEJBDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEIJPEJBDDH*))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEIJPEJBDDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
