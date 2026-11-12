#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEBFJNFNBAP;
class MMJJKEOONKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMJJKEOONKE_AEFBCEOMCEM_OFFSET UNITYSDK_OFFSET(0x1FDC4260)
#define MMJJKEOONKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDC46B0)
#define MMJJKEOONKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC4AF0)
#define MMJJKEOONKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDC41B0)
#define MMJJKEOONKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDC4100)
#define MMJJKEOONKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC40C0)
#define MMJJKEOONKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDC42A0)
#define MMJJKEOONKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDC4270)
#define MMJJKEOONKE_FOMCCKMOJPF_OFFSET UNITYSDK_OFFSET(0x1FDC41E0)
#define MMJJKEOONKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDC4400)
#define MMJJKEOONKE_ICDPEEEFBLG_OFFSET UNITYSDK_OFFSET(0x1FDC41F0)
#define MMJJKEOONKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDC4080)
#define MMJJKEOONKE_KEFLCJPPJAO_OFFSET UNITYSDK_OFFSET(0x1FDC4250)
#define MMJJKEOONKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDC48F0)
#define MMJJKEOONKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDC4830)
#define MMJJKEOONKE_MPMFFOGBGGM_OFFSET UNITYSDK_OFFSET(0x1FDC4240)
#define MMJJKEOONKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDC40B0)
#define MMJJKEOONKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDC4500)
#define MMJJKEOONKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDC4560)

inline static constexpr unsigned int MMJJKEOONKE_TypeDefinitionIndex = 31853;

	class MMJJKEOONKE : public ::System::Object
	{
	public:
		::System::String* MKPDCNCGHLH; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>* GAICODFFOFL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 KNLKJFIKFCG; // 0x28
		static ::Google::Protobuf::MessageParser_1<::MMJJKEOONKE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMJJKEOONKE*>**)UnitySDK::FromName("", "MMJJKEOONKE")->GetStaticField(0x5E610);
		}

		static ::Google::Protobuf::FieldCodec_1<::FEBFJNFNBAP*>** StaticGet_KJDPFAHOAJP()
		{
			return (::Google::Protobuf::FieldCodec_1<::FEBFJNFNBAP*>**)UnitySDK::FromName("", "MMJJKEOONKE")->GetStaticField(0x5E618);
		}

		// static const ::System::Object AMKNPKHPDAC; // 0x0
		// static const ::System::Object MOLKOGENBDE; // 0x0
		// static const ::System::Object PGLBLGGFDJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMJJKEOONKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMJJKEOONKE*))((::PBYTE)hIl2Cpp + MMJJKEOONKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMJJKEOONKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMJJKEOONKE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMJJKEOONKE*>*(*)())((::PBYTE)hIl2Cpp + MMJJKEOONKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMJJKEOONKE* Clone()
		{
			return ((::MMJJKEOONKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_CLONE_OFFSET))(this);
		}

		::System::String* FOMCCKMOJPF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_FOMCCKMOJPF_OFFSET))(this);
		}

		::System::Void ICDPEEEFBLG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MMJJKEOONKE_ICDPEEEFBLG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>* MPMFFOGBGGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_MPMFFOGBGGM_OFFSET))(this);
		}

		::System::UInt32 KEFLCJPPJAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_KEFLCJPPJAO_OFFSET))(this);
		}

		::System::Void AEFBCEOMCEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMJJKEOONKE_AEFBCEOMCEM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMJJKEOONKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMJJKEOONKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMJJKEOONKE*))((::PBYTE)hIl2Cpp + MMJJKEOONKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMJJKEOONKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMJJKEOONKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMJJKEOONKE*))((::PBYTE)hIl2Cpp + MMJJKEOONKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMJJKEOONKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
