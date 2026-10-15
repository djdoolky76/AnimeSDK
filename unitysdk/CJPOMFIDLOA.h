#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJPOMFIDLOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJPOMFIDLOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0BA790)
#define CJPOMFIDLOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BA9B0)
#define CJPOMFIDLOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0BA380)
#define CJPOMFIDLOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0BA350)
#define CJPOMFIDLOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BA340)
#define CJPOMFIDLOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0BA510)
#define CJPOMFIDLOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0BA410)
#define CJPOMFIDLOA_FCHEMONJFGI_OFFSET UNITYSDK_OFFSET(0x1E0BA3F0)
#define CJPOMFIDLOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0BA680)
#define CJPOMFIDLOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0BA2D0)
#define CJPOMFIDLOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0BA850)
#define CJPOMFIDLOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0BA820)
#define CJPOMFIDLOA_NBLLLFIFBLL_OFFSET UNITYSDK_OFFSET(0x1E0BA400)
#define CJPOMFIDLOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0BA330)
#define CJPOMFIDLOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0BA6B0)
#define CJPOMFIDLOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0BA710)

inline static constexpr unsigned int CJPOMFIDLOA_TypeDefinitionIndex = 29507;

	class CJPOMFIDLOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BGGMKOBGPDA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CJPOMFIDLOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJPOMFIDLOA*>**)UnitySDK::FromName("", "CJPOMFIDLOA")->GetStaticField(0x191B0);
		}

		// static const ::System::Object NLAHKDAONBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJPOMFIDLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJPOMFIDLOA*))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJPOMFIDLOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJPOMFIDLOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJPOMFIDLOA*>*(*)())((::PBYTE)hIl2Cpp + CJPOMFIDLOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJPOMFIDLOA* Clone()
		{
			return ((::CJPOMFIDLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FCHEMONJFGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_FCHEMONJFGI_OFFSET))(this);
		}

		::System::Void NBLLLFIFBLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_NBLLLFIFBLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJPOMFIDLOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJPOMFIDLOA*))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJPOMFIDLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJPOMFIDLOA*))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJPOMFIDLOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
