#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPOBLIFMGN;
class FMNKKAMOHEE;
class GLHCHCJMFGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKPOBLIFMGN_AAIIDJCKKAP_OFFSET UNITYSDK_OFFSET(0x2059E430)
#define CKPOBLIFMGN_AMIDDAMHKIK_OFFSET UNITYSDK_OFFSET(0x2059E410)
#define CKPOBLIFMGN_BGAJICHNMKL_OFFSET UNITYSDK_OFFSET(0x2059E400)
#define CKPOBLIFMGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2059E9C0)
#define CKPOBLIFMGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x2059EE00)
#define CKPOBLIFMGN_CLONE_OFFSET UNITYSDK_OFFSET(0x2059E3C0)
#define CKPOBLIFMGN_CMPAOKJFDIO_OFFSET UNITYSDK_OFFSET(0x2059E420)
#define CKPOBLIFMGN_CNCPFLAOJLM_OFFSET UNITYSDK_OFFSET(0x2059E3F0)
#define CKPOBLIFMGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2059E2F0)
#define CKPOBLIFMGN_CTOR_OFFSET UNITYSDK_OFFSET(0x2059E2B0)
#define CKPOBLIFMGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2059E470)
#define CKPOBLIFMGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x2059E440)
#define CKPOBLIFMGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2059E650)
#define CKPOBLIFMGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2059E270)
#define CKPOBLIFMGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2059EBC0)
#define CKPOBLIFMGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2059EA90)
#define CKPOBLIFMGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2059E2A0)
#define CKPOBLIFMGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2059E7D0)
#define CKPOBLIFMGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x2059E830)

inline static constexpr unsigned int CKPOBLIFMGN_TypeDefinitionIndex = 30451;

	class CKPOBLIFMGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::GLHCHCJMFGA*>* BCFLLIOMKEN; // 0x18
		::FMNKKAMOHEE* INAGEMADPEB; // 0x20
		::System::Boolean AFKHEHMOJIK; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CKPOBLIFMGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKPOBLIFMGN*>**)UnitySDK::FromName("", "CKPOBLIFMGN")->GetStaticField(0x13070);
		}

		static ::System::Object** StaticGet_DJPHAINKIIP()
		{
			return (::System::Object**)UnitySDK::FromName("", "CKPOBLIFMGN")->GetStaticField(0x13078);
		}

		// static const ::System::Object GLDKEKIDJHG; // 0x0
		// static const ::System::Object BEFCEPKJDIC; // 0x0
		// static const ::System::Object DLKFJKFALDP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKPOBLIFMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKPOBLIFMGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKPOBLIFMGN*>*(*)())((::PBYTE)hIl2Cpp + CKPOBLIFMGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKPOBLIFMGN* Clone()
		{
			return ((::CKPOBLIFMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CLONE_OFFSET))(this);
		}

		::System::Boolean CNCPFLAOJLM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CNCPFLAOJLM_OFFSET))(this);
		}

		::System::Void BGAJICHNMKL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_BGAJICHNMKL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::GLHCHCJMFGA*>* AMIDDAMHKIK()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::GLHCHCJMFGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_AMIDDAMHKIK_OFFSET))(this);
		}

		::FMNKKAMOHEE* CMPAOKJFDIO()
		{
			return ((::FMNKKAMOHEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CMPAOKJFDIO_OFFSET))(this);
		}

		::System::Void AAIIDJCKKAP(::FMNKKAMOHEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMNKKAMOHEE*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_AAIIDJCKKAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKPOBLIFMGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKPOBLIFMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
