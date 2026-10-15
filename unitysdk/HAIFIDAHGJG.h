#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAIFIDAHGJG;
class HHCNMGNAIBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAIFIDAHGJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E505780)
#define HAIFIDAHGJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E505A20)
#define HAIFIDAHGJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E505110)
#define HAIFIDAHGJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5050A0)
#define HAIFIDAHGJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E505090)
#define HAIFIDAHGJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E505320)
#define HAIFIDAHGJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5051B0)
#define HAIFIDAHGJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5055F0)
#define HAIFIDAHGJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E505050)
#define HAIFIDAHGJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E505870)
#define HAIFIDAHGJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5057E0)
#define HAIFIDAHGJG_NCEIAGCIHJO_OFFSET UNITYSDK_OFFSET(0x1E5051A0)
#define HAIFIDAHGJG_OPPMBLJOMMF_OFFSET UNITYSDK_OFFSET(0x1E505190)
#define HAIFIDAHGJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E505080)
#define HAIFIDAHGJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E505690)
#define HAIFIDAHGJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5056F0)

inline static constexpr unsigned int HAIFIDAHGJG_TypeDefinitionIndex = 31573;

	class HAIFIDAHGJG : public ::System::Object
	{
	public:
		::HHCNMGNAIBG* HDLBOOMPJLG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HAIFIDAHGJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAIFIDAHGJG*>**)UnitySDK::FromName("", "HAIFIDAHGJG")->GetStaticField(0x2CC00);
		}

		// static const ::System::Object IFDCNFDEBHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAIFIDAHGJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAIFIDAHGJG*))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAIFIDAHGJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAIFIDAHGJG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAIFIDAHGJG*>*(*)())((::PBYTE)hIl2Cpp + HAIFIDAHGJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAIFIDAHGJG* Clone()
		{
			return ((::HAIFIDAHGJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_CLONE_OFFSET))(this);
		}

		::HHCNMGNAIBG* OPPMBLJOMMF()
		{
			return ((::HHCNMGNAIBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_OPPMBLJOMMF_OFFSET))(this);
		}

		::System::Void NCEIAGCIHJO(::HHCNMGNAIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_NCEIAGCIHJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAIFIDAHGJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAIFIDAHGJG*))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAIFIDAHGJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAIFIDAHGJG*))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAIFIDAHGJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
