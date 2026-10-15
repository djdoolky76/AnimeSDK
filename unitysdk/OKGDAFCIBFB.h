#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKGDAFCIBFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKGDAFCIBFB_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1DE98EF0)
#define OKGDAFCIBFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE99220)
#define OKGDAFCIBFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE994F0)
#define OKGDAFCIBFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE98E70)
#define OKGDAFCIBFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE98E40)
#define OKGDAFCIBFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE98E30)
#define OKGDAFCIBFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE98FE0)
#define OKGDAFCIBFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE98F00)
#define OKGDAFCIBFB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE98ED0)
#define OKGDAFCIBFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE990B0)
#define OKGDAFCIBFB_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1DE98EE0)
#define OKGDAFCIBFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE98DF0)
#define OKGDAFCIBFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE99370)
#define OKGDAFCIBFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE99330)
#define OKGDAFCIBFB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE98EC0)
#define OKGDAFCIBFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE98E20)
#define OKGDAFCIBFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE990E0)
#define OKGDAFCIBFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE99140)

inline static constexpr unsigned int OKGDAFCIBFB_TypeDefinitionIndex = 33740;

	class OKGDAFCIBFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 MDHELICKNPE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OKGDAFCIBFB")->GetStaticField(0x22310);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OKGDAFCIBFB_JJGHOBBFNJD_OFFSET))();
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
