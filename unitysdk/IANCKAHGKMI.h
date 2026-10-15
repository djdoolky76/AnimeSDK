#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IANCKAHGKMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IANCKAHGKMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6099F0)
#define IANCKAHGKMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E609C10)
#define IANCKAHGKMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E609640)
#define IANCKAHGKMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E609610)
#define IANCKAHGKMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E609600)
#define IANCKAHGKMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E609770)
#define IANCKAHGKMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6096A0)
#define IANCKAHGKMI_FIJOHEPNODN_OFFSET UNITYSDK_OFFSET(0x1E609690)
#define IANCKAHGKMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6098E0)
#define IANCKAHGKMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6095C0)
#define IANCKAHGKMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E609AB0)
#define IANCKAHGKMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E609A80)
#define IANCKAHGKMI_MOKPFIJCDLD_OFFSET UNITYSDK_OFFSET(0x1E609680)
#define IANCKAHGKMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6095F0)
#define IANCKAHGKMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E609910)
#define IANCKAHGKMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E609970)

inline static constexpr unsigned int IANCKAHGKMI_TypeDefinitionIndex = 34162;

	class IANCKAHGKMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AIMBCOMFKMN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IANCKAHGKMI")->GetStaticField(0x3FCF0);
		}

		// static const ::System::Object CFBDEAHMPKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IANCKAHGKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IANCKAHGKMI*))((::PBYTE)hIl2Cpp + IANCKAHGKMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANCKAHGKMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IANCKAHGKMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IANCKAHGKMI* Clone()
		{
			return ((::IANCKAHGKMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 MOKPFIJCDLD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI_MOKPFIJCDLD_OFFSET))(this);
		}

		::System::Void FIJOHEPNODN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IANCKAHGKMI_FIJOHEPNODN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IANCKAHGKMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IANCKAHGKMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IANCKAHGKMI*))((::PBYTE)hIl2Cpp + IANCKAHGKMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IANCKAHGKMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IANCKAHGKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IANCKAHGKMI*))((::PBYTE)hIl2Cpp + IANCKAHGKMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IANCKAHGKMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
