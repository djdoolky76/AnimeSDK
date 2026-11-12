#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPKPLOPKPBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPKPLOPKPBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6F9C80)
#define FPKPLOPKPBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6F9EA0)
#define FPKPLOPKPBG_CEKHBMFJDIH_OFFSET UNITYSDK_OFFSET(0x1F6F9920)
#define FPKPLOPKPBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6F98D0)
#define FPKPLOPKPBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6F98A0)
#define FPKPLOPKPBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F9890)
#define FPKPLOPKPBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6F9A00)
#define FPKPLOPKPBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6F9930)
#define FPKPLOPKPBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6F9B70)
#define FPKPLOPKPBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6F9850)
#define FPKPLOPKPBG_KMFAKHAKJLL_OFFSET UNITYSDK_OFFSET(0x1F6F9910)
#define FPKPLOPKPBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6F9D40)
#define FPKPLOPKPBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6F9D10)
#define FPKPLOPKPBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6F9880)
#define FPKPLOPKPBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6F9BA0)
#define FPKPLOPKPBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6F9C00)

inline static constexpr unsigned int FPKPLOPKPBG_TypeDefinitionIndex = 33132;

	class FPKPLOPKPBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GBHALKHPMCE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FPKPLOPKPBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPKPLOPKPBG*>**)UnitySDK::FromName("", "FPKPLOPKPBG")->GetStaticField(0x52630);
		}

		// static const ::System::Object DHHMBIGBCEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPKPLOPKPBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPKPLOPKPBG*))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPKPLOPKPBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPKPLOPKPBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPKPLOPKPBG*>*(*)())((::PBYTE)hIl2Cpp + FPKPLOPKPBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPKPLOPKPBG* Clone()
		{
			return ((::FPKPLOPKPBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 KMFAKHAKJLL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_KMFAKHAKJLL_OFFSET))(this);
		}

		::System::Void CEKHBMFJDIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_CEKHBMFJDIH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPKPLOPKPBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPKPLOPKPBG*))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPKPLOPKPBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPKPLOPKPBG*))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPKPLOPKPBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
