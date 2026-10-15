#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGIELNDDHPA;
class KBCHOKFHHIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGIELNDDHPA_AMONAKNHNPL_OFFSET UNITYSDK_OFFSET(0x1E57AAA0)
#define HGIELNDDHPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57B000)
#define HGIELNDDHPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57B3A0)
#define HGIELNDDHPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E57A9D0)
#define HGIELNDDHPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57A950)
#define HGIELNDDHPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57A940)
#define HGIELNDDHPA_EGBOLDOFOEM_OFFSET UNITYSDK_OFFSET(0x1E57AA90)
#define HGIELNDDHPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57AC80)
#define HGIELNDDHPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57AAD0)
#define HGIELNDDHPA_GDPHBHKKFBL_OFFSET UNITYSDK_OFFSET(0x1E57AAB0)
#define HGIELNDDHPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E57AE00)
#define HGIELNDDHPA_JFCPFEFKAIA_OFFSET UNITYSDK_OFFSET(0x1E57AAC0)
#define HGIELNDDHPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E57A8D0)
#define HGIELNDDHPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57B1B0)
#define HGIELNDDHPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E57B0D0)
#define HGIELNDDHPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E57A930)
#define HGIELNDDHPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57AEC0)
#define HGIELNDDHPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57AF20)

inline static constexpr unsigned int HGIELNDDHPA_TypeDefinitionIndex = 25734;

	class HGIELNDDHPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KBCHOKFHHIH* BAKJGGCPGHE; // 0x18
		::System::UInt32 IHODDKNKKOM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HGIELNDDHPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGIELNDDHPA*>**)UnitySDK::FromName("", "HGIELNDDHPA")->GetStaticField(0x37580);
		}

		// static const ::System::Object AKDGEBMBHAM; // 0x0
		// static const ::System::Object IKHAIHFIMBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGIELNDDHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGIELNDDHPA*))((::PBYTE)hIl2Cpp + HGIELNDDHPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGIELNDDHPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HGIELNDDHPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGIELNDDHPA*>*(*)())((::PBYTE)hIl2Cpp + HGIELNDDHPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGIELNDDHPA* Clone()
		{
			return ((::HGIELNDDHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGBOLDOFOEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA_EGBOLDOFOEM_OFFSET))(this);
		}

		::System::Void AMONAKNHNPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGIELNDDHPA_AMONAKNHNPL_OFFSET))(this, a1);
		}

		::KBCHOKFHHIH* GDPHBHKKFBL()
		{
			return ((::KBCHOKFHHIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA_GDPHBHKKFBL_OFFSET))(this);
		}

		::System::Void JFCPFEFKAIA(::KBCHOKFHHIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBCHOKFHHIH*))((::PBYTE)hIl2Cpp + HGIELNDDHPA_JFCPFEFKAIA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGIELNDDHPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGIELNDDHPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGIELNDDHPA*))((::PBYTE)hIl2Cpp + HGIELNDDHPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGIELNDDHPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGIELNDDHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGIELNDDHPA*))((::PBYTE)hIl2Cpp + HGIELNDDHPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGIELNDDHPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
