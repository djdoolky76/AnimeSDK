#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGGGKJMCJOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGGGKJMCJOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8741B0)
#define HGGGKJMCJOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8743D0)
#define HGGGKJMCJOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F873DA0)
#define HGGGKJMCJOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F873D70)
#define HGGGKJMCJOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F873D60)
#define HGGGKJMCJOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F873F30)
#define HGGGKJMCJOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F873E30)
#define HGGGKJMCJOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8740A0)
#define HGGGKJMCJOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F873CF0)
#define HGGGKJMCJOO_KDJMFKJBDCD_OFFSET UNITYSDK_OFFSET(0x1F873E20)
#define HGGGKJMCJOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F874270)
#define HGGGKJMCJOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F874240)
#define HGGGKJMCJOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F873D50)
#define HGGGKJMCJOO_PCCAFDGEEOF_OFFSET UNITYSDK_OFFSET(0x1F873E10)
#define HGGGKJMCJOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8740D0)
#define HGGGKJMCJOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F874130)

inline static constexpr unsigned int HGGGKJMCJOO_TypeDefinitionIndex = 30376;

	class HGGGKJMCJOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIGDPFMMAPL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HGGGKJMCJOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGGGKJMCJOO*>**)UnitySDK::FromName("", "HGGGKJMCJOO")->GetStaticField(0x2DB40);
		}

		// static const ::System::Object KALJAJFPAHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGGGKJMCJOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGGGKJMCJOO*))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGGGKJMCJOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HGGGKJMCJOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGGGKJMCJOO*>*(*)())((::PBYTE)hIl2Cpp + HGGGKJMCJOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGGGKJMCJOO* Clone()
		{
			return ((::HGGGKJMCJOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCCAFDGEEOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_PCCAFDGEEOF_OFFSET))(this);
		}

		::System::Void KDJMFKJBDCD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_KDJMFKJBDCD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGGGKJMCJOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGGGKJMCJOO*))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGGGKJMCJOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGGGKJMCJOO*))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGGGKJMCJOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
