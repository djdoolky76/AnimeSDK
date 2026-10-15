#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHAGFKJEIMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHAGFKJEIMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E08D270)
#define CHAGFKJEIMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08D540)
#define CHAGFKJEIMI_CHPAIEEKLGO_OFFSET UNITYSDK_OFFSET(0x1E08CF00)
#define CHAGFKJEIMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E08CE70)
#define CHAGFKJEIMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E08CE40)
#define CHAGFKJEIMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08CE30)
#define CHAGFKJEIMI_EKBNADJNHPK_OFFSET UNITYSDK_OFFSET(0x1E08CEF0)
#define CHAGFKJEIMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E08D030)
#define CHAGFKJEIMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E08CF20)
#define CHAGFKJEIMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E08D100)
#define CHAGFKJEIMI_IHJEHGAJGCM_OFFSET UNITYSDK_OFFSET(0x1E08CEE0)
#define CHAGFKJEIMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E08CDC0)
#define CHAGFKJEIMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E08D3C0)
#define CHAGFKJEIMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E08D380)
#define CHAGFKJEIMI_NIFANMHOKPP_OFFSET UNITYSDK_OFFSET(0x1E08CF10)
#define CHAGFKJEIMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E08CE20)
#define CHAGFKJEIMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E08D130)
#define CHAGFKJEIMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E08D190)

inline static constexpr unsigned int CHAGFKJEIMI_TypeDefinitionIndex = 29922;

	class CHAGFKJEIMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FPBMHDLILGC; // 0x18
		::System::UInt32 OCJHJHPJJIL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CHAGFKJEIMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHAGFKJEIMI*>**)UnitySDK::FromName("", "CHAGFKJEIMI")->GetStaticField(0xCE60);
		}

		// static const ::System::Object EKCFPDDAIMD; // 0x0
		// static const ::System::Object HFBCIKFOOPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHAGFKJEIMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHAGFKJEIMI*))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHAGFKJEIMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHAGFKJEIMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHAGFKJEIMI*>*(*)())((::PBYTE)hIl2Cpp + CHAGFKJEIMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHAGFKJEIMI* Clone()
		{
			return ((::CHAGFKJEIMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IHJEHGAJGCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_IHJEHGAJGCM_OFFSET))(this);
		}

		::System::Void EKBNADJNHPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_EKBNADJNHPK_OFFSET))(this, a1);
		}

		::System::UInt32 CHPAIEEKLGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_CHPAIEEKLGO_OFFSET))(this);
		}

		::System::Void NIFANMHOKPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_NIFANMHOKPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHAGFKJEIMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHAGFKJEIMI*))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHAGFKJEIMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHAGFKJEIMI*))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHAGFKJEIMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
