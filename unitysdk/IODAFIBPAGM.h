#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IODAFIBPAGM;
class JOMEGNGJKJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IODAFIBPAGM_ADINCOJHALG_OFFSET UNITYSDK_OFFSET(0x1E69D5D0)
#define IODAFIBPAGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E69DAF0)
#define IODAFIBPAGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69DF10)
#define IODAFIBPAGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69D5A0)
#define IODAFIBPAGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69D500)
#define IODAFIBPAGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69D4C0)
#define IODAFIBPAGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69D780)
#define IODAFIBPAGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69D620)
#define IODAFIBPAGM_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E69D610)
#define IODAFIBPAGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69D8B0)
#define IODAFIBPAGM_GIBPHJHJHIF_OFFSET UNITYSDK_OFFSET(0x1E69D5F0)
#define IODAFIBPAGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E69D480)
#define IODAFIBPAGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E69DD40)
#define IODAFIBPAGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E69DC90)
#define IODAFIBPAGM_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E69D600)
#define IODAFIBPAGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69D4B0)
#define IODAFIBPAGM_PDMNDBMHAPF_OFFSET UNITYSDK_OFFSET(0x1E69D5E0)
#define IODAFIBPAGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69D920)
#define IODAFIBPAGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E69D980)

inline static constexpr unsigned int IODAFIBPAGM_TypeDefinitionIndex = 26234;

	class IODAFIBPAGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JOMEGNGJKJK*>* DIHJOLFNAPH; // 0x18
		::System::UInt32 EGJDFIPLGMO; // 0x20
		::System::UInt32 AFFBGDFNCBG; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::JOMEGNGJKJK*>** StaticGet_JCHNJPHNMJP()
		{
			return (::Google::Protobuf::FieldCodec_1<::JOMEGNGJKJK*>**)UnitySDK::FromName("", "IODAFIBPAGM")->GetStaticField(0x10FA0);
		}

		static ::Google::Protobuf::MessageParser_1<::IODAFIBPAGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IODAFIBPAGM*>**)UnitySDK::FromName("", "IODAFIBPAGM")->GetStaticField(0x10FA8);
		}

		// static const ::System::Object OHGDEFODOJH; // 0x0
		// static const ::System::Object JLCOELFOKOP; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IODAFIBPAGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IODAFIBPAGM*))((::PBYTE)hIl2Cpp + IODAFIBPAGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IODAFIBPAGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IODAFIBPAGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IODAFIBPAGM*>*(*)())((::PBYTE)hIl2Cpp + IODAFIBPAGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IODAFIBPAGM* Clone()
		{
			return ((::IODAFIBPAGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOMEGNGJKJK*>* ADINCOJHALG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOMEGNGJKJK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_ADINCOJHALG_OFFSET))(this);
		}

		::System::UInt32 PDMNDBMHAPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_PDMNDBMHAPF_OFFSET))(this);
		}

		::System::Void GIBPHJHJHIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IODAFIBPAGM_GIBPHJHJHIF_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IODAFIBPAGM_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IODAFIBPAGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IODAFIBPAGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IODAFIBPAGM*))((::PBYTE)hIl2Cpp + IODAFIBPAGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IODAFIBPAGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IODAFIBPAGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IODAFIBPAGM*))((::PBYTE)hIl2Cpp + IODAFIBPAGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IODAFIBPAGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
