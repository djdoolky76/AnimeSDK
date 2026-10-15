#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOMDFDFEGDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOMDFDFEGDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E886CF0)
#define KOMDFDFEGDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E886F10)
#define KOMDFDFEGDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E886940)
#define KOMDFDFEGDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E886910)
#define KOMDFDFEGDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E886900)
#define KOMDFDFEGDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E886A70)
#define KOMDFDFEGDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8869A0)
#define KOMDFDFEGDN_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1E886980)
#define KOMDFDFEGDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E886BE0)
#define KOMDFDFEGDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8868C0)
#define KOMDFDFEGDN_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1E886990)
#define KOMDFDFEGDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E886DB0)
#define KOMDFDFEGDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E886D80)
#define KOMDFDFEGDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8868F0)
#define KOMDFDFEGDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E886C10)
#define KOMDFDFEGDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E886C70)

inline static constexpr unsigned int KOMDFDFEGDN_TypeDefinitionIndex = 32140;

	class KOMDFDFEGDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KOMDFDFEGDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOMDFDFEGDN*>**)UnitySDK::FromName("", "KOMDFDFEGDN")->GetStaticField(0x218F0);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOMDFDFEGDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOMDFDFEGDN*))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOMDFDFEGDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KOMDFDFEGDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOMDFDFEGDN*>*(*)())((::PBYTE)hIl2Cpp + KOMDFDFEGDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOMDFDFEGDN* Clone()
		{
			return ((::KOMDFDFEGDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOMDFDFEGDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOMDFDFEGDN*))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOMDFDFEGDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOMDFDFEGDN*))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOMDFDFEGDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
