#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APNJBEGDHNJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APNJBEGDHNJ_BANCLADFGNI_OFFSET UNITYSDK_OFFSET(0x1E67A100)
#define APNJBEGDHNJ_BMEDBCFMGAB_OFFSET UNITYSDK_OFFSET(0x1E67A110)
#define APNJBEGDHNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E67A440)
#define APNJBEGDHNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67A710)
#define APNJBEGDHNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E67A090)
#define APNJBEGDHNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E67A060)
#define APNJBEGDHNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67A050)
#define APNJBEGDHNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E67A200)
#define APNJBEGDHNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E67A120)
#define APNJBEGDHNJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E67A0F0)
#define APNJBEGDHNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E67A2D0)
#define APNJBEGDHNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E67A010)
#define APNJBEGDHNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E67A590)
#define APNJBEGDHNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E67A550)
#define APNJBEGDHNJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E67A0E0)
#define APNJBEGDHNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E67A040)
#define APNJBEGDHNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E67A300)
#define APNJBEGDHNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E67A360)

inline static constexpr unsigned int APNJBEGDHNJ_TypeDefinitionIndex = 27671;

	class APNJBEGDHNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 MOKJAJGEAHM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::APNJBEGDHNJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APNJBEGDHNJ*>**)UnitySDK::FromName("", "APNJBEGDHNJ")->GetStaticField(0x42740);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ICBBGLFEJEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APNJBEGDHNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APNJBEGDHNJ*))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APNJBEGDHNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::APNJBEGDHNJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APNJBEGDHNJ*>*(*)())((::PBYTE)hIl2Cpp + APNJBEGDHNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APNJBEGDHNJ* Clone()
		{
			return ((::APNJBEGDHNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BANCLADFGNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_BANCLADFGNI_OFFSET))(this);
		}

		::System::Void BMEDBCFMGAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_BMEDBCFMGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APNJBEGDHNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APNJBEGDHNJ*))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APNJBEGDHNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APNJBEGDHNJ*))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APNJBEGDHNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
