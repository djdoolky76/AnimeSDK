#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFIDNDFHJGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFIDNDFHJGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB02A10)
#define NFIDNDFHJGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB02CE0)
#define NFIDNDFHJGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB021F0)
#define NFIDNDFHJGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB021B0)
#define NFIDNDFHJGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB021A0)
#define NFIDNDFHJGN_DIJBMAOPGOB_OFFSET UNITYSDK_OFFSET(0x1EB02270)
#define NFIDNDFHJGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB02330)
#define NFIDNDFHJGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB022D0)
#define NFIDNDFHJGN_FCHEMONJFGI_OFFSET UNITYSDK_OFFSET(0x1EB022B0)
#define NFIDNDFHJGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB02600)
#define NFIDNDFHJGN_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1EB022A0)
#define NFIDNDFHJGN_INAFIFPJOLB_OFFSET UNITYSDK_OFFSET(0x1EB02280)
#define NFIDNDFHJGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB02130)
#define NFIDNDFHJGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB02B40)
#define NFIDNDFHJGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB02AD0)
#define NFIDNDFHJGN_NBLLLFIFBLL_OFFSET UNITYSDK_OFFSET(0x1EB022C0)
#define NFIDNDFHJGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB02190)
#define NFIDNDFHJGN_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1EB02290)
#define NFIDNDFHJGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB02850)
#define NFIDNDFHJGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB028B0)

inline static constexpr unsigned int NFIDNDFHJGN_TypeDefinitionIndex = 29625;

	class NFIDNDFHJGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double BCLKCLDFMOA; // 0x18
		::System::Double LEOIDKJCJML; // 0x20
		::System::UInt32 BGGMKOBGPDA; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NFIDNDFHJGN")->GetStaticField(0x15480);
		}

		// static const ::System::Object PHKNMPELNOL; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object NLAHKDAONBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFIDNDFHJGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFIDNDFHJGN*))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFIDNDFHJGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NFIDNDFHJGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFIDNDFHJGN* Clone()
		{
			return ((::NFIDNDFHJGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_CLONE_OFFSET))(this);
		}

		::System::Double DIJBMAOPGOB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_DIJBMAOPGOB_OFFSET))(this);
		}

		::System::Void INAFIFPJOLB(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_INAFIFPJOLB_OFFSET))(this, a1);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::UInt32 FCHEMONJFGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_FCHEMONJFGI_OFFSET))(this);
		}

		::System::Void NBLLLFIFBLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_NBLLLFIFBLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFIDNDFHJGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFIDNDFHJGN*))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFIDNDFHJGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFIDNDFHJGN*))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFIDNDFHJGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
