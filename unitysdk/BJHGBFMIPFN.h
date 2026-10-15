#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHGBFMIPFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJHGBFMIPFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE0BA10)
#define BJHGBFMIPFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0BC30)
#define BJHGBFMIPFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE0B660)
#define BJHGBFMIPFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE0B630)
#define BJHGBFMIPFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0B620)
#define BJHGBFMIPFN_EDEEJIIPBNJ_OFFSET UNITYSDK_OFFSET(0x1DE0B6A0)
#define BJHGBFMIPFN_EPEBIKBFCIK_OFFSET UNITYSDK_OFFSET(0x1DE0B6B0)
#define BJHGBFMIPFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE0B790)
#define BJHGBFMIPFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE0B6C0)
#define BJHGBFMIPFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE0B900)
#define BJHGBFMIPFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE0B5E0)
#define BJHGBFMIPFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE0BAD0)
#define BJHGBFMIPFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE0BAA0)
#define BJHGBFMIPFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE0B610)
#define BJHGBFMIPFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE0B930)
#define BJHGBFMIPFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE0B990)

inline static constexpr unsigned int BJHGBFMIPFN_TypeDefinitionIndex = 31590;

	class BJHGBFMIPFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IEABCADMBBP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BJHGBFMIPFN")->GetStaticField(0x49400);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BJHGBFMIPFN_JJGHOBBFNJD_OFFSET))();
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
