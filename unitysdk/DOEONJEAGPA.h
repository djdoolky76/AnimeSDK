#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEONJEAGPA;
class JGAMMPGMCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOEONJEAGPA_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E1FF3D0)
#define DOEONJEAGPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1FF8C0)
#define DOEONJEAGPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FFB90)
#define DOEONJEAGPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1FF330)
#define DOEONJEAGPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1FF2C0)
#define DOEONJEAGPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FF2B0)
#define DOEONJEAGPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1FF570)
#define DOEONJEAGPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1FF3F0)
#define DOEONJEAGPA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1FF3C0)
#define DOEONJEAGPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1FF6F0)
#define DOEONJEAGPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1FF270)
#define DOEONJEAGPA_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E1FF3E0)
#define DOEONJEAGPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1FFA00)
#define DOEONJEAGPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1FF990)
#define DOEONJEAGPA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1FF3B0)
#define DOEONJEAGPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1FF2A0)
#define DOEONJEAGPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1FF780)
#define DOEONJEAGPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1FF7E0)

inline static constexpr unsigned int DOEONJEAGPA_TypeDefinitionIndex = 33692;

	class DOEONJEAGPA : public ::System::Object
	{
	public:
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DOEONJEAGPA")->GetStaticField(0x41BD0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOEONJEAGPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEONJEAGPA*))((::PBYTE)hIl2Cpp + DOEONJEAGPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEONJEAGPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DOEONJEAGPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOEONJEAGPA* Clone()
		{
			return ((::DOEONJEAGPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOEONJEAGPA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + DOEONJEAGPA_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOEONJEAGPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOEONJEAGPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOEONJEAGPA*))((::PBYTE)hIl2Cpp + DOEONJEAGPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOEONJEAGPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOEONJEAGPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEONJEAGPA*))((::PBYTE)hIl2Cpp + DOEONJEAGPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOEONJEAGPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
