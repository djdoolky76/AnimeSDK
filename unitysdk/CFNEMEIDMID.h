#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFNEMEIDMID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFNEMEIDMID_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1FD1CD10)
#define CFNEMEIDMID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD1D070)
#define CFNEMEIDMID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD1D340)
#define CFNEMEIDMID_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD1CC70)
#define CFNEMEIDMID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD1CC40)
#define CFNEMEIDMID_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD1CC30)
#define CFNEMEIDMID_DHIKGIEAHON_OFFSET UNITYSDK_OFFSET(0x1FD1CCF0)
#define CFNEMEIDMID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD1CE30)
#define CFNEMEIDMID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD1CD20)
#define CFNEMEIDMID_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1FD1CD00)
#define CFNEMEIDMID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD1CF00)
#define CFNEMEIDMID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD1CBC0)
#define CFNEMEIDMID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD1D1C0)
#define CFNEMEIDMID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD1D180)
#define CFNEMEIDMID_NMBONOMKIHN_OFFSET UNITYSDK_OFFSET(0x1FD1CCE0)
#define CFNEMEIDMID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD1CC20)
#define CFNEMEIDMID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD1CF30)
#define CFNEMEIDMID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD1CF90)

inline static constexpr unsigned int CFNEMEIDMID_TypeDefinitionIndex = 29518;

	class CFNEMEIDMID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FAIMKIMPABJ; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CFNEMEIDMID*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFNEMEIDMID*>**)UnitySDK::FromName("", "CFNEMEIDMID")->GetStaticField(0xAD20);
		}

		// static const ::System::Object BOFEDBHMOFF; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFNEMEIDMID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFNEMEIDMID*))((::PBYTE)hIl2Cpp + CFNEMEIDMID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFNEMEIDMID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFNEMEIDMID*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFNEMEIDMID*>*(*)())((::PBYTE)hIl2Cpp + CFNEMEIDMID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFNEMEIDMID* Clone()
		{
			return ((::CFNEMEIDMID*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID_CLONE_OFFSET))(this);
		}

		::System::UInt32 NMBONOMKIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID_NMBONOMKIHN_OFFSET))(this);
		}

		::System::Void DHIKGIEAHON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFNEMEIDMID_DHIKGIEAHON_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFNEMEIDMID_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFNEMEIDMID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFNEMEIDMID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNEMEIDMID*))((::PBYTE)hIl2Cpp + CFNEMEIDMID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFNEMEIDMID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFNEMEIDMID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFNEMEIDMID*))((::PBYTE)hIl2Cpp + CFNEMEIDMID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFNEMEIDMID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
