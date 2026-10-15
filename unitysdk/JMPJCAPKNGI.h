#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPJCAPKNGI;
class KHNBFDNKLHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMPJCAPKNGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E790A30)
#define JMPJCAPKNGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E790D20)
#define JMPJCAPKNGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7904E0)
#define JMPJCAPKNGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E790470)
#define JMPJCAPKNGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E790460)
#define JMPJCAPKNGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E790720)
#define JMPJCAPKNGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7905A0)
#define JMPJCAPKNGI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E790590)
#define JMPJCAPKNGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7908A0)
#define JMPJCAPKNGI_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E790570)
#define JMPJCAPKNGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E790420)
#define JMPJCAPKNGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E790B80)
#define JMPJCAPKNGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E790B00)
#define JMPJCAPKNGI_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E790560)
#define JMPJCAPKNGI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E790580)
#define JMPJCAPKNGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E790450)
#define JMPJCAPKNGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7908F0)
#define JMPJCAPKNGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E790950)

inline static constexpr unsigned int JMPJCAPKNGI_TypeDefinitionIndex = 26943;

	class JMPJCAPKNGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JMPJCAPKNGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMPJCAPKNGI*>**)UnitySDK::FromName("", "JMPJCAPKNGI")->GetStaticField(0x6C3E0);
		}

		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMPJCAPKNGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMPJCAPKNGI*))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPJCAPKNGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMPJCAPKNGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMPJCAPKNGI*>*(*)())((::PBYTE)hIl2Cpp + JMPJCAPKNGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMPJCAPKNGI* Clone()
		{
			return ((::JMPJCAPKNGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_CLONE_OFFSET))(this);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMPJCAPKNGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMPJCAPKNGI*))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMPJCAPKNGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMPJCAPKNGI*))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMPJCAPKNGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
