#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIFBMCGPNMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIFBMCGPNMG_BNCBOBAAAIN_OFFSET UNITYSDK_OFFSET(0x1F58B870)
#define EIFBMCGPNMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F58BBE0)
#define EIFBMCGPNMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F58BE90)
#define EIFBMCGPNMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F58B7E0)
#define EIFBMCGPNMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F58B770)
#define EIFBMCGPNMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F58B740)
#define EIFBMCGPNMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F58B9A0)
#define EIFBMCGPNMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F58B880)
#define EIFBMCGPNMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F58BA90)
#define EIFBMCGPNMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F58B6D0)
#define EIFBMCGPNMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F58BCD0)
#define EIFBMCGPNMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F58BC80)
#define EIFBMCGPNMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F58B730)
#define EIFBMCGPNMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F58BAD0)
#define EIFBMCGPNMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F58BB30)

inline static constexpr unsigned int EIFBMCGPNMG_TypeDefinitionIndex = 32542;

	class EIFBMCGPNMG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* LDFHCAHNJCB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EIFBMCGPNMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EIFBMCGPNMG*>**)UnitySDK::FromName("", "EIFBMCGPNMG")->GetStaticField(0x42C00);
		}

		static ::System::Object** StaticGet_MIJGAGLDBKP()
		{
			return (::System::Object**)UnitySDK::FromName("", "EIFBMCGPNMG")->GetStaticField(0x42C08);
		}

		// static const ::System::Object PKCJPOMLOBD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIFBMCGPNMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIFBMCGPNMG*))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIFBMCGPNMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EIFBMCGPNMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EIFBMCGPNMG*>*(*)())((::PBYTE)hIl2Cpp + EIFBMCGPNMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIFBMCGPNMG* Clone()
		{
			return ((::EIFBMCGPNMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* BNCBOBAAAIN()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_BNCBOBAAAIN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIFBMCGPNMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIFBMCGPNMG*))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIFBMCGPNMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIFBMCGPNMG*))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIFBMCGPNMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
