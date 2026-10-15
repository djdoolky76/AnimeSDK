#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCOHBABCHAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCOHBABCHAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07E120)
#define CCOHBABCHAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07E380)
#define CCOHBABCHAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07DCD0)
#define CCOHBABCHAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07DC90)
#define CCOHBABCHAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07DC80)
#define CCOHBABCHAI_EFKHHBGHGJB_OFFSET UNITYSDK_OFFSET(0x1E07DD50)
#define CCOHBABCHAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07DEA0)
#define CCOHBABCHAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07DD90)
#define CCOHBABCHAI_GBGNIKMAJFC_OFFSET UNITYSDK_OFFSET(0x1E07DD70)
#define CCOHBABCHAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07DF80)
#define CCOHBABCHAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07DC10)
#define CCOHBABCHAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07E200)
#define CCOHBABCHAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07E1C0)
#define CCOHBABCHAI_OPKOAGPPLFE_OFFSET UNITYSDK_OFFSET(0x1E07DD80)
#define CCOHBABCHAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07DC70)
#define CCOHBABCHAI_PLIFNPOFPFC_OFFSET UNITYSDK_OFFSET(0x1E07DD60)
#define CCOHBABCHAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07DFB0)
#define CCOHBABCHAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07E010)

inline static constexpr unsigned int CCOHBABCHAI_TypeDefinitionIndex = 31097;

	class CCOHBABCHAI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBJBHPGLNHB; // 0x18
		::System::Boolean FMCGGMIHHDK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CCOHBABCHAI")->GetStaticField(0xE8C0);
		}

		// static const ::System::Object HOICJCFBAGA; // 0x0
		// static const ::System::Object DEFMCBCCKEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCOHBABCHAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCOHBABCHAI*))((::PBYTE)hIl2Cpp + CCOHBABCHAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOHBABCHAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CCOHBABCHAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCOHBABCHAI* Clone()
		{
			return ((::CCOHBABCHAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI_CLONE_OFFSET))(this);
		}

		::System::Boolean EFKHHBGHGJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI_EFKHHBGHGJB_OFFSET))(this);
		}

		::System::Void PLIFNPOFPFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCOHBABCHAI_PLIFNPOFPFC_OFFSET))(this, a1);
		}

		::System::UInt32 GBGNIKMAJFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI_GBGNIKMAJFC_OFFSET))(this);
		}

		::System::Void OPKOAGPPLFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCOHBABCHAI_OPKOAGPPLFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCOHBABCHAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCOHBABCHAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCOHBABCHAI*))((::PBYTE)hIl2Cpp + CCOHBABCHAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCOHBABCHAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCOHBABCHAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCOHBABCHAI*))((::PBYTE)hIl2Cpp + CCOHBABCHAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCOHBABCHAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
