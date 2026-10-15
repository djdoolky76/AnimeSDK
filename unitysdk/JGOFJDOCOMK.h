#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGOFJDOCOMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGOFJDOCOMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7117B0)
#define JGOFJDOCOMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7119D0)
#define JGOFJDOCOMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7113A0)
#define JGOFJDOCOMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E711370)
#define JGOFJDOCOMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E711360)
#define JGOFJDOCOMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E711530)
#define JGOFJDOCOMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E711430)
#define JGOFJDOCOMK_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E711410)
#define JGOFJDOCOMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7116A0)
#define JGOFJDOCOMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7112F0)
#define JGOFJDOCOMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E711870)
#define JGOFJDOCOMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E711840)
#define JGOFJDOCOMK_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E711420)
#define JGOFJDOCOMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E711350)
#define JGOFJDOCOMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7116D0)
#define JGOFJDOCOMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E711730)

inline static constexpr unsigned int JGOFJDOCOMK_TypeDefinitionIndex = 25604;

	class JGOFJDOCOMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDFIDCNNGMJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JGOFJDOCOMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGOFJDOCOMK*>**)UnitySDK::FromName("", "JGOFJDOCOMK")->GetStaticField(0x5E960);
		}

		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGOFJDOCOMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGOFJDOCOMK*))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGOFJDOCOMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGOFJDOCOMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGOFJDOCOMK*>*(*)())((::PBYTE)hIl2Cpp + JGOFJDOCOMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGOFJDOCOMK* Clone()
		{
			return ((::JGOFJDOCOMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGOFJDOCOMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGOFJDOCOMK*))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGOFJDOCOMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGOFJDOCOMK*))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGOFJDOCOMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
