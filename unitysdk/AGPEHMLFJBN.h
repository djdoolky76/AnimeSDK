#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGPEHMLFJBN;
class PNICDFFMDDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGPEHMLFJBN_BPFLKKLPPPE_OFFSET UNITYSDK_OFFSET(0x1E23C620)
#define AGPEHMLFJBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E23CA80)
#define AGPEHMLFJBN_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E23C670)
#define AGPEHMLFJBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E23CE60)
#define AGPEHMLFJBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E23C5F0)
#define AGPEHMLFJBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E23C530)
#define AGPEHMLFJBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E23C4E0)
#define AGPEHMLFJBN_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E23C680)
#define AGPEHMLFJBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E23C6C0)
#define AGPEHMLFJBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E23C690)
#define AGPEHMLFJBN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E23C640)
#define AGPEHMLFJBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E23C7F0)
#define AGPEHMLFJBN_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E23C660)
#define AGPEHMLFJBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E23C4A0)
#define AGPEHMLFJBN_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E23C650)
#define AGPEHMLFJBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E23CD60)
#define AGPEHMLFJBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E23CCA0)
#define AGPEHMLFJBN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E23C630)
#define AGPEHMLFJBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E23C4D0)
#define AGPEHMLFJBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E23C860)
#define AGPEHMLFJBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E23C8C0)

inline static constexpr unsigned int AGPEHMLFJBN_TypeDefinitionIndex = 34645;

	class AGPEHMLFJBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PNICDFFMDDB*>* PEJIGOEFJNF; // 0x18
		::System::UInt32 NBFPOGFBMFE; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 HJEGLCJEOKC; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AGPEHMLFJBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGPEHMLFJBN*>**)UnitySDK::FromName("", "AGPEHMLFJBN")->GetStaticField(0x39570);
		}

		static ::Google::Protobuf::FieldCodec_1<::PNICDFFMDDB*>** StaticGet_FHILOHDNMFG()
		{
			return (::Google::Protobuf::FieldCodec_1<::PNICDFFMDDB*>**)UnitySDK::FromName("", "AGPEHMLFJBN")->GetStaticField(0x39578);
		}

		// static const ::System::Object NEPIDPMCPEO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGPEHMLFJBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGPEHMLFJBN*))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPEHMLFJBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGPEHMLFJBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGPEHMLFJBN*>*(*)())((::PBYTE)hIl2Cpp + AGPEHMLFJBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGPEHMLFJBN* Clone()
		{
			return ((::AGPEHMLFJBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PNICDFFMDDB*>* BPFLKKLPPPE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PNICDFFMDDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_BPFLKKLPPPE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGPEHMLFJBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGPEHMLFJBN*))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGPEHMLFJBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGPEHMLFJBN*))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGPEHMLFJBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
