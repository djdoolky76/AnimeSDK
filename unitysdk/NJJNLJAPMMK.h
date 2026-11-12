#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJJNLJAPMMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJJNLJAPMMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F029420)
#define NJJNLJAPMMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F029640)
#define NJJNLJAPMMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F029070)
#define NJJNLJAPMMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F029040)
#define NJJNLJAPMMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F029030)
#define NJJNLJAPMMK_EEANKCMAONE_OFFSET UNITYSDK_OFFSET(0x1F0290B0)
#define NJJNLJAPMMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0291A0)
#define NJJNLJAPMMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0290D0)
#define NJJNLJAPMMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F029310)
#define NJJNLJAPMMK_GHNFIJANKGP_OFFSET UNITYSDK_OFFSET(0x1F0290C0)
#define NJJNLJAPMMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F028FF0)
#define NJJNLJAPMMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0294E0)
#define NJJNLJAPMMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0294B0)
#define NJJNLJAPMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F029020)
#define NJJNLJAPMMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F029340)
#define NJJNLJAPMMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0293A0)

inline static constexpr unsigned int NJJNLJAPMMK_TypeDefinitionIndex = 27673;

	class NJJNLJAPMMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CBFGCLPCKEA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NJJNLJAPMMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJJNLJAPMMK*>**)UnitySDK::FromName("", "NJJNLJAPMMK")->GetStaticField(0x6D260);
		}

		// static const ::System::Object BCJDCONICKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJJNLJAPMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJJNLJAPMMK*))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJJNLJAPMMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJJNLJAPMMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJJNLJAPMMK*>*(*)())((::PBYTE)hIl2Cpp + NJJNLJAPMMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJJNLJAPMMK* Clone()
		{
			return ((::NJJNLJAPMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEANKCMAONE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_EEANKCMAONE_OFFSET))(this);
		}

		::System::Void GHNFIJANKGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_GHNFIJANKGP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJJNLJAPMMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJJNLJAPMMK*))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJJNLJAPMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJJNLJAPMMK*))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJJNLJAPMMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
