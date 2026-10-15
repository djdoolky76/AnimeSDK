#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFKOAPFOFNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFKOAPFOFNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E443A70)
#define GFKOAPFOFNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E443CD0)
#define GFKOAPFOFNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E443680)
#define GFKOAPFOFNL_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E4436F0)
#define GFKOAPFOFNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E443640)
#define GFKOAPFOFNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E443630)
#define GFKOAPFOFNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4437F0)
#define GFKOAPFOFNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E443710)
#define GFKOAPFOFNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4438D0)
#define GFKOAPFOFNL_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E443700)
#define GFKOAPFOFNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4435F0)
#define GFKOAPFOFNL_LLMPIHGIKEK_OFFSET UNITYSDK_OFFSET(0x1E4436E0)
#define GFKOAPFOFNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E443B50)
#define GFKOAPFOFNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E443B10)
#define GFKOAPFOFNL_OMPBPEPDGLA_OFFSET UNITYSDK_OFFSET(0x1E4436D0)
#define GFKOAPFOFNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E443620)
#define GFKOAPFOFNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E443900)
#define GFKOAPFOFNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E443960)

inline static constexpr unsigned int GFKOAPFOFNL_TypeDefinitionIndex = 30186;

	class GFKOAPFOFNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::Boolean OIAABFABCPE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GFKOAPFOFNL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFKOAPFOFNL*>**)UnitySDK::FromName("", "GFKOAPFOFNL")->GetStaticField(0x13E70);
		}

		// static const ::System::Object CAPLJOPAFNI; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFKOAPFOFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFKOAPFOFNL*))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFKOAPFOFNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFKOAPFOFNL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFKOAPFOFNL*>*(*)())((::PBYTE)hIl2Cpp + GFKOAPFOFNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFKOAPFOFNL* Clone()
		{
			return ((::GFKOAPFOFNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_CLONE_OFFSET))(this);
		}

		::System::Boolean OMPBPEPDGLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_OMPBPEPDGLA_OFFSET))(this);
		}

		::System::Void LLMPIHGIKEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_LLMPIHGIKEK_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFKOAPFOFNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFKOAPFOFNL*))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFKOAPFOFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFKOAPFOFNL*))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFKOAPFOFNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
