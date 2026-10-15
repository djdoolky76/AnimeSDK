#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMLNJOPALPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMLNJOPALPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFFEF10)
#define BMLNJOPALPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFF130)
#define BMLNJOPALPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFFEB60)
#define BMLNJOPALPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFFEB30)
#define BMLNJOPALPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFEB20)
#define BMLNJOPALPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFFEC90)
#define BMLNJOPALPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFFEBC0)
#define BMLNJOPALPJ_FAMGHDLEDLP_OFFSET UNITYSDK_OFFSET(0x1DFFEBB0)
#define BMLNJOPALPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFFEE00)
#define BMLNJOPALPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFFEAE0)
#define BMLNJOPALPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFFEFD0)
#define BMLNJOPALPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFFEFA0)
#define BMLNJOPALPJ_MHFBDNGECAE_OFFSET UNITYSDK_OFFSET(0x1DFFEBA0)
#define BMLNJOPALPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFFEB10)
#define BMLNJOPALPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFFEE30)
#define BMLNJOPALPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFFEE90)

inline static constexpr unsigned int BMLNJOPALPJ_TypeDefinitionIndex = 34942;

	class BMLNJOPALPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAAGBFNNOKM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BMLNJOPALPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMLNJOPALPJ*>**)UnitySDK::FromName("", "BMLNJOPALPJ")->GetStaticField(0x5D050);
		}

		// static const ::System::Object BAOPMJAPINI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMLNJOPALPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMLNJOPALPJ*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMLNJOPALPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMLNJOPALPJ*>*(*)())((::PBYTE)hIl2Cpp + BMLNJOPALPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMLNJOPALPJ* Clone()
		{
			return ((::BMLNJOPALPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHFBDNGECAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_MHFBDNGECAE_OFFSET))(this);
		}

		::System::Void FAMGHDLEDLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_FAMGHDLEDLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMLNJOPALPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMLNJOPALPJ*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMLNJOPALPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMLNJOPALPJ*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
