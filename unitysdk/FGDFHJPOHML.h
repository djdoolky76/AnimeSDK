#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGDFHJPOHML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGDFHJPOHML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E37AAF0)
#define FGDFHJPOHML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37AD10)
#define FGDFHJPOHML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E37A740)
#define FGDFHJPOHML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E37A710)
#define FGDFHJPOHML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37A700)
#define FGDFHJPOHML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E37A870)
#define FGDFHJPOHML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E37A7A0)
#define FGDFHJPOHML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E37A9E0)
#define FGDFHJPOHML_GIHLMAIBCFP_OFFSET UNITYSDK_OFFSET(0x1E37A780)
#define FGDFHJPOHML_GPOBHDMPPHN_OFFSET UNITYSDK_OFFSET(0x1E37A790)
#define FGDFHJPOHML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E37A6C0)
#define FGDFHJPOHML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E37ABB0)
#define FGDFHJPOHML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E37AB80)
#define FGDFHJPOHML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E37A6F0)
#define FGDFHJPOHML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E37AA10)
#define FGDFHJPOHML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E37AA70)

inline static constexpr unsigned int FGDFHJPOHML_TypeDefinitionIndex = 31155;

	class FGDFHJPOHML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BFBCDJEFBLH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FGDFHJPOHML")->GetStaticField(0x5E2F0);
		}

		// static const ::System::Object CGBCGHFIIHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGDFHJPOHML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGDFHJPOHML*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGDFHJPOHML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FGDFHJPOHML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGDFHJPOHML* Clone()
		{
			return ((::FGDFHJPOHML*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_CLONE_OFFSET))(this);
		}

		::System::UInt32 GIHLMAIBCFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_GIHLMAIBCFP_OFFSET))(this);
		}

		::System::Void GPOBHDMPPHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDFHJPOHML_GPOBHDMPPHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGDFHJPOHML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGDFHJPOHML*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGDFHJPOHML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGDFHJPOHML*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGDFHJPOHML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
