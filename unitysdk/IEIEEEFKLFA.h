#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEIEEEFKLFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEIEEEFKLFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60D080)
#define IEIEEEFKLFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60D400)
#define IEIEEEFKLFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E60CC60)
#define IEIEEEFKLFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E60CC20)
#define IEIEEEFKLFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60CC10)
#define IEIEEEFKLFA_EBCDHFKJKNG_OFFSET UNITYSDK_OFFSET(0x1E60CCD0)
#define IEIEEEFKLFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60CDF0)
#define IEIEEEFKLFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E60CD10)
#define IEIEEEFKLFA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E60CD00)
#define IEIEEEFKLFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60CEC0)
#define IEIEEEFKLFA_HNPIDLJGENF_OFFSET UNITYSDK_OFFSET(0x1E60CCB0)
#define IEIEEEFKLFA_JDEBDMKPDKF_OFFSET UNITYSDK_OFFSET(0x1E60CCE0)
#define IEIEEEFKLFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E60CBD0)
#define IEIEEEFKLFA_JOIFOMBKBEA_OFFSET UNITYSDK_OFFSET(0x1E60CCC0)
#define IEIEEEFKLFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60D260)
#define IEIEEEFKLFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60D210)
#define IEIEEEFKLFA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E60CCF0)
#define IEIEEEFKLFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60CC00)
#define IEIEEEFKLFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60CEF0)
#define IEIEEEFKLFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60CF50)

inline static constexpr unsigned int IEIEEEFKLFA_TypeDefinitionIndex = 31586;

	class IEIEEEFKLFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CCAJAJLNLAD; // 0x18
		::System::UInt32 GFDCHFGLMFG; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IEIEEEFKLFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IEIEEEFKLFA*>**)UnitySDK::FromName("", "IEIEEEFKLFA")->GetStaticField(0x47E90);
		}

		// static const ::System::Object FCLIMNNJMGN; // 0x0
		// static const ::System::Object MLOCKBDGJHI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEIEEEFKLFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEIEEEFKLFA*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IEIEEEFKLFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IEIEEEFKLFA*>*(*)())((::PBYTE)hIl2Cpp + IEIEEEFKLFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEIEEEFKLFA* Clone()
		{
			return ((::IEIEEEFKLFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 HNPIDLJGENF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_HNPIDLJGENF_OFFSET))(this);
		}

		::System::Void JOIFOMBKBEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_JOIFOMBKBEA_OFFSET))(this, a1);
		}

		::System::UInt32 EBCDHFKJKNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_EBCDHFKJKNG_OFFSET))(this);
		}

		::System::Void JDEBDMKPDKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_JDEBDMKPDKF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEIEEEFKLFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEIEEEFKLFA*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEIEEEFKLFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEIEEEFKLFA*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEIEEEFKLFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
