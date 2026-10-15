#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIEPBHBOCBI;
class PPDLOPCHFDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIEPBHBOCBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB2BA00)
#define NIEPBHBOCBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2BE40)
#define NIEPBHBOCBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB2B4C0)
#define NIEPBHBOCBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB2B400)
#define NIEPBHBOCBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2B3B0)
#define NIEPBHBOCBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB2B6A0)
#define NIEPBHBOCBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB2B540)
#define NIEPBHBOCBI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB2B510)
#define NIEPBHBOCBI_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1EB2B530)
#define NIEPBHBOCBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB2B7D0)
#define NIEPBHBOCBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB2B370)
#define NIEPBHBOCBI_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1EB2B4F0)
#define NIEPBHBOCBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB2BC50)
#define NIEPBHBOCBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB2BBA0)
#define NIEPBHBOCBI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB2B500)
#define NIEPBHBOCBI_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1EB2B520)
#define NIEPBHBOCBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB2B3A0)
#define NIEPBHBOCBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB2B840)
#define NIEPBHBOCBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB2B8A0)

inline static constexpr unsigned int NIEPBHBOCBI_TypeDefinitionIndex = 28223;

	class NIEPBHBOCBI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PPDLOPCHFDG*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 AFFBGDFNCBG; // 0x24
		static ::Google::Protobuf::MessageParser_1<::NIEPBHBOCBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIEPBHBOCBI*>**)UnitySDK::FromName("", "NIEPBHBOCBI")->GetStaticField(0x61070);
		}

		static ::Google::Protobuf::FieldCodec_1<::PPDLOPCHFDG*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::PPDLOPCHFDG*>**)UnitySDK::FromName("", "NIEPBHBOCBI")->GetStaticField(0x61078);
		}

		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIEPBHBOCBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIEPBHBOCBI*))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEPBHBOCBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NIEPBHBOCBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIEPBHBOCBI*>*(*)())((::PBYTE)hIl2Cpp + NIEPBHBOCBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIEPBHBOCBI* Clone()
		{
			return ((::NIEPBHBOCBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PPDLOPCHFDG*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PPDLOPCHFDG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIEPBHBOCBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIEPBHBOCBI*))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIEPBHBOCBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIEPBHBOCBI*))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIEPBHBOCBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
