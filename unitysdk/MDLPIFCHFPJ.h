#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class MDLPIFCHFPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDLPIFCHFPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D8EE0)
#define MDLPIFCHFPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D9200)
#define MDLPIFCHFPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D8950)
#define MDLPIFCHFPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D88E0)
#define MDLPIFCHFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D88D0)
#define MDLPIFCHFPJ_EHDMOKKGPEJ_OFFSET UNITYSDK_OFFSET(0x1E9D89E0)
#define MDLPIFCHFPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D8B90)
#define MDLPIFCHFPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D8A10)
#define MDLPIFCHFPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D8D10)
#define MDLPIFCHFPJ_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1E9D8A00)
#define MDLPIFCHFPJ_HCEENNEBBCJ_OFFSET UNITYSDK_OFFSET(0x1E9D89D0)
#define MDLPIFCHFPJ_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1E9D89F0)
#define MDLPIFCHFPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D8890)
#define MDLPIFCHFPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D9040)
#define MDLPIFCHFPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D8FB0)
#define MDLPIFCHFPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D88C0)
#define MDLPIFCHFPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D8DA0)
#define MDLPIFCHFPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D8E00)

inline static constexpr unsigned int MDLPIFCHFPJ_TypeDefinitionIndex = 33714;

	class MDLPIFCHFPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x18
		::System::UInt32 PECBHBFEMEB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MDLPIFCHFPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MDLPIFCHFPJ*>**)UnitySDK::FromName("", "MDLPIFCHFPJ")->GetStaticField(0x4CA10);
		}

		// static const ::System::Object EMPALEMIDEB; // 0x0
		// static const ::System::Object KIAJFAMLJEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MDLPIFCHFPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MDLPIFCHFPJ*>*(*)())((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDLPIFCHFPJ* Clone()
		{
			return ((::MDLPIFCHFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCEENNEBBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_HCEENNEBBCJ_OFFSET))(this);
		}

		::System::Void EHDMOKKGPEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_EHDMOKKGPEJ_OFFSET))(this, a1);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
