#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEFEIJFPCKE;
class HLNFNACOFFF;
class KICEGHDKACP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLNFNACOFFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C3220)
#define HLNFNACOFFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C3680)
#define HLNFNACOFFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C2D80)
#define HLNFNACOFFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C2C70)
#define HLNFNACOFFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C2C00)
#define HLNFNACOFFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C2E70)
#define HLNFNACOFFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C2E10)
#define HLNFNACOFFF_FFPOCPALHDE_OFFSET UNITYSDK_OFFSET(0x1E5C2DF0)
#define HLNFNACOFFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C2FC0)
#define HLNFNACOFFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C2B90)
#define HLNFNACOFFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C3460)
#define HLNFNACOFFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C3360)
#define HLNFNACOFFF_NGCKIHBBNJL_OFFSET UNITYSDK_OFFSET(0x1E5C2DE0)
#define HLNFNACOFFF_OEDIHBJCKKI_OFFSET UNITYSDK_OFFSET(0x1E5C2DD0)
#define HLNFNACOFFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C2BF0)
#define HLNFNACOFFF_PKNHKBAAOCI_OFFSET UNITYSDK_OFFSET(0x1E5C2E00)
#define HLNFNACOFFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C3050)
#define HLNFNACOFFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C30B0)

inline static constexpr unsigned int HLNFNACOFFF_TypeDefinitionIndex = 34754;

	class HLNFNACOFFF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KICEGHDKACP*>* APKBHKLNFAB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::CEFEIJFPCKE*>* NLIEFMJOIND; // 0x20
		::System::UInt32 DPBODAOOPLB; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_CIGOGONHKIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HLNFNACOFFF")->GetStaticField(0x487E0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLNFNACOFFF")->GetStaticField(0x487E8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LNDGNKGAJHJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HLNFNACOFFF")->GetStaticField(0x487F0);
		}

		// static const ::System::Object POCBOBKPMOI; // 0x0
		// static const ::System::Object JEMJOHIPADC; // 0x0
		// static const ::System::Object FHFCGNGEPIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLNFNACOFFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNFNACOFFF*))((::PBYTE)hIl2Cpp + HLNFNACOFFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLNFNACOFFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLNFNACOFFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLNFNACOFFF* Clone()
		{
			return ((::HLNFNACOFFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OEDIHBJCKKI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_OEDIHBJCKKI_OFFSET))(this);
		}

		::System::Void NGCKIHBBNJL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNFNACOFFF_NGCKIHBBNJL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CEFEIJFPCKE*>* FFPOCPALHDE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CEFEIJFPCKE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_FFPOCPALHDE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KICEGHDKACP*>* PKNHKBAAOCI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KICEGHDKACP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_PKNHKBAAOCI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLNFNACOFFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLNFNACOFFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLNFNACOFFF*))((::PBYTE)hIl2Cpp + HLNFNACOFFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLNFNACOFFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLNFNACOFFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNFNACOFFF*))((::PBYTE)hIl2Cpp + HLNFNACOFFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLNFNACOFFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
