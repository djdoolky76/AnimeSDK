#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEGLJDELBHA;
class NJGHHOHJGEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJGHHOHJGEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB10670)
#define NJGHHOHJGEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB10940)
#define NJGHHOHJGEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB10110)
#define NJGHHOHJGEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB100C0)
#define NJGHHOHJGEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB100B0)
#define NJGHHOHJGEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB10330)
#define NJGHHOHJGEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB101B0)
#define NJGHHOHJGEO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB10180)
#define NJGHHOHJGEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB104B0)
#define NJGHHOHJGEO_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1EB101A0)
#define NJGHHOHJGEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB10070)
#define NJGHHOHJGEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB107B0)
#define NJGHHOHJGEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB10740)
#define NJGHHOHJGEO_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1EB10190)
#define NJGHHOHJGEO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB10170)
#define NJGHHOHJGEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB100A0)
#define NJGHHOHJGEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB10530)
#define NJGHHOHJGEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB10590)

inline static constexpr unsigned int NJGHHOHJGEO_TypeDefinitionIndex = 32429;

	class NJGHHOHJGEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GEGLJDELBHA* CHFNJJAMCCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NJGHHOHJGEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJGHHOHJGEO*>**)UnitySDK::FromName("", "NJGHHOHJGEO")->GetStaticField(0x688C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJGHHOHJGEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJGHHOHJGEO*))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJGHHOHJGEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJGHHOHJGEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJGHHOHJGEO*>*(*)())((::PBYTE)hIl2Cpp + NJGHHOHJGEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJGHHOHJGEO* Clone()
		{
			return ((::NJGHHOHJGEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GEGLJDELBHA* NDGJGMEFMLH()
		{
			return ((::GEGLJDELBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::GEGLJDELBHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGLJDELBHA*))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJGHHOHJGEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJGHHOHJGEO*))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJGHHOHJGEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJGHHOHJGEO*))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJGHHOHJGEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
