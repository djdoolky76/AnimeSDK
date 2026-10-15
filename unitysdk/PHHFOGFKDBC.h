#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHHFOGFKDBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHHFOGFKDBC_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DF3A1B0)
#define PHHFOGFKDBC_AGFANMDJCBJ_OFFSET UNITYSDK_OFFSET(0x1DF3A1E0)
#define PHHFOGFKDBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF3A510)
#define PHHFOGFKDBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3A7E0)
#define PHHFOGFKDBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF3A160)
#define PHHFOGFKDBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF3A130)
#define PHHFOGFKDBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3A120)
#define PHHFOGFKDBC_ENIJDMAJKCO_OFFSET UNITYSDK_OFFSET(0x1DF3A1D0)
#define PHHFOGFKDBC_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DF3A1C0)
#define PHHFOGFKDBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF3A2D0)
#define PHHFOGFKDBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF3A1F0)
#define PHHFOGFKDBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF3A3A0)
#define PHHFOGFKDBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF3A0E0)
#define PHHFOGFKDBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF3A660)
#define PHHFOGFKDBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF3A620)
#define PHHFOGFKDBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF3A110)
#define PHHFOGFKDBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF3A3D0)
#define PHHFOGFKDBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF3A430)

inline static constexpr unsigned int PHHFOGFKDBC_TypeDefinitionIndex = 27166;

	class PHHFOGFKDBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBIKDALMALD; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PHHFOGFKDBC")->GetStaticField(0x1C630);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object BCMOOHPKBDG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHHFOGFKDBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHHFOGFKDBC*))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHHFOGFKDBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PHHFOGFKDBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHHFOGFKDBC* Clone()
		{
			return ((::PHHFOGFKDBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 ENIJDMAJKCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_ENIJDMAJKCO_OFFSET))(this);
		}

		::System::Void AGFANMDJCBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_AGFANMDJCBJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHHFOGFKDBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHHFOGFKDBC*))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHHFOGFKDBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHHFOGFKDBC*))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHHFOGFKDBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
