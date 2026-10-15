#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFMMFBMOBEG;
class LFHAFKOJBAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFHAFKOJBAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E93D590)
#define LFHAFKOJBAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93D890)
#define LFHAFKOJBAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E93D170)
#define LFHAFKOJBAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E93D0C0)
#define LFHAFKOJBAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93D070)
#define LFHAFKOJBAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E93D2F0)
#define LFHAFKOJBAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E93D1B0)
#define LFHAFKOJBAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E93D410)
#define LFHAFKOJBAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E93D030)
#define LFHAFKOJBAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93D6D0)
#define LFHAFKOJBAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93D630)
#define LFHAFKOJBAB_NGLCOLOOHJN_OFFSET UNITYSDK_OFFSET(0x1E93D1A0)
#define LFHAFKOJBAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E93D060)
#define LFHAFKOJBAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E93D480)
#define LFHAFKOJBAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E93D4E0)

	class LFHAFKOJBAB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FFMMFBMOBEG*>* OIEPDHACMED; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_LMPEFFHBMBI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LFHAFKOJBAB")->GetStaticField(0x3AC00);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LFHAFKOJBAB")->GetStaticField(0x3AC08);
		}

		// static const ::System::Object CDLMPCMLEDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFHAFKOJBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFHAFKOJBAB*))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFHAFKOJBAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LFHAFKOJBAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFHAFKOJBAB* Clone()
		{
			return ((::LFHAFKOJBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FFMMFBMOBEG*>* NGLCOLOOHJN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FFMMFBMOBEG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_NGLCOLOOHJN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFHAFKOJBAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFHAFKOJBAB*))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFHAFKOJBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFHAFKOJBAB*))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFHAFKOJBAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
