#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COAKAAHCAJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COAKAAHCAJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204D9000)
#define COAKAAHCAJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x204D92D0)
#define COAKAAHCAJO_CLONE_OFFSET UNITYSDK_OFFSET(0x204D8C50)
#define COAKAAHCAJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204D8C20)
#define COAKAAHCAJO_CTOR_OFFSET UNITYSDK_OFFSET(0x204D8C10)
#define COAKAAHCAJO_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x204D8CC0)
#define COAKAAHCAJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204D8DC0)
#define COAKAAHCAJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x204D8CE0)
#define COAKAAHCAJO_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x204D8CD0)
#define COAKAAHCAJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204D8E90)
#define COAKAAHCAJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204D8BD0)
#define COAKAAHCAJO_LNGEKHMJCHJ_OFFSET UNITYSDK_OFFSET(0x204D8CB0)
#define COAKAAHCAJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204D9150)
#define COAKAAHCAJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204D9110)
#define COAKAAHCAJO_NCBLPDPCKBI_OFFSET UNITYSDK_OFFSET(0x204D8CA0)
#define COAKAAHCAJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204D8C00)
#define COAKAAHCAJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204D8EC0)
#define COAKAAHCAJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x204D8F20)

inline static constexpr unsigned int COAKAAHCAJO_TypeDefinitionIndex = 32353;

	class COAKAAHCAJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDKAAEKCFOG; // 0x18
		::System::UInt32 NIAOPCJHKCG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::COAKAAHCAJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::COAKAAHCAJO*>**)UnitySDK::FromName("", "COAKAAHCAJO")->GetStaticField(0x172F0);
		}

		// static const ::System::Object PMEIEMBGLCB; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAAHCAJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COAKAAHCAJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COAKAAHCAJO*))((::PBYTE)hIl2Cpp + COAKAAHCAJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COAKAAHCAJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::COAKAAHCAJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::COAKAAHCAJO*>*(*)())((::PBYTE)hIl2Cpp + COAKAAHCAJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAAHCAJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COAKAAHCAJO* Clone()
		{
			return ((::COAKAAHCAJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAAHCAJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 NCBLPDPCKBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAAHCAJO_NCBLPDPCKBI_OFFSET))(this);
		}

		::System::Void LNGEKHMJCHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + COAKAAHCAJO_LNGEKHMJCHJ_OFFSET))(this, a1);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAAHCAJO_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + COAKAAHCAJO_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COAKAAHCAJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COAKAAHCAJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COAKAAHCAJO*))((::PBYTE)hIl2Cpp + COAKAAHCAJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAAHCAJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAAHCAJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COAKAAHCAJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAAHCAJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COAKAAHCAJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COAKAAHCAJO*))((::PBYTE)hIl2Cpp + COAKAAHCAJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COAKAAHCAJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
