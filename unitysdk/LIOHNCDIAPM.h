#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOEAOPNEAC;
class LIOHNCDIAPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIOHNCDIAPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E973310)
#define LIOHNCDIAPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E973630)
#define LIOHNCDIAPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E972DC0)
#define LIOHNCDIAPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E972D50)
#define LIOHNCDIAPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E972D40)
#define LIOHNCDIAPM_EAEMJJKEGJJ_OFFSET UNITYSDK_OFFSET(0x1E972E40)
#define LIOHNCDIAPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E973000)
#define LIOHNCDIAPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E972E80)
#define LIOHNCDIAPM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E972E70)
#define LIOHNCDIAPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E973180)
#define LIOHNCDIAPM_HGDGANGFNNE_OFFSET UNITYSDK_OFFSET(0x1E972E50)
#define LIOHNCDIAPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E972D00)
#define LIOHNCDIAPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E973470)
#define LIOHNCDIAPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9733E0)
#define LIOHNCDIAPM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E972E60)
#define LIOHNCDIAPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E972D30)
#define LIOHNCDIAPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9731D0)
#define LIOHNCDIAPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E973230)

inline static constexpr unsigned int LIOHNCDIAPM_TypeDefinitionIndex = 33384;

	class LIOHNCDIAPM : public ::System::Object
	{
	public:
		::HKOEAOPNEAC* AAHFBGDFEEF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LIOHNCDIAPM")->GetStaticField(0x45ED0);
		}

		// static const ::System::Object ANLLGHKJCIB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIOHNCDIAPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIOHNCDIAPM*))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIOHNCDIAPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LIOHNCDIAPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIOHNCDIAPM* Clone()
		{
			return ((::LIOHNCDIAPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_CLONE_OFFSET))(this);
		}

		::HKOEAOPNEAC* EAEMJJKEGJJ()
		{
			return ((::HKOEAOPNEAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_EAEMJJKEGJJ_OFFSET))(this);
		}

		::System::Void HGDGANGFNNE(::HKOEAOPNEAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_HGDGANGFNNE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIOHNCDIAPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIOHNCDIAPM*))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIOHNCDIAPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIOHNCDIAPM*))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIOHNCDIAPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
