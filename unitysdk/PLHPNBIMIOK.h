#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLHPNBIMIOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLHPNBIMIOK_BPKBAJOMHDN_OFFSET UNITYSDK_OFFSET(0x1F2528B0)
#define PLHPNBIMIOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F252C40)
#define PLHPNBIMIOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F252F10)
#define PLHPNBIMIOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F252840)
#define PLHPNBIMIOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F252810)
#define PLHPNBIMIOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F252800)
#define PLHPNBIMIOK_EOGADOLFGDG_OFFSET UNITYSDK_OFFSET(0x1F2528E0)
#define PLHPNBIMIOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F252A00)
#define PLHPNBIMIOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2528F0)
#define PLHPNBIMIOK_FNCFPCHMKEN_OFFSET UNITYSDK_OFFSET(0x1F2528C0)
#define PLHPNBIMIOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F252AD0)
#define PLHPNBIMIOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F252790)
#define PLHPNBIMIOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F252D90)
#define PLHPNBIMIOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F252D50)
#define PLHPNBIMIOK_OLODHGKJKOD_OFFSET UNITYSDK_OFFSET(0x1F2528D0)
#define PLHPNBIMIOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2527F0)
#define PLHPNBIMIOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F252B00)
#define PLHPNBIMIOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F252B60)

inline static constexpr unsigned int PLHPNBIMIOK_TypeDefinitionIndex = 26193;

	class PLHPNBIMIOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PHLBLOHJCPC; // 0x18
		::System::UInt32 IFDJOMHDIKL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PLHPNBIMIOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLHPNBIMIOK*>**)UnitySDK::FromName("", "PLHPNBIMIOK")->GetStaticField(0x3D1A0);
		}

		// static const ::System::Object FIBNFGLHBJJ; // 0x0
		// static const ::System::Object DJPIEEIGLKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLHPNBIMIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHPNBIMIOK*))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHPNBIMIOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLHPNBIMIOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLHPNBIMIOK*>*(*)())((::PBYTE)hIl2Cpp + PLHPNBIMIOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLHPNBIMIOK* Clone()
		{
			return ((::PLHPNBIMIOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPKBAJOMHDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_BPKBAJOMHDN_OFFSET))(this);
		}

		::System::Void FNCFPCHMKEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_FNCFPCHMKEN_OFFSET))(this, a1);
		}

		::System::UInt32 OLODHGKJKOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_OLODHGKJKOD_OFFSET))(this);
		}

		::System::Void EOGADOLFGDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_EOGADOLFGDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLHPNBIMIOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLHPNBIMIOK*))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLHPNBIMIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHPNBIMIOK*))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLHPNBIMIOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
