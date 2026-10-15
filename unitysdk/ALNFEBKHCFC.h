#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALNFEBKHCFC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALNFEBKHCFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E513270)
#define ALNFEBKHCFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E513490)
#define ALNFEBKHCFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E512EC0)
#define ALNFEBKHCFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E512E90)
#define ALNFEBKHCFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E512E80)
#define ALNFEBKHCFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E512FF0)
#define ALNFEBKHCFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E512F20)
#define ALNFEBKHCFC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E512F10)
#define ALNFEBKHCFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E513160)
#define ALNFEBKHCFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E512E40)
#define ALNFEBKHCFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E513330)
#define ALNFEBKHCFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E513300)
#define ALNFEBKHCFC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E512F00)
#define ALNFEBKHCFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E512E70)
#define ALNFEBKHCFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E513190)
#define ALNFEBKHCFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5131F0)

inline static constexpr unsigned int ALNFEBKHCFC_TypeDefinitionIndex = 29356;

	class ALNFEBKHCFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALNFEBKHCFC")->GetStaticField(0x39F60);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALNFEBKHCFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNFEBKHCFC*))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALNFEBKHCFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALNFEBKHCFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALNFEBKHCFC* Clone()
		{
			return ((::ALNFEBKHCFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALNFEBKHCFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALNFEBKHCFC*))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALNFEBKHCFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNFEBKHCFC*))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALNFEBKHCFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
