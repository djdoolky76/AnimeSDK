#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNDNOHGCGIE;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNDNOHGCGIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3EDE70)
#define FNDNOHGCGIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EE160)
#define FNDNOHGCGIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3ED930)
#define FNDNOHGCGIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3ED8C0)
#define FNDNOHGCGIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED8B0)
#define FNDNOHGCGIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3EDB70)
#define FNDNOHGCGIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3ED9F0)
#define FNDNOHGCGIE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3ED9C0)
#define FNDNOHGCGIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3EDCF0)
#define FNDNOHGCGIE_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E3ED9D0)
#define FNDNOHGCGIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3ED870)
#define FNDNOHGCGIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3EDFC0)
#define FNDNOHGCGIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3EDF40)
#define FNDNOHGCGIE_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E3ED9E0)
#define FNDNOHGCGIE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3ED9B0)
#define FNDNOHGCGIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED8A0)
#define FNDNOHGCGIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3EDD30)
#define FNDNOHGCGIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3EDD90)

inline static constexpr unsigned int FNDNOHGCGIE_TypeDefinitionIndex = 30362;

	class FNDNOHGCGIE : public ::System::Object
	{
	public:
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FNDNOHGCGIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNDNOHGCGIE*>**)UnitySDK::FromName("", "FNDNOHGCGIE")->GetStaticField(0x65170);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNDNOHGCGIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNDNOHGCGIE*))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNDNOHGCGIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNDNOHGCGIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNDNOHGCGIE*>*(*)())((::PBYTE)hIl2Cpp + FNDNOHGCGIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNDNOHGCGIE* Clone()
		{
			return ((::FNDNOHGCGIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNDNOHGCGIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNDNOHGCGIE*))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNDNOHGCGIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNDNOHGCGIE*))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNDNOHGCGIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
