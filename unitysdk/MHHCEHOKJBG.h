#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBMHMPKACI;
class MHHCEHOKJBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHHCEHOKJBG_AHIMKFJEJAC_OFFSET UNITYSDK_OFFSET(0x1EA04270)
#define MHHCEHOKJBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA046C0)
#define MHHCEHOKJBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA04A90)
#define MHHCEHOKJBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA04210)
#define MHHCEHOKJBG_CMBJPMLOBOE_OFFSET UNITYSDK_OFFSET(0x1EA04260)
#define MHHCEHOKJBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA04170)
#define MHHCEHOKJBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA04130)
#define MHHCEHOKJBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA042E0)
#define MHHCEHOKJBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA042B0)
#define MHHCEHOKJBG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA042A0)
#define MHHCEHOKJBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA04420)
#define MHHCEHOKJBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA040F0)
#define MHHCEHOKJBG_MEDDFLDIABK_OFFSET UNITYSDK_OFFSET(0x1EA04250)
#define MHHCEHOKJBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA04990)
#define MHHCEHOKJBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA048D0)
#define MHHCEHOKJBG_NPCMHMHCHIN_OFFSET UNITYSDK_OFFSET(0x1EA04280)
#define MHHCEHOKJBG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA04290)
#define MHHCEHOKJBG_OCLBFNICOHN_OFFSET UNITYSDK_OFFSET(0x1EA04240)
#define MHHCEHOKJBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA04120)
#define MHHCEHOKJBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA044A0)
#define MHHCEHOKJBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA04500)

inline static constexpr unsigned int MHHCEHOKJBG_TypeDefinitionIndex = 30575;

	class MHHCEHOKJBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>* ELFKGPIMMCO; // 0x18
		::System::UInt32 DFFCMNOCOMJ; // 0x20
		::System::UInt32 KCMIMKALMNK; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::INBMHMPKACI*>** StaticGet_JPGOOEBDHCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::INBMHMPKACI*>**)UnitySDK::FromName("", "MHHCEHOKJBG")->GetStaticField(0x51CC0);
		}

		static ::Google::Protobuf::MessageParser_1<::MHHCEHOKJBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHHCEHOKJBG*>**)UnitySDK::FromName("", "MHHCEHOKJBG")->GetStaticField(0x51CC8);
		}

		// static const ::System::Object EHMKMJNLNHA; // 0x0
		// static const ::System::Object BIIMBGOFABJ; // 0x0
		// static const ::System::Object BNKMBBPOMCA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHHCEHOKJBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHHCEHOKJBG*))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHHCEHOKJBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHHCEHOKJBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHHCEHOKJBG*>*(*)())((::PBYTE)hIl2Cpp + MHHCEHOKJBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHHCEHOKJBG* Clone()
		{
			return ((::MHHCEHOKJBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCLBFNICOHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_OCLBFNICOHN_OFFSET))(this);
		}

		::System::Void MEDDFLDIABK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_MEDDFLDIABK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>* CMBJPMLOBOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_CMBJPMLOBOE_OFFSET))(this);
		}

		::System::UInt32 AHIMKFJEJAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_AHIMKFJEJAC_OFFSET))(this);
		}

		::System::Void NPCMHMHCHIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_NPCMHMHCHIN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHHCEHOKJBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHHCEHOKJBG*))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHHCEHOKJBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHHCEHOKJBG*))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHHCEHOKJBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
