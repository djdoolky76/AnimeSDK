#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEGLJDELBHA;
class KPJCDAOHOAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPJCDAOHOAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8BDA20)
#define KPJCDAOHOAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BDCF0)
#define KPJCDAOHOAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8BD4C0)
#define KPJCDAOHOAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8BD470)
#define KPJCDAOHOAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BD460)
#define KPJCDAOHOAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8BD6E0)
#define KPJCDAOHOAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BD560)
#define KPJCDAOHOAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8BD530)
#define KPJCDAOHOAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8BD860)
#define KPJCDAOHOAA_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E8BD550)
#define KPJCDAOHOAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8BD420)
#define KPJCDAOHOAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8BDB60)
#define KPJCDAOHOAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8BDAF0)
#define KPJCDAOHOAA_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E8BD540)
#define KPJCDAOHOAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8BD520)
#define KPJCDAOHOAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8BD450)
#define KPJCDAOHOAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8BD8E0)
#define KPJCDAOHOAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8BD940)

inline static constexpr unsigned int KPJCDAOHOAA_TypeDefinitionIndex = 32374;

	class KPJCDAOHOAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GEGLJDELBHA* CHFNJJAMCCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KPJCDAOHOAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPJCDAOHOAA*>**)UnitySDK::FromName("", "KPJCDAOHOAA")->GetStaticField(0x2CEF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPJCDAOHOAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJCDAOHOAA*))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJCDAOHOAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPJCDAOHOAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPJCDAOHOAA*>*(*)())((::PBYTE)hIl2Cpp + KPJCDAOHOAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPJCDAOHOAA* Clone()
		{
			return ((::KPJCDAOHOAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GEGLJDELBHA* NDGJGMEFMLH()
		{
			return ((::GEGLJDELBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::GEGLJDELBHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGLJDELBHA*))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPJCDAOHOAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPJCDAOHOAA*))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPJCDAOHOAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJCDAOHOAA*))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPJCDAOHOAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
