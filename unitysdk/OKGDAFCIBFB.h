#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKGDAFCIBFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKGDAFCIBFB_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1DE6B810)
#define OKGDAFCIBFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6BB40)
#define OKGDAFCIBFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6BE10)
#define OKGDAFCIBFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6B790)
#define OKGDAFCIBFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6B760)
#define OKGDAFCIBFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B750)
#define OKGDAFCIBFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6B900)
#define OKGDAFCIBFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6B820)
#define OKGDAFCIBFB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE6B7F0)
#define OKGDAFCIBFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6B9D0)
#define OKGDAFCIBFB_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1DE6B800)
#define OKGDAFCIBFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE6B710)
#define OKGDAFCIBFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE6BC90)
#define OKGDAFCIBFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE6BC50)
#define OKGDAFCIBFB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE6B7E0)
#define OKGDAFCIBFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B740)
#define OKGDAFCIBFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6BA00)
#define OKGDAFCIBFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6BA60)

inline static constexpr unsigned int OKGDAFCIBFB_TypeDefinitionIndex = 33740;

	class OKGDAFCIBFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MDHELICKNPE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OKGDAFCIBFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKGDAFCIBFB*>**)UnitySDK::FromName("", "OKGDAFCIBFB")->GetStaticField(0x1F260);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKGDAFCIBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKGDAFCIBFB*))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKGDAFCIBFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKGDAFCIBFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKGDAFCIBFB*>*(*)())((::PBYTE)hIl2Cpp + OKGDAFCIBFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKGDAFCIBFB* Clone()
		{
			return ((::OKGDAFCIBFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKGDAFCIBFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKGDAFCIBFB*))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKGDAFCIBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKGDAFCIBFB*))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKGDAFCIBFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
