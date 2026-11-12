#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGEAPNBMJKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGEAPNBMJKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD72610)
#define MGEAPNBMJKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD728E0)
#define MGEAPNBMJKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD72210)
#define MGEAPNBMJKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD721E0)
#define MGEAPNBMJKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD721D0)
#define MGEAPNBMJKJ_EMKCPIEGDKC_OFFSET UNITYSDK_OFFSET(0x1FD722A0)
#define MGEAPNBMJKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD723D0)
#define MGEAPNBMJKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD722C0)
#define MGEAPNBMJKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD724A0)
#define MGEAPNBMJKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD72160)
#define MGEAPNBMJKJ_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1FD72280)
#define MGEAPNBMJKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD72760)
#define MGEAPNBMJKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD72720)
#define MGEAPNBMJKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD721C0)
#define MGEAPNBMJKJ_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1FD72290)
#define MGEAPNBMJKJ_PELJBKCMMPJ_OFFSET UNITYSDK_OFFSET(0x1FD722B0)
#define MGEAPNBMJKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD724D0)
#define MGEAPNBMJKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD72530)

inline static constexpr unsigned int MGEAPNBMJKJ_TypeDefinitionIndex = 30842;

	class MGEAPNBMJKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OJBAHMFNPDP; // 0x18
		::System::UInt32 MPFELJLKAFH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MGEAPNBMJKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGEAPNBMJKJ*>**)UnitySDK::FromName("", "MGEAPNBMJKJ")->GetStaticField(0x544B0);
		}

		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object NNNJNAAJGMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGEAPNBMJKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGEAPNBMJKJ*))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGEAPNBMJKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGEAPNBMJKJ*>*(*)())((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGEAPNBMJKJ* Clone()
		{
			return ((::MGEAPNBMJKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::System::UInt32 EMKCPIEGDKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_EMKCPIEGDKC_OFFSET))(this);
		}

		::System::Void PELJBKCMMPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_PELJBKCMMPJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGEAPNBMJKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGEAPNBMJKJ*))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGEAPNBMJKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGEAPNBMJKJ*))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
