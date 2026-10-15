#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFELEEHGHLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFELEEHGHLA_AIDHKCCEOED_OFFSET UNITYSDK_OFFSET(0x1E9EAE20)
#define MFELEEHGHLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9EB320)
#define MFELEEHGHLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EB670)
#define MFELEEHGHLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9EADB0)
#define MFELEEHGHLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9EACC0)
#define MFELEEHGHLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EAC30)
#define MFELEEHGHLA_EEKMFKAHBJI_OFFSET UNITYSDK_OFFSET(0x1E9EAE30)
#define MFELEEHGHLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9EAE70)
#define MFELEEHGHLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9EAE40)
#define MFELEEHGHLA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9EAE00)
#define MFELEEHGHLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9EAF90)
#define MFELEEHGHLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9EABF0)
#define MFELEEHGHLA_KODPJEMHIDP_OFFSET UNITYSDK_OFFSET(0x1E9EADE0)
#define MFELEEHGHLA_LPHFLENODAO_OFFSET UNITYSDK_OFFSET(0x1E9EAE10)
#define MFELEEHGHLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9EB540)
#define MFELEEHGHLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9EB4D0)
#define MFELEEHGHLA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9EADF0)
#define MFELEEHGHLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9EAC20)
#define MFELEEHGHLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EB160)
#define MFELEEHGHLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9EB1C0)

inline static constexpr unsigned int MFELEEHGHLA_TypeDefinitionIndex = 26133;

	class MFELEEHGHLA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EMENOJMKJOA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KPHMKPJHBIK; // 0x20
		::System::UInt32 IHMPDHKCHKP; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EFKNENLJCKF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MFELEEHGHLA")->GetStaticField(0x4EC50);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_POGMGIEBNFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MFELEEHGHLA")->GetStaticField(0x4EC58);
		}

		static ::Google::Protobuf::MessageParser_1<::MFELEEHGHLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MFELEEHGHLA*>**)UnitySDK::FromName("", "MFELEEHGHLA")->GetStaticField(0x4EC60);
		}

		// static const ::System::Object KENNPMCIDNE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KLJFFNPEBGJ; // 0x0
		// static const ::System::Object AGKHDFANEOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFELEEHGHLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFELEEHGHLA*))((::PBYTE)hIl2Cpp + MFELEEHGHLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFELEEHGHLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MFELEEHGHLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MFELEEHGHLA*>*(*)())((::PBYTE)hIl2Cpp + MFELEEHGHLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFELEEHGHLA* Clone()
		{
			return ((::MFELEEHGHLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KODPJEMHIDP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_KODPJEMHIDP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFELEEHGHLA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 LPHFLENODAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_LPHFLENODAO_OFFSET))(this);
		}

		::System::Void AIDHKCCEOED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFELEEHGHLA_AIDHKCCEOED_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EEKMFKAHBJI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_EEKMFKAHBJI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFELEEHGHLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFELEEHGHLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFELEEHGHLA*))((::PBYTE)hIl2Cpp + MFELEEHGHLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFELEEHGHLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFELEEHGHLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFELEEHGHLA*))((::PBYTE)hIl2Cpp + MFELEEHGHLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFELEEHGHLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
