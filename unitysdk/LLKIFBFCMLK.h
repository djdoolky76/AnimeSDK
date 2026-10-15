#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHCNMGNAIBG;
class LLKIFBFCMLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLKIFBFCMLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96FDA0)
#define LLKIFBFCMLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E970040)
#define LLKIFBFCMLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96F6D0)
#define LLKIFBFCMLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96F660)
#define LLKIFBFCMLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96F650)
#define LLKIFBFCMLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96F940)
#define LLKIFBFCMLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96F7A0)
#define LLKIFBFCMLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96FC10)
#define LLKIFBFCMLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96F5E0)
#define LLKIFBFCMLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96FE90)
#define LLKIFBFCMLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96FE00)
#define LLKIFBFCMLK_NCEIAGCIHJO_OFFSET UNITYSDK_OFFSET(0x1E96F790)
#define LLKIFBFCMLK_OPPMBLJOMMF_OFFSET UNITYSDK_OFFSET(0x1E96F780)
#define LLKIFBFCMLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96F640)
#define LLKIFBFCMLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96FCB0)
#define LLKIFBFCMLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96FD10)

inline static constexpr unsigned int LLKIFBFCMLK_TypeDefinitionIndex = 25915;

	class LLKIFBFCMLK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HHCNMGNAIBG* HDLBOOMPJLG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LLKIFBFCMLK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLKIFBFCMLK*>**)UnitySDK::FromName("", "LLKIFBFCMLK")->GetStaticField(0x3CAE0);
		}

		// static const ::System::Object IFDCNFDEBHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLKIFBFCMLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLKIFBFCMLK*))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLKIFBFCMLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLKIFBFCMLK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLKIFBFCMLK*>*(*)())((::PBYTE)hIl2Cpp + LLKIFBFCMLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLKIFBFCMLK* Clone()
		{
			return ((::LLKIFBFCMLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_CLONE_OFFSET))(this);
		}

		::HHCNMGNAIBG* OPPMBLJOMMF()
		{
			return ((::HHCNMGNAIBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_OPPMBLJOMMF_OFFSET))(this);
		}

		::System::Void NCEIAGCIHJO(::HHCNMGNAIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_NCEIAGCIHJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLKIFBFCMLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLKIFBFCMLK*))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLKIFBFCMLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLKIFBFCMLK*))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLKIFBFCMLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
