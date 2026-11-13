#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCDAFFCDLLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCDAFFCDLLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F89E330)
#define FCDAFFCDLLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89E600)
#define FCDAFFCDLLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F89DF80)
#define FCDAFFCDLLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F89DF50)
#define FCDAFFCDLLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89DF40)
#define FCDAFFCDLLD_ENDBLFECBCB_OFFSET UNITYSDK_OFFSET(0x1F89DFF0)
#define FCDAFFCDLLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F89E0F0)
#define FCDAFFCDLLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F89E010)
#define FCDAFFCDLLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F89E1C0)
#define FCDAFFCDLLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F89DF00)
#define FCDAFFCDLLD_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1F89DFD0)
#define FCDAFFCDLLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F89E480)
#define FCDAFFCDLLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F89E440)
#define FCDAFFCDLLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F89DF30)
#define FCDAFFCDLLD_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1F89DFE0)
#define FCDAFFCDLLD_PPCFBDNNBCC_OFFSET UNITYSDK_OFFSET(0x1F89E000)
#define FCDAFFCDLLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F89E1F0)
#define FCDAFFCDLLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F89E250)

inline static constexpr unsigned int FCDAFFCDLLD_TypeDefinitionIndex = 31530;

	class FCDAFFCDLLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJPCMINMFBI; // 0x18
		::System::UInt32 NECNCPDGBOO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FCDAFFCDLLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCDAFFCDLLD*>**)UnitySDK::FromName("", "FCDAFFCDLLD")->GetStaticField(0x428B0);
		}

		// static const ::System::Object ACLGGLDCAEC; // 0x0
		// static const ::System::Object IOAMBHCDNBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCDAFFCDLLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCDAFFCDLLD*))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCDAFFCDLLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCDAFFCDLLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCDAFFCDLLD*>*(*)())((::PBYTE)hIl2Cpp + FCDAFFCDLLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCDAFFCDLLD* Clone()
		{
			return ((::FCDAFFCDLLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::UInt32 ENDBLFECBCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_ENDBLFECBCB_OFFSET))(this);
		}

		::System::Void PPCFBDNNBCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_PPCFBDNNBCC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCDAFFCDLLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCDAFFCDLLD*))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCDAFFCDLLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCDAFFCDLLD*))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCDAFFCDLLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
