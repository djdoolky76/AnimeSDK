#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMBCOANODNA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMBCOANODNA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59CC80)
#define HMBCOANODNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59CF50)
#define HMBCOANODNA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59C8D0)
#define HMBCOANODNA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59C8A0)
#define HMBCOANODNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59C890)
#define HMBCOANODNA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59CA40)
#define HMBCOANODNA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59C960)
#define HMBCOANODNA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59CB10)
#define HMBCOANODNA_GOIHGMPNMEG_OFFSET UNITYSDK_OFFSET(0x1E59C930)
#define HMBCOANODNA_IFKMKEMMBKA_OFFSET UNITYSDK_OFFSET(0x1E59C920)
#define HMBCOANODNA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59C850)
#define HMBCOANODNA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59CDD0)
#define HMBCOANODNA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59CD90)
#define HMBCOANODNA_OIFCKGODKON_OFFSET UNITYSDK_OFFSET(0x1E59C950)
#define HMBCOANODNA_OPFINOFMACO_OFFSET UNITYSDK_OFFSET(0x1E59C940)
#define HMBCOANODNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59C880)
#define HMBCOANODNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59CB40)
#define HMBCOANODNA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59CBA0)

inline static constexpr unsigned int HMBCOANODNA_TypeDefinitionIndex = 34139;

	class HMBCOANODNA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EECMDDNONFM; // 0x18
		::System::UInt32 MIJMCFOKJCH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HMBCOANODNA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMBCOANODNA*>**)UnitySDK::FromName("", "HMBCOANODNA")->GetStaticField(0x39640);
		}

		// static const ::System::Object FLMPPLGOIPA; // 0x0
		// static const ::System::Object ELMGEBCLLFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMBCOANODNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMBCOANODNA*))((::PBYTE)hIl2Cpp + HMBCOANODNA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBCOANODNA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMBCOANODNA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMBCOANODNA*>*(*)())((::PBYTE)hIl2Cpp + HMBCOANODNA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMBCOANODNA* Clone()
		{
			return ((::HMBCOANODNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA_CLONE_OFFSET))(this);
		}

		::System::UInt32 IFKMKEMMBKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA_IFKMKEMMBKA_OFFSET))(this);
		}

		::System::Void GOIHGMPNMEG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMBCOANODNA_GOIHGMPNMEG_OFFSET))(this, a1);
		}

		::System::UInt32 OPFINOFMACO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA_OPFINOFMACO_OFFSET))(this);
		}

		::System::Void OIFCKGODKON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMBCOANODNA_OIFCKGODKON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMBCOANODNA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMBCOANODNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMBCOANODNA*))((::PBYTE)hIl2Cpp + HMBCOANODNA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMBCOANODNA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMBCOANODNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMBCOANODNA*))((::PBYTE)hIl2Cpp + HMBCOANODNA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMBCOANODNA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
