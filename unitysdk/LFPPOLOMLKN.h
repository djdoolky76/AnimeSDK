#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLJEJFMKEII;
class IJLEFNJPFKP;
class LFPPOLOMLKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFPPOLOMLKN_BHNEPICNJKN_OFFSET UNITYSDK_OFFSET(0x1E91A1E0)
#define LFPPOLOMLKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E91A820)
#define LFPPOLOMLKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E91AB10)
#define LFPPOLOMLKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E91A120)
#define LFPPOLOMLKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E91A080)
#define LFPPOLOMLKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91A070)
#define LFPPOLOMLKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E91A440)
#define LFPPOLOMLKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E91A210)
#define LFPPOLOMLKN_FFKMMLDHADC_OFFSET UNITYSDK_OFFSET(0x1E91A1D0)
#define LFPPOLOMLKN_FOOCLOOPEEI_OFFSET UNITYSDK_OFFSET(0x1E91A1F0)
#define LFPPOLOMLKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E91A670)
#define LFPPOLOMLKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E91A030)
#define LFPPOLOMLKN_LCOLNKHHGMG_OFFSET UNITYSDK_OFFSET(0x1E91A200)
#define LFPPOLOMLKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E91A970)
#define LFPPOLOMLKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E91A8B0)
#define LFPPOLOMLKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E91A060)
#define LFPPOLOMLKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E91A6E0)
#define LFPPOLOMLKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E91A740)

inline static constexpr unsigned int LFPPOLOMLKN_TypeDefinitionIndex = 25568;

	class LFPPOLOMLKN : public ::System::Object
	{
	public:
		::BLJEJFMKEII* MCBAIONIKHA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::IJLEFNJPFKP* CCAGFEHMLBB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LFPPOLOMLKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFPPOLOMLKN*>**)UnitySDK::FromName("", "LFPPOLOMLKN")->GetStaticField(0x343A0);
		}

		// static const ::System::Object KEMHBMADPML; // 0x0
		// static const ::System::Object OHFNOGFBAAE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFPPOLOMLKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFPPOLOMLKN*))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFPPOLOMLKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFPPOLOMLKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFPPOLOMLKN*>*(*)())((::PBYTE)hIl2Cpp + LFPPOLOMLKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFPPOLOMLKN* Clone()
		{
			return ((::LFPPOLOMLKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_CLONE_OFFSET))(this);
		}

		::IJLEFNJPFKP* FFKMMLDHADC()
		{
			return ((::IJLEFNJPFKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_FFKMMLDHADC_OFFSET))(this);
		}

		::System::Void BHNEPICNJKN(::IJLEFNJPFKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJLEFNJPFKP*))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_BHNEPICNJKN_OFFSET))(this, a1);
		}

		::BLJEJFMKEII* FOOCLOOPEEI()
		{
			return ((::BLJEJFMKEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_FOOCLOOPEEI_OFFSET))(this);
		}

		::System::Void LCOLNKHHGMG(::BLJEJFMKEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLJEJFMKEII*))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_LCOLNKHHGMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFPPOLOMLKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFPPOLOMLKN*))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFPPOLOMLKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFPPOLOMLKN*))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFPPOLOMLKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
