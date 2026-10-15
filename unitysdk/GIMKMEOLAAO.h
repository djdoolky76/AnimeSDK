#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIMKMEOLAAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIMKMEOLAAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E473F30)
#define GIMKMEOLAAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4741F0)
#define GIMKMEOLAAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E473AA0)
#define GIMKMEOLAAO_COGNLAIFAHA_OFFSET UNITYSDK_OFFSET(0x1E473B00)
#define GIMKMEOLAAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E473A10)
#define GIMKMEOLAAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4739C0)
#define GIMKMEOLAAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E473BA0)
#define GIMKMEOLAAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E473B20)
#define GIMKMEOLAAO_FFEFLLPNCGP_OFFSET UNITYSDK_OFFSET(0x1E473AF0)
#define GIMKMEOLAAO_FHGLMMIBJHE_OFFSET UNITYSDK_OFFSET(0x1E473AE0)
#define GIMKMEOLAAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E473CA0)
#define GIMKMEOLAAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E473980)
#define GIMKMEOLAAO_LKIBNGNDOFF_OFFSET UNITYSDK_OFFSET(0x1E473B10)
#define GIMKMEOLAAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E474100)
#define GIMKMEOLAAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4740A0)
#define GIMKMEOLAAO_NKNMJCMIPEJ_OFFSET UNITYSDK_OFFSET(0x1E473AD0)
#define GIMKMEOLAAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4739B0)
#define GIMKMEOLAAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E473DA0)
#define GIMKMEOLAAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E473E00)

inline static constexpr unsigned int GIMKMEOLAAO_TypeDefinitionIndex = 29103;

	class GIMKMEOLAAO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGEPHMNAHMH; // 0x18
		::System::UInt32 BGHAMFEEKBI; // 0x20
		::System::UInt32 HGGDLJGPKPM; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GIMKMEOLAAO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIMKMEOLAAO*>**)UnitySDK::FromName("", "GIMKMEOLAAO")->GetStaticField(0x19690);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CLBNOJGHGCJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GIMKMEOLAAO")->GetStaticField(0x19698);
		}

		// static const ::System::Object JBADBFFKHGJ; // 0x0
		// static const ::System::Object BPBJOKEMADF; // 0x0
		// static const ::System::Object DCMCFDFHLLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIMKMEOLAAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIMKMEOLAAO*))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMKMEOLAAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIMKMEOLAAO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIMKMEOLAAO*>*(*)())((::PBYTE)hIl2Cpp + GIMKMEOLAAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIMKMEOLAAO* Clone()
		{
			return ((::GIMKMEOLAAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKNMJCMIPEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_NKNMJCMIPEJ_OFFSET))(this);
		}

		::System::UInt32 FHGLMMIBJHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_FHGLMMIBJHE_OFFSET))(this);
		}

		::System::Void FFEFLLPNCGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_FFEFLLPNCGP_OFFSET))(this, a1);
		}

		::System::UInt32 COGNLAIFAHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_COGNLAIFAHA_OFFSET))(this);
		}

		::System::Void LKIBNGNDOFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_LKIBNGNDOFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIMKMEOLAAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIMKMEOLAAO*))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIMKMEOLAAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIMKMEOLAAO*))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIMKMEOLAAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
