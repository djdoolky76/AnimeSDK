#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEBIIBBMNKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEBIIBBMNKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E556EB0)
#define HEBIIBBMNKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E557180)
#define HEBIIBBMNKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E556B00)
#define HEBIIBBMNKG_CMKOJMCOAOA_OFFSET UNITYSDK_OFFSET(0x1E556B70)
#define HEBIIBBMNKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E556AD0)
#define HEBIIBBMNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E556AC0)
#define HEBIIBBMNKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E556C70)
#define HEBIIBBMNKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E556B90)
#define HEBIIBBMNKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E556D40)
#define HEBIIBBMNKG_HLIODMGDCLP_OFFSET UNITYSDK_OFFSET(0x1E556B60)
#define HEBIIBBMNKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E556A80)
#define HEBIIBBMNKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E557000)
#define HEBIIBBMNKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E556FC0)
#define HEBIIBBMNKG_NNGGEBKCOHE_OFFSET UNITYSDK_OFFSET(0x1E556B80)
#define HEBIIBBMNKG_NNLHOOJGJKH_OFFSET UNITYSDK_OFFSET(0x1E556B50)
#define HEBIIBBMNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E556AB0)
#define HEBIIBBMNKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E556D70)
#define HEBIIBBMNKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E556DD0)

inline static constexpr unsigned int HEBIIBBMNKG_TypeDefinitionIndex = 26420;

	class HEBIIBBMNKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ALELBFOECKB; // 0x18
		::System::UInt32 BHKOGOBFOLA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HEBIIBBMNKG")->GetStaticField(0x329A0);
		}

		// static const ::System::Object HLOGIOLMMBK; // 0x0
		// static const ::System::Object KHLPONOEOPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HEBIIBBMNKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEBIIBBMNKG* Clone()
		{
			return ((::HEBIIBBMNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNLHOOJGJKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_NNLHOOJGJKH_OFFSET))(this);
		}

		::System::Void HLIODMGDCLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_HLIODMGDCLP_OFFSET))(this, a1);
		}

		::System::UInt32 CMKOJMCOAOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CMKOJMCOAOA_OFFSET))(this);
		}

		::System::Void NNGGEBKCOHE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_NNGGEBKCOHE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEBIIBBMNKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
