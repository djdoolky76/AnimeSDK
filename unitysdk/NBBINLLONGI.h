#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBBINLLONGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBBINLLONGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE09360)
#define NBBINLLONGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE09580)
#define NBBINLLONGI_CJJDNMIPMNM_OFFSET UNITYSDK_OFFSET(0x1FE09000)
#define NBBINLLONGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE08FB0)
#define NBBINLLONGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE08F80)
#define NBBINLLONGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE08F70)
#define NBBINLLONGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE090E0)
#define NBBINLLONGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE09010)
#define NBBINLLONGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE09250)
#define NBBINLLONGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE08F30)
#define NBBINLLONGI_KJMBBIGBLDK_OFFSET UNITYSDK_OFFSET(0x1FE08FF0)
#define NBBINLLONGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE09420)
#define NBBINLLONGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE093F0)
#define NBBINLLONGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE08F60)
#define NBBINLLONGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE09280)
#define NBBINLLONGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE092E0)

inline static constexpr unsigned int NBBINLLONGI_TypeDefinitionIndex = 32575;

	class NBBINLLONGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OJDOJFBJOOE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NBBINLLONGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBBINLLONGI*>**)UnitySDK::FromName("", "NBBINLLONGI")->GetStaticField(0x676E0);
		}

		// static const ::System::Object FIEDIDHOLDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBBINLLONGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBBINLLONGI*))((::PBYTE)hIl2Cpp + NBBINLLONGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBBINLLONGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBBINLLONGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBBINLLONGI*>*(*)())((::PBYTE)hIl2Cpp + NBBINLLONGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBBINLLONGI* Clone()
		{
			return ((::NBBINLLONGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KJMBBIGBLDK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_KJMBBIGBLDK_OFFSET))(this);
		}

		::System::Void CJJDNMIPMNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBBINLLONGI_CJJDNMIPMNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBBINLLONGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBBINLLONGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBBINLLONGI*))((::PBYTE)hIl2Cpp + NBBINLLONGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBBINLLONGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBBINLLONGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBBINLLONGI*))((::PBYTE)hIl2Cpp + NBBINLLONGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBBINLLONGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
