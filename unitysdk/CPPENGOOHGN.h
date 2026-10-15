#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPPENGOOHGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPPENGOOHGN_BLPCGILJNJF_OFFSET UNITYSDK_OFFSET(0x1E146E00)
#define CPPENGOOHGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1471A0)
#define CPPENGOOHGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1473C0)
#define CPPENGOOHGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E146D90)
#define CPPENGOOHGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E146D60)
#define CPPENGOOHGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E146D50)
#define CPPENGOOHGN_DIPAJKCFDAI_OFFSET UNITYSDK_OFFSET(0x1E146E10)
#define CPPENGOOHGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E146F20)
#define CPPENGOOHGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E146E20)
#define CPPENGOOHGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E147090)
#define CPPENGOOHGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E146CE0)
#define CPPENGOOHGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E147260)
#define CPPENGOOHGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E147230)
#define CPPENGOOHGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E146D40)
#define CPPENGOOHGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1470C0)
#define CPPENGOOHGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E147120)

inline static constexpr unsigned int CPPENGOOHGN_TypeDefinitionIndex = 33491;

	class CPPENGOOHGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GCBCBDDBDJD; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPPENGOOHGN")->GetStaticField(0x23280);
		}

		// static const ::System::Object FNBJAAKFFBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPPENGOOHGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPPENGOOHGN*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPPENGOOHGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPPENGOOHGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPPENGOOHGN* Clone()
		{
			return ((::CPPENGOOHGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLPCGILJNJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_BLPCGILJNJF_OFFSET))(this);
		}

		::System::Void DIPAJKCFDAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPPENGOOHGN_DIPAJKCFDAI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPPENGOOHGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPPENGOOHGN*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPPENGOOHGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPPENGOOHGN*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
