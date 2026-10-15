#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEDOFFJODEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEDOFFJODEM_AHNBJLPNFNF_OFFSET UNITYSDK_OFFSET(0x1E334220)
#define FEDOFFJODEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E334580)
#define FEDOFFJODEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3347A0)
#define FEDOFFJODEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3341D0)
#define FEDOFFJODEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3341A0)
#define FEDOFFJODEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E334190)
#define FEDOFFJODEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E334300)
#define FEDOFFJODEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E334230)
#define FEDOFFJODEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E334470)
#define FEDOFFJODEM_HHAHANAABKL_OFFSET UNITYSDK_OFFSET(0x1E334210)
#define FEDOFFJODEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E334150)
#define FEDOFFJODEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E334640)
#define FEDOFFJODEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E334610)
#define FEDOFFJODEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E334180)
#define FEDOFFJODEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3344A0)
#define FEDOFFJODEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E334500)

inline static constexpr unsigned int FEDOFFJODEM_TypeDefinitionIndex = 31364;

	class FEDOFFJODEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NNDLGMEBJBA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FEDOFFJODEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEDOFFJODEM*>**)UnitySDK::FromName("", "FEDOFFJODEM")->GetStaticField(0x53210);
		}

		// static const ::System::Object HBFKBNKGALB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEDOFFJODEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEDOFFJODEM*))((::PBYTE)hIl2Cpp + FEDOFFJODEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDOFFJODEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FEDOFFJODEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FEDOFFJODEM*>*(*)())((::PBYTE)hIl2Cpp + FEDOFFJODEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEDOFFJODEM* Clone()
		{
			return ((::FEDOFFJODEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 HHAHANAABKL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM_HHAHANAABKL_OFFSET))(this);
		}

		::System::Void AHNBJLPNFNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEDOFFJODEM_AHNBJLPNFNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEDOFFJODEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEDOFFJODEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEDOFFJODEM*))((::PBYTE)hIl2Cpp + FEDOFFJODEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEDOFFJODEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEDOFFJODEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEDOFFJODEM*))((::PBYTE)hIl2Cpp + FEDOFFJODEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEDOFFJODEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
