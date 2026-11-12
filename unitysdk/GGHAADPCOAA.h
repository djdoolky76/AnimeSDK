#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHAADPCOAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGHAADPCOAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F76AA70)
#define GGHAADPCOAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F76AD40)
#define GGHAADPCOAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F76A670)
#define GGHAADPCOAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F76A640)
#define GGHAADPCOAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F76A630)
#define GGHAADPCOAA_DOALIBOHIJD_OFFSET UNITYSDK_OFFSET(0x1F76A6F0)
#define GGHAADPCOAA_EJNHGMNLNHE_OFFSET UNITYSDK_OFFSET(0x1F76A700)
#define GGHAADPCOAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F76A830)
#define GGHAADPCOAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F76A720)
#define GGHAADPCOAA_FJJMLFKCFAL_OFFSET UNITYSDK_OFFSET(0x1F76A710)
#define GGHAADPCOAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F76A900)
#define GGHAADPCOAA_IBFAPHKADID_OFFSET UNITYSDK_OFFSET(0x1F76A6E0)
#define GGHAADPCOAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F76A5C0)
#define GGHAADPCOAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F76ABC0)
#define GGHAADPCOAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F76AB80)
#define GGHAADPCOAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F76A620)
#define GGHAADPCOAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F76A930)
#define GGHAADPCOAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F76A990)

inline static constexpr unsigned int GGHAADPCOAA_TypeDefinitionIndex = 29770;

	class GGHAADPCOAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOCGKJCPIDP; // 0x18
		::System::UInt32 BCFLLPFCKGI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GGHAADPCOAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGHAADPCOAA*>**)UnitySDK::FromName("", "GGHAADPCOAA")->GetStaticField(0xE330);
		}

		// static const ::System::Object MMAFLHDLFJL; // 0x0
		// static const ::System::Object FPJEDCEPJNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGHAADPCOAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHAADPCOAA*))((::PBYTE)hIl2Cpp + GGHAADPCOAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHAADPCOAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGHAADPCOAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGHAADPCOAA*>*(*)())((::PBYTE)hIl2Cpp + GGHAADPCOAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGHAADPCOAA* Clone()
		{
			return ((::GGHAADPCOAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 IBFAPHKADID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA_IBFAPHKADID_OFFSET))(this);
		}

		::System::Void DOALIBOHIJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGHAADPCOAA_DOALIBOHIJD_OFFSET))(this, a1);
		}

		::System::UInt32 EJNHGMNLNHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA_EJNHGMNLNHE_OFFSET))(this);
		}

		::System::Void FJJMLFKCFAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGHAADPCOAA_FJJMLFKCFAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGHAADPCOAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGHAADPCOAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGHAADPCOAA*))((::PBYTE)hIl2Cpp + GGHAADPCOAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGHAADPCOAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGHAADPCOAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHAADPCOAA*))((::PBYTE)hIl2Cpp + GGHAADPCOAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGHAADPCOAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
