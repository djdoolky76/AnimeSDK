#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDGBPNABNKL;
class NMHHIBMCJHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDGBPNABNKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F80D0)
#define LDGBPNABNKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F84A0)
#define LDGBPNABNKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F7B80)
#define LDGBPNABNKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F7B10)
#define LDGBPNABNKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7B00)
#define LDGBPNABNKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F7DC0)
#define LDGBPNABNKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F7C40)
#define LDGBPNABNKL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8F7C30)
#define LDGBPNABNKL_FJFMPKDONJF_OFFSET UNITYSDK_OFFSET(0x1E8F7C10)
#define LDGBPNABNKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F7F40)
#define LDGBPNABNKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F7AC0)
#define LDGBPNABNKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F82C0)
#define LDGBPNABNKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F81A0)
#define LDGBPNABNKL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8F7C20)
#define LDGBPNABNKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7AF0)
#define LDGBPNABNKL_PNHHCFDBIBF_OFFSET UNITYSDK_OFFSET(0x1E8F7C00)
#define LDGBPNABNKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F7F90)
#define LDGBPNABNKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F7FF0)

inline static constexpr unsigned int LDGBPNABNKL_TypeDefinitionIndex = 31442;

	class LDGBPNABNKL : public ::System::Object
	{
	public:
		::NMHHIBMCJHI* CEPGCMBOKOH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LDGBPNABNKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDGBPNABNKL*>**)UnitySDK::FromName("", "LDGBPNABNKL")->GetStaticField(0x34050);
		}

		// static const ::System::Object BKOEOFFCIOB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDGBPNABNKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDGBPNABNKL*))((::PBYTE)hIl2Cpp + LDGBPNABNKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDGBPNABNKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDGBPNABNKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDGBPNABNKL*>*(*)())((::PBYTE)hIl2Cpp + LDGBPNABNKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDGBPNABNKL* Clone()
		{
			return ((::LDGBPNABNKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL_CLONE_OFFSET))(this);
		}

		::NMHHIBMCJHI* PNHHCFDBIBF()
		{
			return ((::NMHHIBMCJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL_PNHHCFDBIBF_OFFSET))(this);
		}

		::System::Void FJFMPKDONJF(::NMHHIBMCJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHHIBMCJHI*))((::PBYTE)hIl2Cpp + LDGBPNABNKL_FJFMPKDONJF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDGBPNABNKL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDGBPNABNKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDGBPNABNKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDGBPNABNKL*))((::PBYTE)hIl2Cpp + LDGBPNABNKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDGBPNABNKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDGBPNABNKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDGBPNABNKL*))((::PBYTE)hIl2Cpp + LDGBPNABNKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDGBPNABNKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
