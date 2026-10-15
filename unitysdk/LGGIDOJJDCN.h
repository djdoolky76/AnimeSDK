#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGGIDOJJDCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGGIDOJJDCN_AJDAINGCOFG_OFFSET UNITYSDK_OFFSET(0x1E952B70)
#define LGGIDOJJDCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E952F10)
#define LGGIDOJJDCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9532A0)
#define LGGIDOJJDCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E952AE0)
#define LGGIDOJJDCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E952A70)
#define LGGIDOJJDCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E952A40)
#define LGGIDOJJDCN_EEDGPGOCEEC_OFFSET UNITYSDK_OFFSET(0x1E952B60)
#define LGGIDOJJDCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E952C30)
#define LGGIDOJJDCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E952BB0)
#define LGGIDOJJDCN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E952B90)
#define LGGIDOJJDCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E952D30)
#define LGGIDOJJDCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E952A00)
#define LGGIDOJJDCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9530D0)
#define LGGIDOJJDCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E953070)
#define LGGIDOJJDCN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E952B80)
#define LGGIDOJJDCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E952A30)
#define LGGIDOJJDCN_PIBBMEDHDGA_OFFSET UNITYSDK_OFFSET(0x1E952BA0)
#define LGGIDOJJDCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E952D80)
#define LGGIDOJJDCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E952DE0)

inline static constexpr unsigned int LGGIDOJJDCN_TypeDefinitionIndex = 27447;

	class LGGIDOJJDCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* GNIPELHMPKO; // 0x18
		::System::UInt32 IGIDCGFPCEJ; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::System::Object** StaticGet_HADDOONBKGL()
		{
			return (::System::Object**)UnitySDK::FromName("", "LGGIDOJJDCN")->GetStaticField(0x3ED90);
		}

		static ::Google::Protobuf::MessageParser_1<::LGGIDOJJDCN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGGIDOJJDCN*>**)UnitySDK::FromName("", "LGGIDOJJDCN")->GetStaticField(0x3ED98);
		}

		// static const ::System::Object CNFKMGEHCPF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BGPFFMJBGEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGGIDOJJDCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGIDOJJDCN*))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGGIDOJJDCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGGIDOJJDCN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGGIDOJJDCN*>*(*)())((::PBYTE)hIl2Cpp + LGGIDOJJDCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGGIDOJJDCN* Clone()
		{
			return ((::LGGIDOJJDCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEDGPGOCEEC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_EEDGPGOCEEC_OFFSET))(this);
		}

		::System::Void AJDAINGCOFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_AJDAINGCOFG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* PIBBMEDHDGA()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_PIBBMEDHDGA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGGIDOJJDCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGGIDOJJDCN*))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGGIDOJJDCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGIDOJJDCN*))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGGIDOJJDCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
