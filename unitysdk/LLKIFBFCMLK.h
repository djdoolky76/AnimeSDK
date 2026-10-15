#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHCNMGNAIBG;
class LLKIFBFCMLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLKIFBFCMLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E99D400)
#define LLKIFBFCMLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99D6A0)
#define LLKIFBFCMLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E99CD30)
#define LLKIFBFCMLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E99CCC0)
#define LLKIFBFCMLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99CCB0)
#define LLKIFBFCMLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E99CFA0)
#define LLKIFBFCMLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E99CE00)
#define LLKIFBFCMLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E99D270)
#define LLKIFBFCMLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E99CC40)
#define LLKIFBFCMLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E99D4F0)
#define LLKIFBFCMLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E99D460)
#define LLKIFBFCMLK_NCEIAGCIHJO_OFFSET UNITYSDK_OFFSET(0x1E99CDF0)
#define LLKIFBFCMLK_OPPMBLJOMMF_OFFSET UNITYSDK_OFFSET(0x1E99CDE0)
#define LLKIFBFCMLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E99CCA0)
#define LLKIFBFCMLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E99D310)
#define LLKIFBFCMLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E99D370)

inline static constexpr unsigned int LLKIFBFCMLK_TypeDefinitionIndex = 25915;

	class LLKIFBFCMLK : public ::System::Object
	{
	public:
		::HHCNMGNAIBG* HDLBOOMPJLG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LLKIFBFCMLK")->GetStaticField(0x4C1C0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LLKIFBFCMLK_JJGHOBBFNJD_OFFSET))();
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
