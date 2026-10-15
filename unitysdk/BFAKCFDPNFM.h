#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAKCFDPNFM;
class HBONEFMPKKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFAKCFDPNFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA67830)
#define BFAKCFDPNFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA67B00)
#define BFAKCFDPNFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA67220)
#define BFAKCFDPNFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA67190)
#define BFAKCFDPNFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA67180)
#define BFAKCFDPNFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA674F0)
#define BFAKCFDPNFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA67330)
#define BFAKCFDPNFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA67670)
#define BFAKCFDPNFM_HPNCDEEMMOB_OFFSET UNITYSDK_OFFSET(0x1EA67310)
#define BFAKCFDPNFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA67110)
#define BFAKCFDPNFM_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1EA672F0)
#define BFAKCFDPNFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA67950)
#define BFAKCFDPNFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA67890)
#define BFAKCFDPNFM_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1EA67300)
#define BFAKCFDPNFM_NJDHPHAMKGK_OFFSET UNITYSDK_OFFSET(0x1EA67320)
#define BFAKCFDPNFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA67170)
#define BFAKCFDPNFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA676C0)
#define BFAKCFDPNFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA67720)

inline static constexpr unsigned int BFAKCFDPNFM_TypeDefinitionIndex = 31788;

	class BFAKCFDPNFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HBONEFMPKKO* KCMKPBGFHFA; // 0x18
		::System::Boolean CDFDONPAJCP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BFAKCFDPNFM")->GetStaticField(0x41970);
		}

		// static const ::System::Object HBGMNBBBJDO; // 0x0
		// static const ::System::Object NENFGOHFCFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFAKCFDPNFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKCFDPNFM*))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAKCFDPNFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BFAKCFDPNFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFAKCFDPNFM* Clone()
		{
			return ((::BFAKCFDPNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_CLONE_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::HBONEFMPKKO* HPNCDEEMMOB()
		{
			return ((::HBONEFMPKKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_HPNCDEEMMOB_OFFSET))(this);
		}

		::System::Void NJDHPHAMKGK(::HBONEFMPKKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBONEFMPKKO*))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_NJDHPHAMKGK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFAKCFDPNFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFAKCFDPNFM*))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFAKCFDPNFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKCFDPNFM*))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFAKCFDPNFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
