#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIMJFGIPDKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define GIMJFGIPDKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4734C0)
#define GIMJFGIPDKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4737E0)
#define GIMJFGIPDKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E472F20)
#define GIMJFGIPDKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E472EB0)
#define GIMJFGIPDKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E472EA0)
#define GIMJFGIPDKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E473160)
#define GIMJFGIPDKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E472FE0)
#define GIMJFGIPDKI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E472FD0)
#define GIMJFGIPDKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4732E0)
#define GIMJFGIPDKI_GLHEOJODNCP_OFFSET UNITYSDK_OFFSET(0x1E472FB0)
#define GIMJFGIPDKI_IMKKLEJHLKN_OFFSET UNITYSDK_OFFSET(0x1E472FA0)
#define GIMJFGIPDKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E472E60)
#define GIMJFGIPDKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E473620)
#define GIMJFGIPDKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E473590)
#define GIMJFGIPDKI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E472FC0)
#define GIMJFGIPDKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E472E90)
#define GIMJFGIPDKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E473380)
#define GIMJFGIPDKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4733E0)

inline static constexpr unsigned int GIMJFGIPDKI_TypeDefinitionIndex = 33613;

	class GIMJFGIPDKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* DAJLLCPBBBB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GIMJFGIPDKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIMJFGIPDKI*>**)UnitySDK::FromName("", "GIMJFGIPDKI")->GetStaticField(0x195F0);
		}

		// static const ::System::Object OEAFMBBCLNE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIMJFGIPDKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIMJFGIPDKI*))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMJFGIPDKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIMJFGIPDKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIMJFGIPDKI*>*(*)())((::PBYTE)hIl2Cpp + GIMJFGIPDKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIMJFGIPDKI* Clone()
		{
			return ((::GIMJFGIPDKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* IMKKLEJHLKN()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_IMKKLEJHLKN_OFFSET))(this);
		}

		::System::Void GLHEOJODNCP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_GLHEOJODNCP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIMJFGIPDKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIMJFGIPDKI*))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIMJFGIPDKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIMJFGIPDKI*))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIMJFGIPDKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
