#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAPCFLPKIFN;
class EBGAMBKHDBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAPCFLPKIFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD972A0)
#define AAPCFLPKIFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD97640)
#define AAPCFLPKIFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD96E00)
#define AAPCFLPKIFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD96D70)
#define AAPCFLPKIFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD96D30)
#define AAPCFLPKIFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD96FB0)
#define AAPCFLPKIFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD96E60)
#define AAPCFLPKIFN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DD96E50)
#define AAPCFLPKIFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD970D0)
#define AAPCFLPKIFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DD96CF0)
#define AAPCFLPKIFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD97470)
#define AAPCFLPKIFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD973D0)
#define AAPCFLPKIFN_MOBGLECNLBE_OFFSET UNITYSDK_OFFSET(0x1DD96E30)
#define AAPCFLPKIFN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DD96E40)
#define AAPCFLPKIFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD96D20)
#define AAPCFLPKIFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD97140)
#define AAPCFLPKIFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD971A0)

inline static constexpr unsigned int AAPCFLPKIFN_TypeDefinitionIndex = 35067;

	class AAPCFLPKIFN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EBGAMBKHDBO*>* ELPEIEDFEFP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::EBGAMBKHDBO*>** StaticGet_IMOPMLDENGG()
		{
			return (::Google::Protobuf::FieldCodec_1<::EBGAMBKHDBO*>**)UnitySDK::FromName("", "AAPCFLPKIFN")->GetStaticField(0x2FE90);
		}

		static ::Google::Protobuf::MessageParser_1<::AAPCFLPKIFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AAPCFLPKIFN*>**)UnitySDK::FromName("", "AAPCFLPKIFN")->GetStaticField(0x2FE98);
		}

		// static const ::System::Object HKBOCAEGHCC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAPCFLPKIFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAPCFLPKIFN*))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPCFLPKIFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AAPCFLPKIFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AAPCFLPKIFN*>*(*)())((::PBYTE)hIl2Cpp + AAPCFLPKIFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAPCFLPKIFN* Clone()
		{
			return ((::AAPCFLPKIFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EBGAMBKHDBO*>* MOBGLECNLBE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EBGAMBKHDBO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_MOBGLECNLBE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAPCFLPKIFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAPCFLPKIFN*))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAPCFLPKIFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAPCFLPKIFN*))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAPCFLPKIFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
