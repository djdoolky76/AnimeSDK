#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class ENIMHEHPGMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENIMHEHPGMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C4100)
#define ENIMHEHPGMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4420)
#define ENIMHEHPGMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C3B70)
#define ENIMHEHPGMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C3B00)
#define ENIMHEHPGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C3AF0)
#define ENIMHEHPGMI_DOKNAGBFBEC_OFFSET UNITYSDK_OFFSET(0x1E2C3C10)
#define ENIMHEHPGMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C3DB0)
#define ENIMHEHPGMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C3C30)
#define ENIMHEHPGMI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2C3C00)
#define ENIMHEHPGMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C3F30)
#define ENIMHEHPGMI_GJOFDMODOHJ_OFFSET UNITYSDK_OFFSET(0x1E2C3C20)
#define ENIMHEHPGMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C3AB0)
#define ENIMHEHPGMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C4260)
#define ENIMHEHPGMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C41D0)
#define ENIMHEHPGMI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2C3BF0)
#define ENIMHEHPGMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C3AE0)
#define ENIMHEHPGMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C3FC0)
#define ENIMHEHPGMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C4020)

inline static constexpr unsigned int ENIMHEHPGMI_TypeDefinitionIndex = 33537;

	class ENIMHEHPGMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* PHBFHCCKHIC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ENIMHEHPGMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENIMHEHPGMI*>**)UnitySDK::FromName("", "ENIMHEHPGMI")->GetStaticField(0x45090);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EOPEFMJDFKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENIMHEHPGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENIMHEHPGMI*))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENIMHEHPGMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENIMHEHPGMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENIMHEHPGMI*>*(*)())((::PBYTE)hIl2Cpp + ENIMHEHPGMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENIMHEHPGMI* Clone()
		{
			return ((::ENIMHEHPGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* DOKNAGBFBEC()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_DOKNAGBFBEC_OFFSET))(this);
		}

		::System::Void GJOFDMODOHJ(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_GJOFDMODOHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENIMHEHPGMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENIMHEHPGMI*))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENIMHEHPGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENIMHEHPGMI*))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENIMHEHPGMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
