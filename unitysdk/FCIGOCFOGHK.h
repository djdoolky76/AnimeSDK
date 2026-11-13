#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCIGOCFOGHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCIGOCFOGHK_BANCLADFGNI_OFFSET UNITYSDK_OFFSET(0x1F8A91B0)
#define FCIGOCFOGHK_BMEDBCFMGAB_OFFSET UNITYSDK_OFFSET(0x1F8A91C0)
#define FCIGOCFOGHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8A94F0)
#define FCIGOCFOGHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8A97C0)
#define FCIGOCFOGHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8A9140)
#define FCIGOCFOGHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8A9110)
#define FCIGOCFOGHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A9100)
#define FCIGOCFOGHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8A92B0)
#define FCIGOCFOGHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8A91D0)
#define FCIGOCFOGHK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F8A91A0)
#define FCIGOCFOGHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8A9380)
#define FCIGOCFOGHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8A90C0)
#define FCIGOCFOGHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8A9640)
#define FCIGOCFOGHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8A9600)
#define FCIGOCFOGHK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F8A9190)
#define FCIGOCFOGHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8A90F0)
#define FCIGOCFOGHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8A93B0)
#define FCIGOCFOGHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8A9410)

inline static constexpr unsigned int FCIGOCFOGHK_TypeDefinitionIndex = 28127;

	class FCIGOCFOGHK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 MOKJAJGEAHM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FCIGOCFOGHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCIGOCFOGHK*>**)UnitySDK::FromName("", "FCIGOCFOGHK")->GetStaticField(0x43CD0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ICBBGLFEJEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCIGOCFOGHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCIGOCFOGHK*))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCIGOCFOGHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCIGOCFOGHK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCIGOCFOGHK*>*(*)())((::PBYTE)hIl2Cpp + FCIGOCFOGHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCIGOCFOGHK* Clone()
		{
			return ((::FCIGOCFOGHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BANCLADFGNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_BANCLADFGNI_OFFSET))(this);
		}

		::System::Void BMEDBCFMGAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_BMEDBCFMGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCIGOCFOGHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCIGOCFOGHK*))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCIGOCFOGHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCIGOCFOGHK*))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCIGOCFOGHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
