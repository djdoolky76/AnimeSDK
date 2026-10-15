#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGKDADFBMPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGKDADFBMPL_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1EA4D4C0)
#define BGKDADFBMPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA4D830)
#define BGKDADFBMPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4DA50)
#define BGKDADFBMPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA4D480)
#define BGKDADFBMPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA4D450)
#define BGKDADFBMPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4D440)
#define BGKDADFBMPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA4D5B0)
#define BGKDADFBMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA4D4E0)
#define BGKDADFBMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA4D720)
#define BGKDADFBMPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA4D400)
#define BGKDADFBMPL_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1EA4D4D0)
#define BGKDADFBMPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA4D8F0)
#define BGKDADFBMPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA4D8C0)
#define BGKDADFBMPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA4D430)
#define BGKDADFBMPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA4D750)
#define BGKDADFBMPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA4D7B0)

inline static constexpr unsigned int BGKDADFBMPL_TypeDefinitionIndex = 34331;

	class BGKDADFBMPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FOBLPJCIGJE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BGKDADFBMPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGKDADFBMPL*>**)UnitySDK::FromName("", "BGKDADFBMPL")->GetStaticField(0x55310);
		}

		// static const ::System::Object NOBLDDEFEKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGKDADFBMPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGKDADFBMPL*))((::PBYTE)hIl2Cpp + BGKDADFBMPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGKDADFBMPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGKDADFBMPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGKDADFBMPL*>*(*)())((::PBYTE)hIl2Cpp + BGKDADFBMPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGKDADFBMPL* Clone()
		{
			return ((::BGKDADFBMPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGKDADFBMPL_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGKDADFBMPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGKDADFBMPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGKDADFBMPL*))((::PBYTE)hIl2Cpp + BGKDADFBMPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGKDADFBMPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGKDADFBMPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGKDADFBMPL*))((::PBYTE)hIl2Cpp + BGKDADFBMPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGKDADFBMPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
