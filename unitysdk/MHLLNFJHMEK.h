#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHLLNFJHMEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHLLNFJHMEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA07470)
#define MHLLNFJHMEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA07690)
#define MHLLNFJHMEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA07060)
#define MHLLNFJHMEK_CPJGHGBBIMJ_OFFSET UNITYSDK_OFFSET(0x1EA070E0)
#define MHLLNFJHMEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA07030)
#define MHLLNFJHMEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA07020)
#define MHLLNFJHMEK_DEKGFFNILPD_OFFSET UNITYSDK_OFFSET(0x1EA070D0)
#define MHLLNFJHMEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA071F0)
#define MHLLNFJHMEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA070F0)
#define MHLLNFJHMEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA07360)
#define MHLLNFJHMEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA06FB0)
#define MHLLNFJHMEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA07530)
#define MHLLNFJHMEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA07500)
#define MHLLNFJHMEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA07010)
#define MHLLNFJHMEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA07390)
#define MHLLNFJHMEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA073F0)

inline static constexpr unsigned int MHLLNFJHMEK_TypeDefinitionIndex = 33119;

	class MHLLNFJHMEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GLFLHLCNOOH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MHLLNFJHMEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHLLNFJHMEK*>**)UnitySDK::FromName("", "MHLLNFJHMEK")->GetStaticField(0x52070);
		}

		// static const ::System::Object OPJGBPJDMKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHLLNFJHMEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHLLNFJHMEK*))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHLLNFJHMEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHLLNFJHMEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHLLNFJHMEK*>*(*)())((::PBYTE)hIl2Cpp + MHLLNFJHMEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHLLNFJHMEK* Clone()
		{
			return ((::MHLLNFJHMEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 DEKGFFNILPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_DEKGFFNILPD_OFFSET))(this);
		}

		::System::Void CPJGHGBBIMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_CPJGHGBBIMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHLLNFJHMEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHLLNFJHMEK*))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHLLNFJHMEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHLLNFJHMEK*))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHLLNFJHMEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
