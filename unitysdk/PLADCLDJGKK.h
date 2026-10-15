#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLADCLDJGKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLADCLDJGKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF6E0A0)
#define PLADCLDJGKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6E300)
#define PLADCLDJGKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF6DCB0)
#define PLADCLDJGKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF6DC70)
#define PLADCLDJGKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6DC60)
#define PLADCLDJGKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF6DE20)
#define PLADCLDJGKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6DD40)
#define PLADCLDJGKK_FLABFFODLAN_OFFSET UNITYSDK_OFFSET(0x1DF6DD10)
#define PLADCLDJGKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6DF00)
#define PLADCLDJGKK_GMGCKILGECB_OFFSET UNITYSDK_OFFSET(0x1DF6DD30)
#define PLADCLDJGKK_JFPFGJGFCGE_OFFSET UNITYSDK_OFFSET(0x1DF6DD00)
#define PLADCLDJGKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF6DC20)
#define PLADCLDJGKK_LJBBKBHMBJF_OFFSET UNITYSDK_OFFSET(0x1DF6DD20)
#define PLADCLDJGKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6E180)
#define PLADCLDJGKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF6E140)
#define PLADCLDJGKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF6DC50)
#define PLADCLDJGKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF6DF30)
#define PLADCLDJGKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF6DF90)

inline static constexpr unsigned int PLADCLDJGKK_TypeDefinitionIndex = 30340;

	class PLADCLDJGKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean JNDBHPPKILC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 CBJLKLAIGPG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PLADCLDJGKK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLADCLDJGKK*>**)UnitySDK::FromName("", "PLADCLDJGKK")->GetStaticField(0x3BA20);
		}

		// static const ::System::Object ABJLJCFPJJL; // 0x0
		// static const ::System::Object DPMPPDAIAAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLADCLDJGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLADCLDJGKK*))((::PBYTE)hIl2Cpp + PLADCLDJGKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLADCLDJGKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLADCLDJGKK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLADCLDJGKK*>*(*)())((::PBYTE)hIl2Cpp + PLADCLDJGKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLADCLDJGKK* Clone()
		{
			return ((::PLADCLDJGKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK_CLONE_OFFSET))(this);
		}

		::System::Boolean JFPFGJGFCGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK_JFPFGJGFCGE_OFFSET))(this);
		}

		::System::Void FLABFFODLAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLADCLDJGKK_FLABFFODLAN_OFFSET))(this, a1);
		}

		::System::UInt32 LJBBKBHMBJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK_LJBBKBHMBJF_OFFSET))(this);
		}

		::System::Void GMGCKILGECB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLADCLDJGKK_GMGCKILGECB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLADCLDJGKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLADCLDJGKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLADCLDJGKK*))((::PBYTE)hIl2Cpp + PLADCLDJGKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLADCLDJGKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLADCLDJGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLADCLDJGKK*))((::PBYTE)hIl2Cpp + PLADCLDJGKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLADCLDJGKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
