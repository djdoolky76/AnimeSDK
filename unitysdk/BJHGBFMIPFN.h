#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHGBFMIPFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJHGBFMIPFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDDE290)
#define BJHGBFMIPFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDE4B0)
#define BJHGBFMIPFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDDEE0)
#define BJHGBFMIPFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDDEB0)
#define BJHGBFMIPFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDDEA0)
#define BJHGBFMIPFN_EDEEJIIPBNJ_OFFSET UNITYSDK_OFFSET(0x1DDDDF20)
#define BJHGBFMIPFN_EPEBIKBFCIK_OFFSET UNITYSDK_OFFSET(0x1DDDDF30)
#define BJHGBFMIPFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDE010)
#define BJHGBFMIPFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDDF40)
#define BJHGBFMIPFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDE180)
#define BJHGBFMIPFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDDE60)
#define BJHGBFMIPFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDDE350)
#define BJHGBFMIPFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDDE320)
#define BJHGBFMIPFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDDE90)
#define BJHGBFMIPFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDE1B0)
#define BJHGBFMIPFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDE210)

inline static constexpr unsigned int BJHGBFMIPFN_TypeDefinitionIndex = 31590;

	class BJHGBFMIPFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IEABCADMBBP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BJHGBFMIPFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJHGBFMIPFN*>**)UnitySDK::FromName("", "BJHGBFMIPFN")->GetStaticField(0x597A0);
		}

		// static const ::System::Object GALENHJLDLE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJHGBFMIPFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHGBFMIPFN*))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJHGBFMIPFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJHGBFMIPFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJHGBFMIPFN*>*(*)())((::PBYTE)hIl2Cpp + BJHGBFMIPFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJHGBFMIPFN* Clone()
		{
			return ((::BJHGBFMIPFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EDEEJIIPBNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_EDEEJIIPBNJ_OFFSET))(this);
		}

		::System::Void EPEBIKBFCIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_EPEBIKBFCIK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJHGBFMIPFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJHGBFMIPFN*))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJHGBFMIPFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHGBFMIPFN*))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJHGBFMIPFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
