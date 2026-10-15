#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDNKNBPNOKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDNKNBPNOKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E631AF0)
#define IDNKNBPNOKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E631D10)
#define IDNKNBPNOKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E631740)
#define IDNKNBPNOKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E631710)
#define IDNKNBPNOKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E631700)
#define IDNKNBPNOKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E631870)
#define IDNKNBPNOKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6317A0)
#define IDNKNBPNOKL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E631790)
#define IDNKNBPNOKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6319E0)
#define IDNKNBPNOKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6316C0)
#define IDNKNBPNOKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E631BB0)
#define IDNKNBPNOKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E631B80)
#define IDNKNBPNOKL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E631780)
#define IDNKNBPNOKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6316F0)
#define IDNKNBPNOKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E631A10)
#define IDNKNBPNOKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E631A70)

inline static constexpr unsigned int IDNKNBPNOKL_TypeDefinitionIndex = 30586;

	class IDNKNBPNOKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IDNKNBPNOKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDNKNBPNOKL*>**)UnitySDK::FromName("", "IDNKNBPNOKL")->GetStaticField(0x472D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDNKNBPNOKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDNKNBPNOKL*))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDNKNBPNOKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDNKNBPNOKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDNKNBPNOKL*>*(*)())((::PBYTE)hIl2Cpp + IDNKNBPNOKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDNKNBPNOKL* Clone()
		{
			return ((::IDNKNBPNOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDNKNBPNOKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDNKNBPNOKL*))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDNKNBPNOKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDNKNBPNOKL*))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDNKNBPNOKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
