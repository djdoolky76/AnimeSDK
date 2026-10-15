#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBHBJEOCHL;
class MEDJBBOGLNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEDJBBOGLNM_BAHCDLCBGHK_OFFSET UNITYSDK_OFFSET(0x1EA095A0)
#define MEDJBBOGLNM_BOJOLCJCLEO_OFFSET UNITYSDK_OFFSET(0x1EA095C0)
#define MEDJBBOGLNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA09AC0)
#define MEDJBBOGLNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA09EF0)
#define MEDJBBOGLNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA09570)
#define MEDJBBOGLNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA094B0)
#define MEDJBBOGLNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA09460)
#define MEDJBBOGLNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA09750)
#define MEDJBBOGLNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA095F0)
#define MEDJBBOGLNM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA095E0)
#define MEDJBBOGLNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA09880)
#define MEDJBBOGLNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA09420)
#define MEDJBBOGLNM_KDKFDHIMJCN_OFFSET UNITYSDK_OFFSET(0x1EA095B0)
#define MEDJBBOGLNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA09D00)
#define MEDJBBOGLNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA09C50)
#define MEDJBBOGLNM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA095D0)
#define MEDJBBOGLNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA09450)
#define MEDJBBOGLNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA098F0)
#define MEDJBBOGLNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA09950)

inline static constexpr unsigned int MEDJBBOGLNM_TypeDefinitionIndex = 29041;

	class MEDJBBOGLNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HCBHBJEOCHL*>* CCHMPMNPPME; // 0x18
		::System::UInt32 KHNEMPCDLJC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MEDJBBOGLNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MEDJBBOGLNM*>**)UnitySDK::FromName("", "MEDJBBOGLNM")->GetStaticField(0x4A4A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::HCBHBJEOCHL*>** StaticGet_NPADOCMPDGJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::HCBHBJEOCHL*>**)UnitySDK::FromName("", "MEDJBBOGLNM")->GetStaticField(0x4A4A8);
		}

		// static const ::System::Object OIFMPNNBOBO; // 0x0
		// static const ::System::Object PCFIGHGFGOO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEDJBBOGLNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEDJBBOGLNM*))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEDJBBOGLNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MEDJBBOGLNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MEDJBBOGLNM*>*(*)())((::PBYTE)hIl2Cpp + MEDJBBOGLNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEDJBBOGLNM* Clone()
		{
			return ((::MEDJBBOGLNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BAHCDLCBGHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_BAHCDLCBGHK_OFFSET))(this);
		}

		::System::Void KDKFDHIMJCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_KDKFDHIMJCN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HCBHBJEOCHL*>* BOJOLCJCLEO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HCBHBJEOCHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_BOJOLCJCLEO_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEDJBBOGLNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEDJBBOGLNM*))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEDJBBOGLNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEDJBBOGLNM*))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEDJBBOGLNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
