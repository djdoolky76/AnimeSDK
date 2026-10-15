#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPHIKPCNBHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPHIKPCNBHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E047B10)
#define BPHIKPCNBHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E047D30)
#define BPHIKPCNBHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E047760)
#define BPHIKPCNBHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E047730)
#define BPHIKPCNBHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E047720)
#define BPHIKPCNBHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E047890)
#define BPHIKPCNBHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0477C0)
#define BPHIKPCNBHM_FJEOKLJJJBP_OFFSET UNITYSDK_OFFSET(0x1E0477A0)
#define BPHIKPCNBHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E047A00)
#define BPHIKPCNBHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0476E0)
#define BPHIKPCNBHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E047BD0)
#define BPHIKPCNBHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E047BA0)
#define BPHIKPCNBHM_NBBKMKBJHCF_OFFSET UNITYSDK_OFFSET(0x1E0477B0)
#define BPHIKPCNBHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E047710)
#define BPHIKPCNBHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E047A30)
#define BPHIKPCNBHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E047A90)

inline static constexpr unsigned int BPHIKPCNBHM_TypeDefinitionIndex = 33189;

	class BPHIKPCNBHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OIFNINOMHKL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPHIKPCNBHM")->GetStaticField(0x551D0);
		}

		// static const ::System::Object IJAOJBIBDEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPHIKPCNBHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPHIKPCNBHM*))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPHIKPCNBHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPHIKPCNBHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPHIKPCNBHM* Clone()
		{
			return ((::BPHIKPCNBHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJEOKLJJJBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_FJEOKLJJJBP_OFFSET))(this);
		}

		::System::Void NBBKMKBJHCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_NBBKMKBJHCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPHIKPCNBHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPHIKPCNBHM*))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPHIKPCNBHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPHIKPCNBHM*))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPHIKPCNBHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
