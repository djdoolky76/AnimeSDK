#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJFIEPMMGG;
class PKOHBLEGMAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKOHBLEGMAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4A2AF0)
#define PKOHBLEGMAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4A2D00)
#define PKOHBLEGMAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4998F0)
#define PKOHBLEGMAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4A2530)
#define PKOHBLEGMAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49F110)
#define PKOHBLEGMAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4A2730)
#define PKOHBLEGMAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4A25C0)
#define PKOHBLEGMAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F49C1F0)
#define PKOHBLEGMAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4A24F0)
#define PKOHBLEGMAO_KECIECOKPEE_OFFSET UNITYSDK_OFFSET(0x1F4A25B0)
#define PKOHBLEGMAO_LOPBOHCNNDN_OFFSET UNITYSDK_OFFSET(0x1F4A25A0)
#define PKOHBLEGMAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4A2B50)
#define PKOHBLEGMAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F49F120)
#define PKOHBLEGMAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4A2520)
#define PKOHBLEGMAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4A2A00)
#define PKOHBLEGMAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4A2A60)

inline static constexpr unsigned int PKOHBLEGMAO_TypeDefinitionIndex = 33935;

	class PKOHBLEGMAO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LEJFIEPMMGG* GPBPLBBDMKA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PKOHBLEGMAO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKOHBLEGMAO*>**)UnitySDK::FromName("", "PKOHBLEGMAO")->GetStaticField(0x43300);
		}

		// static const ::System::Object FAOPLNDAAOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKOHBLEGMAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKOHBLEGMAO*))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOHBLEGMAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKOHBLEGMAO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKOHBLEGMAO*>*(*)())((::PBYTE)hIl2Cpp + PKOHBLEGMAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKOHBLEGMAO* Clone()
		{
			return ((::PKOHBLEGMAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_CLONE_OFFSET))(this);
		}

		::LEJFIEPMMGG* LOPBOHCNNDN()
		{
			return ((::LEJFIEPMMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_LOPBOHCNNDN_OFFSET))(this);
		}

		::System::Void KECIECOKPEE(::LEJFIEPMMGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJFIEPMMGG*))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_KECIECOKPEE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKOHBLEGMAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKOHBLEGMAO*))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKOHBLEGMAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKOHBLEGMAO*))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKOHBLEGMAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
