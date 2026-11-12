#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANAJELDHDBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANAJELDHDBH_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1F917FB0)
#define ANAJELDHDBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F918490)
#define ANAJELDHDBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F918710)
#define ANAJELDHDBH_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1F917FC0)
#define ANAJELDHDBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F917F10)
#define ANAJELDHDBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F917ED0)
#define ANAJELDHDBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F917EC0)
#define ANAJELDHDBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F918030)
#define ANAJELDHDBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F917FD0)
#define ANAJELDHDBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F918220)
#define ANAJELDHDBH_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1F917FA0)
#define ANAJELDHDBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F917E50)
#define ANAJELDHDBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F918590)
#define ANAJELDHDBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F918540)
#define ANAJELDHDBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F917EB0)
#define ANAJELDHDBH_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1F917F90)
#define ANAJELDHDBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F918340)
#define ANAJELDHDBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9183A0)

inline static constexpr unsigned int ANAJELDHDBH_TypeDefinitionIndex = 30868;

	class ANAJELDHDBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double BCLKCLDFMOA; // 0x18
		::System::UInt32 PDKNJCIEBHA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ANAJELDHDBH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANAJELDHDBH*>**)UnitySDK::FromName("", "ANAJELDHDBH")->GetStaticField(0x41C00);
		}

		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object AFBDHEMJEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANAJELDHDBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANAJELDHDBH*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANAJELDHDBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANAJELDHDBH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANAJELDHDBH*>*(*)())((::PBYTE)hIl2Cpp + ANAJELDHDBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANAJELDHDBH* Clone()
		{
			return ((::ANAJELDHDBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CLONE_OFFSET))(this);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ANAJELDHDBH_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANAJELDHDBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANAJELDHDBH*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANAJELDHDBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANAJELDHDBH*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
