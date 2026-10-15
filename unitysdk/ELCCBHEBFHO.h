#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELCCBHEBFHO;
class GHBICGMEFPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELCCBHEBFHO_BJMELFDLPNM_OFFSET UNITYSDK_OFFSET(0x1E2CA750)
#define ELCCBHEBFHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2CABE0)
#define ELCCBHEBFHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CAF00)
#define ELCCBHEBFHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2CA6A0)
#define ELCCBHEBFHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2CA630)
#define ELCCBHEBFHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CA620)
#define ELCCBHEBFHO_DMEPMPHDHOI_OFFSET UNITYSDK_OFFSET(0x1E2CA740)
#define ELCCBHEBFHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2CA8E0)
#define ELCCBHEBFHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2CA760)
#define ELCCBHEBFHO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2CA730)
#define ELCCBHEBFHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2CAA60)
#define ELCCBHEBFHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2CA5E0)
#define ELCCBHEBFHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2CAD40)
#define ELCCBHEBFHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2CACB0)
#define ELCCBHEBFHO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2CA720)
#define ELCCBHEBFHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2CA610)
#define ELCCBHEBFHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2CAAA0)
#define ELCCBHEBFHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2CAB00)

inline static constexpr unsigned int ELCCBHEBFHO_TypeDefinitionIndex = 26117;

	class ELCCBHEBFHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GHBICGMEFPL* GHAHLIDIDPC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ELCCBHEBFHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELCCBHEBFHO*>**)UnitySDK::FromName("", "ELCCBHEBFHO")->GetStaticField(0x4E460);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HLJHDBJJCEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELCCBHEBFHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELCCBHEBFHO*))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELCCBHEBFHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELCCBHEBFHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELCCBHEBFHO*>*(*)())((::PBYTE)hIl2Cpp + ELCCBHEBFHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELCCBHEBFHO* Clone()
		{
			return ((::ELCCBHEBFHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GHBICGMEFPL* DMEPMPHDHOI()
		{
			return ((::GHBICGMEFPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_DMEPMPHDHOI_OFFSET))(this);
		}

		::System::Void BJMELFDLPNM(::GHBICGMEFPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHBICGMEFPL*))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_BJMELFDLPNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELCCBHEBFHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELCCBHEBFHO*))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELCCBHEBFHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELCCBHEBFHO*))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELCCBHEBFHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
