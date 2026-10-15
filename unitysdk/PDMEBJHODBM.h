#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDMEBJHODBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDMEBJHODBM_ABGGICDBEKG_OFFSET UNITYSDK_OFFSET(0x1DEE4490)
#define PDMEBJHODBM_AEEADIIJKDP_OFFSET UNITYSDK_OFFSET(0x1DEE4460)
#define PDMEBJHODBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE4830)
#define PDMEBJHODBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE4BB0)
#define PDMEBJHODBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE4410)
#define PDMEBJHODBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE43D0)
#define PDMEBJHODBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE43C0)
#define PDMEBJHODBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE45A0)
#define PDMEBJHODBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE44C0)
#define PDMEBJHODBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE4670)
#define PDMEBJHODBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE4380)
#define PDMEBJHODBM_LMAAJAPKCDP_OFFSET UNITYSDK_OFFSET(0x1DEE44A0)
#define PDMEBJHODBM_MBCLOGAAFEB_OFFSET UNITYSDK_OFFSET(0x1DEE44B0)
#define PDMEBJHODBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE4A10)
#define PDMEBJHODBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE49C0)
#define PDMEBJHODBM_OEEDGFFEMKE_OFFSET UNITYSDK_OFFSET(0x1DEE4480)
#define PDMEBJHODBM_OFCBDNMHENC_OFFSET UNITYSDK_OFFSET(0x1DEE4470)
#define PDMEBJHODBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE43B0)
#define PDMEBJHODBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE46A0)
#define PDMEBJHODBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE4700)

inline static constexpr unsigned int PDMEBJHODBM_TypeDefinitionIndex = 31998;

	class PDMEBJHODBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NHLGACILMND; // 0x18
		::System::UInt32 EJAIFMMHLFK; // 0x1C
		::System::UInt32 NFCMMNKDPIF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PDMEBJHODBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDMEBJHODBM*>**)UnitySDK::FromName("", "PDMEBJHODBM")->GetStaticField(0x305C0);
		}

		// static const ::System::Object ANANDKFDEJC; // 0x0
		// static const ::System::Object IMNNKNAKABI; // 0x0
		// static const ::System::Object BOCHPGKGJOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDMEBJHODBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDMEBJHODBM*))((::PBYTE)hIl2Cpp + PDMEBJHODBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDMEBJHODBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDMEBJHODBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDMEBJHODBM*>*(*)())((::PBYTE)hIl2Cpp + PDMEBJHODBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDMEBJHODBM* Clone()
		{
			return ((::PDMEBJHODBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AEEADIIJKDP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_AEEADIIJKDP_OFFSET))(this);
		}

		::System::Void OFCBDNMHENC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDMEBJHODBM_OFCBDNMHENC_OFFSET))(this, a1);
		}

		::System::UInt32 OEEDGFFEMKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_OEEDGFFEMKE_OFFSET))(this);
		}

		::System::Void ABGGICDBEKG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDMEBJHODBM_ABGGICDBEKG_OFFSET))(this, a1);
		}

		::System::UInt32 LMAAJAPKCDP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_LMAAJAPKCDP_OFFSET))(this);
		}

		::System::Void MBCLOGAAFEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDMEBJHODBM_MBCLOGAAFEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDMEBJHODBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDMEBJHODBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDMEBJHODBM*))((::PBYTE)hIl2Cpp + PDMEBJHODBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDMEBJHODBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDMEBJHODBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDMEBJHODBM*))((::PBYTE)hIl2Cpp + PDMEBJHODBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDMEBJHODBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
