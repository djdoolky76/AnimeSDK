#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDLGGGGKPHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDLGGGGKPHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E154110)
#define DDLGGGGKPHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1543E0)
#define DDLGGGGKPHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E153D60)
#define DDLGGGGKPHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E153D30)
#define DDLGGGGKPHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E153D20)
#define DDLGGGGKPHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E153ED0)
#define DDLGGGGKPHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E153DF0)
#define DDLGGGGKPHD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E153DE0)
#define DDLGGGGKPHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E153FA0)
#define DDLGGGGKPHD_GKEEEPODBJP_OFFSET UNITYSDK_OFFSET(0x1E153DB0)
#define DDLGGGGKPHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E153CE0)
#define DDLGGGGKPHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E154260)
#define DDLGGGGKPHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E154220)
#define DDLGGGGKPHD_MHLEHGCBKOD_OFFSET UNITYSDK_OFFSET(0x1E153DC0)
#define DDLGGGGKPHD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E153DD0)
#define DDLGGGGKPHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E153D10)
#define DDLGGGGKPHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E153FD0)
#define DDLGGGGKPHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E154030)

inline static constexpr unsigned int DDLGGGGKPHD_TypeDefinitionIndex = 34529;

	class DDLGGGGKPHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PFMACMAPMFP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DDLGGGGKPHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDLGGGGKPHD*>**)UnitySDK::FromName("", "DDLGGGGKPHD")->GetStaticField(0x26020);
		}

		// static const ::System::Object FDNOENLLFGA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDLGGGGKPHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDLGGGGKPHD*))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLGGGGKPHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DDLGGGGKPHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDLGGGGKPHD*>*(*)())((::PBYTE)hIl2Cpp + DDLGGGGKPHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDLGGGGKPHD* Clone()
		{
			return ((::DDLGGGGKPHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_CLONE_OFFSET))(this);
		}

		::System::UInt32 GKEEEPODBJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_GKEEEPODBJP_OFFSET))(this);
		}

		::System::Void MHLEHGCBKOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_MHLEHGCBKOD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDLGGGGKPHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDLGGGGKPHD*))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDLGGGGKPHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDLGGGGKPHD*))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDLGGGGKPHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
