#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMMHJIFCGNO;
class HCIIHNAFNAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCIIHNAFNAB_AJNBCHJPPLE_OFFSET UNITYSDK_OFFSET(0x1E540610)
#define HCIIHNAFNAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E540A40)
#define HCIIHNAFNAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E540D40)
#define HCIIHNAFNAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5405C0)
#define HCIIHNAFNAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E540510)
#define HCIIHNAFNAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5404C0)
#define HCIIHNAFNAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5407A0)
#define HCIIHNAFNAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E540620)
#define HCIIHNAFNAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5408C0)
#define HCIIHNAFNAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E540450)
#define HCIIHNAFNAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E540B80)
#define HCIIHNAFNAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E540AE0)
#define HCIIHNAFNAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5404B0)
#define HCIIHNAFNAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E540930)
#define HCIIHNAFNAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E540990)

inline static constexpr unsigned int HCIIHNAFNAB_TypeDefinitionIndex = 32462;

	class HCIIHNAFNAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BMMHJIFCGNO*>* DGOOJDMMJIP; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::BMMHJIFCGNO*>** StaticGet_GPNHFNLKNEK()
		{
			return (::Google::Protobuf::FieldCodec_1<::BMMHJIFCGNO*>**)UnitySDK::FromName("", "HCIIHNAFNAB")->GetStaticField(0x304A0);
		}

		static ::Google::Protobuf::MessageParser_1<::HCIIHNAFNAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCIIHNAFNAB*>**)UnitySDK::FromName("", "HCIIHNAFNAB")->GetStaticField(0x304A8);
		}

		// static const ::System::Object LAOLBLLNLLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCIIHNAFNAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCIIHNAFNAB*))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCIIHNAFNAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCIIHNAFNAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCIIHNAFNAB*>*(*)())((::PBYTE)hIl2Cpp + HCIIHNAFNAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCIIHNAFNAB* Clone()
		{
			return ((::HCIIHNAFNAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMMHJIFCGNO*>* AJNBCHJPPLE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMMHJIFCGNO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_AJNBCHJPPLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCIIHNAFNAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCIIHNAFNAB*))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCIIHNAFNAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCIIHNAFNAB*))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCIIHNAFNAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
