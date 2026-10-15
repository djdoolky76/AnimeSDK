#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJEHDBECIMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJEHDBECIMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E759D60)
#define JJEHDBECIMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E759F80)
#define JJEHDBECIMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7599B0)
#define JJEHDBECIMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E759980)
#define JJEHDBECIMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E759970)
#define JJEHDBECIMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E759AE0)
#define JJEHDBECIMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E759A10)
#define JJEHDBECIMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E759C50)
#define JJEHDBECIMM_GFEAPNGPHOA_OFFSET UNITYSDK_OFFSET(0x1E7599F0)
#define JJEHDBECIMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E759930)
#define JJEHDBECIMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E759E20)
#define JJEHDBECIMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E759DF0)
#define JJEHDBECIMM_MMBEIPCDJLD_OFFSET UNITYSDK_OFFSET(0x1E759A00)
#define JJEHDBECIMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E759960)
#define JJEHDBECIMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E759C80)
#define JJEHDBECIMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E759CE0)

inline static constexpr unsigned int JJEHDBECIMM_TypeDefinitionIndex = 28662;

	class JJEHDBECIMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DJNFIMCCECO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JJEHDBECIMM")->GetStaticField(0x64F80);
		}

		// static const ::System::Object MBEGDLOIIOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJEHDBECIMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJEHDBECIMM*))((::PBYTE)hIl2Cpp + JJEHDBECIMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJEHDBECIMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JJEHDBECIMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJEHDBECIMM* Clone()
		{
			return ((::JJEHDBECIMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 GFEAPNGPHOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM_GFEAPNGPHOA_OFFSET))(this);
		}

		::System::Void MMBEIPCDJLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJEHDBECIMM_MMBEIPCDJLD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJEHDBECIMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJEHDBECIMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJEHDBECIMM*))((::PBYTE)hIl2Cpp + JJEHDBECIMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJEHDBECIMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJEHDBECIMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJEHDBECIMM*))((::PBYTE)hIl2Cpp + JJEHDBECIMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJEHDBECIMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
