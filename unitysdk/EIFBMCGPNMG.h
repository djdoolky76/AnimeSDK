#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIFBMCGPNMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIFBMCGPNMG_BNCBOBAAAIN_OFFSET UNITYSDK_OFFSET(0x1E2A81D0)
#define EIFBMCGPNMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A8540)
#define EIFBMCGPNMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A87F0)
#define EIFBMCGPNMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A8140)
#define EIFBMCGPNMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A80D0)
#define EIFBMCGPNMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A80A0)
#define EIFBMCGPNMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A8300)
#define EIFBMCGPNMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A81E0)
#define EIFBMCGPNMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A83F0)
#define EIFBMCGPNMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A8030)
#define EIFBMCGPNMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A8630)
#define EIFBMCGPNMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A85E0)
#define EIFBMCGPNMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A8090)
#define EIFBMCGPNMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A8430)
#define EIFBMCGPNMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A8490)

inline static constexpr unsigned int EIFBMCGPNMG_TypeDefinitionIndex = 31629;

	class EIFBMCGPNMG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* LDFHCAHNJCB; // 0x18
		static ::System::Object** StaticGet_MIJGAGLDBKP()
		{
			return (::System::Object**)UnitySDK::FromName("", "EIFBMCGPNMG")->GetStaticField(0x497C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EIFBMCGPNMG")->GetStaticField(0x497C8);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EIFBMCGPNMG_JJGHOBBFNJD_OFFSET))();
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
