#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDECDCEDPNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDECDCEDPNM_AHDMAMMBDIC_OFFSET UNITYSDK_OFFSET(0x1E353DF0)
#define FDECDCEDPNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E354350)
#define FDECDCEDPNM_CAPLIJLBJBB_OFFSET UNITYSDK_OFFSET(0x1E353DC0)
#define FDECDCEDPNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E354650)
#define FDECDCEDPNM_CEOOBKACNLO_OFFSET UNITYSDK_OFFSET(0x1E353DB0)
#define FDECDCEDPNM_CJCOLPJIACP_OFFSET UNITYSDK_OFFSET(0x1E353E00)
#define FDECDCEDPNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E353D60)
#define FDECDCEDPNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E353CC0)
#define FDECDCEDPNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E353C70)
#define FDECDCEDPNM_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E353DD0)
#define FDECDCEDPNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E353EE0)
#define FDECDCEDPNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E353E20)
#define FDECDCEDPNM_FLCPLNMOGJE_OFFSET UNITYSDK_OFFSET(0x1E353E10)
#define FDECDCEDPNM_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E353DE0)
#define FDECDCEDPNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E353FF0)
#define FDECDCEDPNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E353C00)
#define FDECDCEDPNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E354540)
#define FDECDCEDPNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3544E0)
#define FDECDCEDPNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E353C60)
#define FDECDCEDPNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E354100)
#define FDECDCEDPNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E354160)

inline static constexpr unsigned int FDECDCEDPNM_TypeDefinitionIndex = 35082;

	class FDECDCEDPNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HJFJBCADHHB; // 0x18
		::System::Boolean DHMADBLCKKD; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 GEMFJILOPLL; // 0x24
		::System::UInt32 ILOLCJEHFGK; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KJMMLMPKFCI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FDECDCEDPNM")->GetStaticField(0x578F0);
		}

		static ::Google::Protobuf::MessageParser_1<::FDECDCEDPNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDECDCEDPNM*>**)UnitySDK::FromName("", "FDECDCEDPNM")->GetStaticField(0x578F8);
		}

		// static const ::System::Object HDMOEMDGMLM; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object OOLLDLHKDOH; // 0x0
		// static const ::System::Object JCIJLBHDJHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDECDCEDPNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDECDCEDPNM*))((::PBYTE)hIl2Cpp + FDECDCEDPNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDECDCEDPNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDECDCEDPNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDECDCEDPNM*>*(*)())((::PBYTE)hIl2Cpp + FDECDCEDPNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDECDCEDPNM* Clone()
		{
			return ((::FDECDCEDPNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 CEOOBKACNLO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_CEOOBKACNLO_OFFSET))(this);
		}

		::System::Void CAPLIJLBJBB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDECDCEDPNM_CAPLIJLBJBB_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDECDCEDPNM_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean AHDMAMMBDIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_AHDMAMMBDIC_OFFSET))(this);
		}

		::System::Void CJCOLPJIACP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDECDCEDPNM_CJCOLPJIACP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLCPLNMOGJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_FLCPLNMOGJE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDECDCEDPNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDECDCEDPNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDECDCEDPNM*))((::PBYTE)hIl2Cpp + FDECDCEDPNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDECDCEDPNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDECDCEDPNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDECDCEDPNM*))((::PBYTE)hIl2Cpp + FDECDCEDPNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDECDCEDPNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
