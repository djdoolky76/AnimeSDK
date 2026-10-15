#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGGABPHCDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACGGABPHCDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDAF5C0)
#define ACGGABPHCDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDAF940)
#define ACGGABPHCDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDAF1E0)
#define ACGGABPHCDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDAF1B0)
#define ACGGABPHCDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAF1A0)
#define ACGGABPHCDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDAF350)
#define ACGGABPHCDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDAF270)
#define ACGGABPHCDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDAF420)
#define ACGGABPHCDA_HFBBCKGPGLP_OFFSET UNITYSDK_OFFSET(0x1DDAF250)
#define ACGGABPHCDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDAF160)
#define ACGGABPHCDA_LICHAGCJFJI_OFFSET UNITYSDK_OFFSET(0x1DDAF240)
#define ACGGABPHCDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDAF7C0)
#define ACGGABPHCDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDAF780)
#define ACGGABPHCDA_NKPGKMNJNBP_OFFSET UNITYSDK_OFFSET(0x1DDAF260)
#define ACGGABPHCDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDAF190)
#define ACGGABPHCDA_PGFKCEMBMOO_OFFSET UNITYSDK_OFFSET(0x1DDAF230)
#define ACGGABPHCDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDAF480)
#define ACGGABPHCDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDAF4E0)

inline static constexpr unsigned int ACGGABPHCDA_TypeDefinitionIndex = 32048;

	class ACGGABPHCDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 JECNIFENDIP; // 0x18
		::System::Int64 CBDABAKGEIK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ACGGABPHCDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ACGGABPHCDA*>**)UnitySDK::FromName("", "ACGGABPHCDA")->GetStaticField(0x326F0);
		}

		// static const ::System::Object FBBEFJLLAHM; // 0x0
		// static const ::System::Object AFOFJJCLHGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACGGABPHCDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACGGABPHCDA*))((::PBYTE)hIl2Cpp + ACGGABPHCDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGGABPHCDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ACGGABPHCDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ACGGABPHCDA*>*(*)())((::PBYTE)hIl2Cpp + ACGGABPHCDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACGGABPHCDA* Clone()
		{
			return ((::ACGGABPHCDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA_CLONE_OFFSET))(this);
		}

		::System::Int64 PGFKCEMBMOO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA_PGFKCEMBMOO_OFFSET))(this);
		}

		::System::Void LICHAGCJFJI(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ACGGABPHCDA_LICHAGCJFJI_OFFSET))(this, a1);
		}

		::System::Int64 HFBBCKGPGLP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA_HFBBCKGPGLP_OFFSET))(this);
		}

		::System::Void NKPGKMNJNBP(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ACGGABPHCDA_NKPGKMNJNBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACGGABPHCDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACGGABPHCDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACGGABPHCDA*))((::PBYTE)hIl2Cpp + ACGGABPHCDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACGGABPHCDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACGGABPHCDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACGGABPHCDA*))((::PBYTE)hIl2Cpp + ACGGABPHCDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACGGABPHCDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
