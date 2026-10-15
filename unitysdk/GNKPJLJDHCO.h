#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNKPJLJDHCO;
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

#define GNKPJLJDHCO_BPFLKKLPPPE_OFFSET UNITYSDK_OFFSET(0x1E4E2E00)
#define GNKPJLJDHCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E3320)
#define GNKPJLJDHCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E3760)
#define GNKPJLJDHCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E2DD0)
#define GNKPJLJDHCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E2D10)
#define GNKPJLJDHCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E2CC0)
#define GNKPJLJDHCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E2FB0)
#define GNKPJLJDHCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E2E50)
#define GNKPJLJDHCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E30E0)
#define GNKPJLJDHCO_GIBPHJHJHIF_OFFSET UNITYSDK_OFFSET(0x1E4E2E40)
#define GNKPJLJDHCO_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E4E2E20)
#define GNKPJLJDHCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E2C80)
#define GNKPJLJDHCO_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E4E2E10)
#define GNKPJLJDHCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E3570)
#define GNKPJLJDHCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E34C0)
#define GNKPJLJDHCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E2CB0)
#define GNKPJLJDHCO_PDMNDBMHAPF_OFFSET UNITYSDK_OFFSET(0x1E4E2E30)
#define GNKPJLJDHCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E3150)
#define GNKPJLJDHCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E31B0)

inline static constexpr unsigned int GNKPJLJDHCO_TypeDefinitionIndex = 34643;

	class GNKPJLJDHCO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PNICDFFMDDB*>* PEJIGOEFJNF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x20
		::System::UInt32 EGJDFIPLGMO; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::PNICDFFMDDB*>** StaticGet_FHILOHDNMFG()
		{
			return (::Google::Protobuf::FieldCodec_1<::PNICDFFMDDB*>**)UnitySDK::FromName("", "GNKPJLJDHCO")->GetStaticField(0x238D0);
		}

		static ::Google::Protobuf::MessageParser_1<::GNKPJLJDHCO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNKPJLJDHCO*>**)UnitySDK::FromName("", "GNKPJLJDHCO")->GetStaticField(0x238D8);
		}

		// static const ::System::Object NEPIDPMCPEO; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object JLCOELFOKOP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNKPJLJDHCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNKPJLJDHCO*))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNKPJLJDHCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNKPJLJDHCO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNKPJLJDHCO*>*(*)())((::PBYTE)hIl2Cpp + GNKPJLJDHCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNKPJLJDHCO* Clone()
		{
			return ((::GNKPJLJDHCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PNICDFFMDDB*>* BPFLKKLPPPE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PNICDFFMDDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_BPFLKKLPPPE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt32 PDMNDBMHAPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_PDMNDBMHAPF_OFFSET))(this);
		}

		::System::Void GIBPHJHJHIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_GIBPHJHJHIF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNKPJLJDHCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNKPJLJDHCO*))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNKPJLJDHCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNKPJLJDHCO*))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNKPJLJDHCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
