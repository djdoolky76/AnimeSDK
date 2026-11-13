#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFEMDCIJMFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFEMDCIJMFA_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x2061C3E0)
#define JFEMDCIJMFA_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x2061C3D0)
#define JFEMDCIJMFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2061C8B0)
#define JFEMDCIJMFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2061CBE0)
#define JFEMDCIJMFA_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x2061C3F0)
#define JFEMDCIJMFA_CLONE_OFFSET UNITYSDK_OFFSET(0x2061C390)
#define JFEMDCIJMFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2061C2F0)
#define JFEMDCIJMFA_CTOR_OFFSET UNITYSDK_OFFSET(0x2061C2A0)
#define JFEMDCIJMFA_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x2061C3C0)
#define JFEMDCIJMFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2061C4B0)
#define JFEMDCIJMFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2061C430)
#define JFEMDCIJMFA_FMMFNNOAAEK_OFFSET UNITYSDK_OFFSET(0x2061C420)
#define JFEMDCIJMFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2061C5C0)
#define JFEMDCIJMFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2061C260)
#define JFEMDCIJMFA_KMGGNNGDLCO_OFFSET UNITYSDK_OFFSET(0x2061C410)
#define JFEMDCIJMFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2061CAF0)
#define JFEMDCIJMFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2061CA90)
#define JFEMDCIJMFA_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x2061C400)
#define JFEMDCIJMFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2061C290)
#define JFEMDCIJMFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2061C6C0)
#define JFEMDCIJMFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x2061C720)

inline static constexpr unsigned int JFEMDCIJMFA_TypeDefinitionIndex = 33340;

	class JFEMDCIJMFA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CCNIHPKICOK; // 0x20
		::System::UInt32 PLKGEBACJMA; // 0x24
		::System::UInt32 MGPCOLIAECE; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JFEMDCIJMFA")->GetStaticField(0x5F890);
		}

		static ::Google::Protobuf::MessageParser_1<::JFEMDCIJMFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFEMDCIJMFA*>**)UnitySDK::FromName("", "JFEMDCIJMFA")->GetStaticField(0x5F898);
		}

		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object BOGFCKKNGJB; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object KOAPPFHOOEJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFEMDCIJMFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFEMDCIJMFA*))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFEMDCIJMFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFEMDCIJMFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFEMDCIJMFA*>*(*)())((::PBYTE)hIl2Cpp + JFEMDCIJMFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFEMDCIJMFA* Clone()
		{
			return ((::JFEMDCIJMFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 KMGGNNGDLCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_KMGGNNGDLCO_OFFSET))(this);
		}

		::System::Void FMMFNNOAAEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_FMMFNNOAAEK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFEMDCIJMFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFEMDCIJMFA*))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFEMDCIJMFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFEMDCIJMFA*))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFEMDCIJMFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
