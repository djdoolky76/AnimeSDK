#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFCOCPHIOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEFCOCPHIOD_ABMCOINEEFF_OFFSET UNITYSDK_OFFSET(0x1F563AC0)
#define EEFCOCPHIOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F563E60)
#define EEFCOCPHIOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5641E0)
#define EEFCOCPHIOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F563A40)
#define EEFCOCPHIOD_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1F563AD0)
#define EEFCOCPHIOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F563A00)
#define EEFCOCPHIOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5639F0)
#define EEFCOCPHIOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F563BD0)
#define EEFCOCPHIOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F563AF0)
#define EEFCOCPHIOD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F563AA0)
#define EEFCOCPHIOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F563CA0)
#define EEFCOCPHIOD_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1F563AE0)
#define EEFCOCPHIOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5639B0)
#define EEFCOCPHIOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F564040)
#define EEFCOCPHIOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F563FF0)
#define EEFCOCPHIOD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F563A90)
#define EEFCOCPHIOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5639E0)
#define EEFCOCPHIOD_PIBPAKNAJPJ_OFFSET UNITYSDK_OFFSET(0x1F563AB0)
#define EEFCOCPHIOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F563CD0)
#define EEFCOCPHIOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F563D30)

inline static constexpr unsigned int EEFCOCPHIOD_TypeDefinitionIndex = 31684;

	class EEFCOCPHIOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OLHOKKOJDCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 KJAENGKDFJD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EEFCOCPHIOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EEFCOCPHIOD*>**)UnitySDK::FromName("", "EEFCOCPHIOD")->GetStaticField(0x51220);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HHAFBFIMNML; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEFCOCPHIOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEFCOCPHIOD*))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFCOCPHIOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EEFCOCPHIOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EEFCOCPHIOD*>*(*)())((::PBYTE)hIl2Cpp + EEFCOCPHIOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEFCOCPHIOD* Clone()
		{
			return ((::EEFCOCPHIOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PIBPAKNAJPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_PIBPAKNAJPJ_OFFSET))(this);
		}

		::System::Void ABMCOINEEFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_ABMCOINEEFF_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEFCOCPHIOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEFCOCPHIOD*))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEFCOCPHIOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEFCOCPHIOD*))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEFCOCPHIOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
