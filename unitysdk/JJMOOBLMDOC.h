#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJMOOBLMDOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJMOOBLMDOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF333B0)
#define JJMOOBLMDOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF33680)
#define JJMOOBLMDOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF33000)
#define JJMOOBLMDOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF32FD0)
#define JJMOOBLMDOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF32FC0)
#define JJMOOBLMDOC_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1FF33050)
#define JJMOOBLMDOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF33170)
#define JJMOOBLMDOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF33090)
#define JJMOOBLMDOC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FF33080)
#define JJMOOBLMDOC_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1FF33060)
#define JJMOOBLMDOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF33240)
#define JJMOOBLMDOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF32F80)
#define JJMOOBLMDOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF33500)
#define JJMOOBLMDOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF334C0)
#define JJMOOBLMDOC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FF33070)
#define JJMOOBLMDOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF32FB0)
#define JJMOOBLMDOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF33270)
#define JJMOOBLMDOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF332D0)

inline static constexpr unsigned int JJMOOBLMDOC_TypeDefinitionIndex = 31396;

	class JJMOOBLMDOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JJMOOBLMDOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJMOOBLMDOC*>**)UnitySDK::FromName("", "JJMOOBLMDOC")->GetStaticField(0x61930);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJMOOBLMDOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJMOOBLMDOC*))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJMOOBLMDOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJMOOBLMDOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJMOOBLMDOC*>*(*)())((::PBYTE)hIl2Cpp + JJMOOBLMDOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJMOOBLMDOC* Clone()
		{
			return ((::JJMOOBLMDOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJMOOBLMDOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJMOOBLMDOC*))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJMOOBLMDOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJMOOBLMDOC*))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJMOOBLMDOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
