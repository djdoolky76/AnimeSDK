#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AABJNDIJDAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AABJNDIJDAD_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1DDB5460)
#define AABJNDIJDAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB57D0)
#define AABJNDIJDAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB59F0)
#define AABJNDIJDAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB5420)
#define AABJNDIJDAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB53F0)
#define AABJNDIJDAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB53E0)
#define AABJNDIJDAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB5550)
#define AABJNDIJDAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB5480)
#define AABJNDIJDAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB56C0)
#define AABJNDIJDAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB53A0)
#define AABJNDIJDAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB5890)
#define AABJNDIJDAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB5860)
#define AABJNDIJDAD_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1DDB5470)
#define AABJNDIJDAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB53D0)
#define AABJNDIJDAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB56F0)
#define AABJNDIJDAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB5750)

inline static constexpr unsigned int AABJNDIJDAD_TypeDefinitionIndex = 31185;

	class AABJNDIJDAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BGMLGHECGBM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AABJNDIJDAD")->GetStaticField(0x365A0);
		}

		// static const ::System::Object LANLJAPHOCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AABJNDIJDAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AABJNDIJDAD*))((::PBYTE)hIl2Cpp + AABJNDIJDAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AABJNDIJDAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AABJNDIJDAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AABJNDIJDAD* Clone()
		{
			return ((::AABJNDIJDAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AABJNDIJDAD_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AABJNDIJDAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AABJNDIJDAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AABJNDIJDAD*))((::PBYTE)hIl2Cpp + AABJNDIJDAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AABJNDIJDAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AABJNDIJDAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AABJNDIJDAD*))((::PBYTE)hIl2Cpp + AABJNDIJDAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AABJNDIJDAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
