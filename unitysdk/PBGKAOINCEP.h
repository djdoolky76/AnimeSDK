#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNBFDNKLHE;
class PBGKAOINCEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBGKAOINCEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBE90F0)
#define PBGKAOINCEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE93E0)
#define PBGKAOINCEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBE8BA0)
#define PBGKAOINCEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBE8B30)
#define PBGKAOINCEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE8B20)
#define PBGKAOINCEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBE8DE0)
#define PBGKAOINCEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBE8C60)
#define PBGKAOINCEP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FBE8C50)
#define PBGKAOINCEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBE8F60)
#define PBGKAOINCEP_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1FBE8C30)
#define PBGKAOINCEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBE8AE0)
#define PBGKAOINCEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBE9240)
#define PBGKAOINCEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBE91C0)
#define PBGKAOINCEP_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1FBE8C20)
#define PBGKAOINCEP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FBE8C40)
#define PBGKAOINCEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBE8B10)
#define PBGKAOINCEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBE8FB0)
#define PBGKAOINCEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBE9010)

inline static constexpr unsigned int PBGKAOINCEP_TypeDefinitionIndex = 27394;

	class PBGKAOINCEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PBGKAOINCEP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBGKAOINCEP*>**)UnitySDK::FromName("", "PBGKAOINCEP")->GetStaticField(0x2D210);
		}

		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBGKAOINCEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGKAOINCEP*))((::PBYTE)hIl2Cpp + PBGKAOINCEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBGKAOINCEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBGKAOINCEP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBGKAOINCEP*>*(*)())((::PBYTE)hIl2Cpp + PBGKAOINCEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBGKAOINCEP* Clone()
		{
			return ((::PBGKAOINCEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP_CLONE_OFFSET))(this);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + PBGKAOINCEP_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBGKAOINCEP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBGKAOINCEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBGKAOINCEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBGKAOINCEP*))((::PBYTE)hIl2Cpp + PBGKAOINCEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBGKAOINCEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBGKAOINCEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGKAOINCEP*))((::PBYTE)hIl2Cpp + PBGKAOINCEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBGKAOINCEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
