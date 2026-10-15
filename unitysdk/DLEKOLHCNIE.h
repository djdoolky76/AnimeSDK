#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLEKOLHCNIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLEKOLHCNIE_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E1E63B0)
#define DLEKOLHCNIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E6840)
#define DLEKOLHCNIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E69F0)
#define DLEKOLHCNIE_CDDLMGLOLKM_OFFSET UNITYSDK_OFFSET(0x1E1E63D0)
#define DLEKOLHCNIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E6320)
#define DLEKOLHCNIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E62D0)
#define DLEKOLHCNIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E62C0)
#define DLEKOLHCNIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E6470)
#define DLEKOLHCNIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E6400)
#define DLEKOLHCNIE_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E1E63A0)
#define DLEKOLHCNIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E6570)
#define DLEKOLHCNIE_JBBCFFKPFIO_OFFSET UNITYSDK_OFFSET(0x1E1E63C0)
#define DLEKOLHCNIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E6280)
#define DLEKOLHCNIE_KHBGONMDCPI_OFFSET UNITYSDK_OFFSET(0x1E1E6380)
#define DLEKOLHCNIE_LNCKJIDOBPA_OFFSET UNITYSDK_OFFSET(0x1E1E6390)
#define DLEKOLHCNIE_MDOGANFKFID_OFFSET UNITYSDK_OFFSET(0x1E1E63F0)
#define DLEKOLHCNIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E6940)
#define DLEKOLHCNIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E68F0)
#define DLEKOLHCNIE_OHFAFGMOMEI_OFFSET UNITYSDK_OFFSET(0x1E1E63E0)
#define DLEKOLHCNIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E62B0)
#define DLEKOLHCNIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E65B0)
#define DLEKOLHCNIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E6610)

inline static constexpr unsigned int DLEKOLHCNIE_TypeDefinitionIndex = 33708;

	class DLEKOLHCNIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean MGJJGILILBG; // 0x18
		::System::Boolean EEFPMEKJLEB; // 0x19
		::System::Boolean DHAHNCEMJJE; // 0x1A
		::System::Byte _padding0[0x1];
		::System::UInt32 MLCHFINKHHM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DLEKOLHCNIE")->GetStaticField(0x1C600);
		}

		// static const ::System::Object HOLLCCLAJAB; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object CLAKAEEALPF; // 0x0
		// static const ::System::Object OBPJACJDNLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLEKOLHCNIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLEKOLHCNIE*))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLEKOLHCNIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DLEKOLHCNIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLEKOLHCNIE* Clone()
		{
			return ((::DLEKOLHCNIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_CLONE_OFFSET))(this);
		}

		::System::Boolean KHBGONMDCPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_KHBGONMDCPI_OFFSET))(this);
		}

		::System::Void LNCKJIDOBPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_LNCKJIDOBPA_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean JBBCFFKPFIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_JBBCFFKPFIO_OFFSET))(this);
		}

		::System::Void CDDLMGLOLKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_CDDLMGLOLKM_OFFSET))(this, a1);
		}

		::System::Boolean OHFAFGMOMEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_OHFAFGMOMEI_OFFSET))(this);
		}

		::System::Void MDOGANFKFID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_MDOGANFKFID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLEKOLHCNIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLEKOLHCNIE*))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLEKOLHCNIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLEKOLHCNIE*))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLEKOLHCNIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
