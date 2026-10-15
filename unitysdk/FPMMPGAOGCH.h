#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMMPGAOGCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPMMPGAOGCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E40E080)
#define FPMMPGAOGCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40E2A0)
#define FPMMPGAOGCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E40DCD0)
#define FPMMPGAOGCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E40DCA0)
#define FPMMPGAOGCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40DC90)
#define FPMMPGAOGCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E40DE00)
#define FPMMPGAOGCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E40DD30)
#define FPMMPGAOGCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E40DF70)
#define FPMMPGAOGCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E40DC50)
#define FPMMPGAOGCH_KCHHBGBJDGL_OFFSET UNITYSDK_OFFSET(0x1E40DD10)
#define FPMMPGAOGCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E40E140)
#define FPMMPGAOGCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E40E110)
#define FPMMPGAOGCH_OHLGNCALLME_OFFSET UNITYSDK_OFFSET(0x1E40DD20)
#define FPMMPGAOGCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E40DC80)
#define FPMMPGAOGCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E40DFA0)
#define FPMMPGAOGCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E40E000)

	class FPMMPGAOGCH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JDNLAIDFHHC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FPMMPGAOGCH")->GetStaticField(0x6B8F0);
		}

		// static const ::System::Object NACMENLJJLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPMMPGAOGCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPMMPGAOGCH*))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMMPGAOGCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FPMMPGAOGCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPMMPGAOGCH* Clone()
		{
			return ((::FPMMPGAOGCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_CLONE_OFFSET))(this);
		}

		::System::UInt32 KCHHBGBJDGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_KCHHBGBJDGL_OFFSET))(this);
		}

		::System::Void OHLGNCALLME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_OHLGNCALLME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPMMPGAOGCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPMMPGAOGCH*))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPMMPGAOGCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPMMPGAOGCH*))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPMMPGAOGCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
