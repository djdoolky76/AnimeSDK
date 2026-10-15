#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBPCKIKJKOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBPCKIKJKOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C1990)
#define MBPCKIKJKOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C1C60)
#define MBPCKIKJKOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C15E0)
#define MBPCKIKJKOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C15B0)
#define MBPCKIKJKOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C15A0)
#define MBPCKIKJKOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C1750)
#define MBPCKIKJKOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C1670)
#define MBPCKIKJKOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9C1660)
#define MBPCKIKJKOF_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E9C1630)
#define MBPCKIKJKOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C1820)
#define MBPCKIKJKOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C1560)
#define MBPCKIKJKOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C1AE0)
#define MBPCKIKJKOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C1AA0)
#define MBPCKIKJKOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9C1650)
#define MBPCKIKJKOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C1590)
#define MBPCKIKJKOF_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E9C1640)
#define MBPCKIKJKOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C1850)
#define MBPCKIKJKOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C18B0)

inline static constexpr unsigned int MBPCKIKJKOF_TypeDefinitionIndex = 34455;

	class MBPCKIKJKOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MBPCKIKJKOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBPCKIKJKOF*>**)UnitySDK::FromName("", "MBPCKIKJKOF")->GetStaticField(0x48AF0);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBPCKIKJKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBPCKIKJKOF*))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPCKIKJKOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBPCKIKJKOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBPCKIKJKOF*>*(*)())((::PBYTE)hIl2Cpp + MBPCKIKJKOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBPCKIKJKOF* Clone()
		{
			return ((::MBPCKIKJKOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBPCKIKJKOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBPCKIKJKOF*))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBPCKIKJKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBPCKIKJKOF*))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBPCKIKJKOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
