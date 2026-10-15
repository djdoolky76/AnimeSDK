#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APIIDMEFDJJ;
class DDHIEONLIIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APIIDMEFDJJ_BPKFICAGGPP_OFFSET UNITYSDK_OFFSET(0x1E6491A0)
#define APIIDMEFDJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6496B0)
#define APIIDMEFDJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E649AF0)
#define APIIDMEFDJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E649170)
#define APIIDMEFDJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6490B0)
#define APIIDMEFDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E649060)
#define APIIDMEFDJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E649350)
#define APIIDMEFDJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6491F0)
#define APIIDMEFDJJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6491C0)
#define APIIDMEFDJJ_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1E6491E0)
#define APIIDMEFDJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E649480)
#define APIIDMEFDJJ_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1E6491D0)
#define APIIDMEFDJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E649020)
#define APIIDMEFDJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E649900)
#define APIIDMEFDJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E649850)
#define APIIDMEFDJJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6491B0)
#define APIIDMEFDJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E649050)
#define APIIDMEFDJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6494F0)
#define APIIDMEFDJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E649550)

inline static constexpr unsigned int APIIDMEFDJJ_TypeDefinitionIndex = 31215;

	class APIIDMEFDJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DDHIEONLIIL*>* GNOIIDKGFCE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 AENFHPAGFOI; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::DDHIEONLIIL*>** StaticGet_GMPEFGAPNLM()
		{
			return (::Google::Protobuf::FieldCodec_1<::DDHIEONLIIL*>**)UnitySDK::FromName("", "APIIDMEFDJJ")->GetStaticField(0x4A5B0);
		}

		static ::Google::Protobuf::MessageParser_1<::APIIDMEFDJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APIIDMEFDJJ*>**)UnitySDK::FromName("", "APIIDMEFDJJ")->GetStaticField(0x4A5B8);
		}

		// static const ::System::Object DLLGFPCPGFF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APIIDMEFDJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APIIDMEFDJJ*))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APIIDMEFDJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::APIIDMEFDJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APIIDMEFDJJ*>*(*)())((::PBYTE)hIl2Cpp + APIIDMEFDJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APIIDMEFDJJ* Clone()
		{
			return ((::APIIDMEFDJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DDHIEONLIIL*>* BPKFICAGGPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DDHIEONLIIL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_BPKFICAGGPP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APIIDMEFDJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APIIDMEFDJJ*))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APIIDMEFDJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APIIDMEFDJJ*))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APIIDMEFDJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
