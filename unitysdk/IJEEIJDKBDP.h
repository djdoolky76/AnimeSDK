#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJEEIJDKBDP;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJEEIJDKBDP_AONEFDOPGDC_OFFSET UNITYSDK_OFFSET(0x1E664D80)
#define IJEEIJDKBDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E665420)
#define IJEEIJDKBDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E665860)
#define IJEEIJDKBDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E664D40)
#define IJEEIJDKBDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E664C70)
#define IJEEIJDKBDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E664C10)
#define IJEEIJDKBDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E664E70)
#define IJEEIJDKBDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E664E40)
#define IJEEIJDKBDP_FFFJFCDDMBJ_OFFSET UNITYSDK_OFFSET(0x1E664E00)
#define IJEEIJDKBDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E664FC0)
#define IJEEIJDKBDP_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1E664E30)
#define IJEEIJDKBDP_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1E664E20)
#define IJEEIJDKBDP_JDBHEJAIBME_OFFSET UNITYSDK_OFFSET(0x1E664E10)
#define IJEEIJDKBDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E664BD0)
#define IJEEIJDKBDP_LAEEMPOIHOK_OFFSET UNITYSDK_OFFSET(0x1E664D70)
#define IJEEIJDKBDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E665700)
#define IJEEIJDKBDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E665650)
#define IJEEIJDKBDP_NOJOEJIFAGC_OFFSET UNITYSDK_OFFSET(0x1E664D90)
#define IJEEIJDKBDP_OCMELHDBILD_OFFSET UNITYSDK_OFFSET(0x1E664DE0)
#define IJEEIJDKBDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E664C00)
#define IJEEIJDKBDP_PNLHBBDAGKE_OFFSET UNITYSDK_OFFSET(0x1E664DF0)
#define IJEEIJDKBDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6651C0)
#define IJEEIJDKBDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E665220)

inline static constexpr unsigned int IJEEIJDKBDP_TypeDefinitionIndex = 34129;

	class IJEEIJDKBDP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* GBEOKDKOKKG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKIMBAJGANG; // 0x20
		::NPEHFAHLDNM* PFGGEOIILPG; // 0x28
		::System::UInt64 JEHBHEOHGLN; // 0x30
		::System::UInt32 EEJENIBCKFC; // 0x38
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NGJOKJCBILD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IJEEIJDKBDP")->GetStaticField(0x4F580);
		}

		static ::Google::Protobuf::MessageParser_1<::IJEEIJDKBDP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJEEIJDKBDP*>**)UnitySDK::FromName("", "IJEEIJDKBDP")->GetStaticField(0x4F588);
		}

		// static const ::System::Object CIPHCNGGHJJ; // 0x0
		// static const ::System::Object NPGGEJCIEND; // 0x0
		// static const ::System::Object CDDFKHMGIKC; // 0x0
		// static const ::System::Object MENFJGKLKLO; // 0x0
		// static const ::System::Object GEMDHFJFBHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJEEIJDKBDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJEEIJDKBDP*))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJEEIJDKBDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IJEEIJDKBDP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJEEIJDKBDP*>*(*)())((::PBYTE)hIl2Cpp + IJEEIJDKBDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJEEIJDKBDP* Clone()
		{
			return ((::IJEEIJDKBDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAEEMPOIHOK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_LAEEMPOIHOK_OFFSET))(this);
		}

		::System::String* AONEFDOPGDC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_AONEFDOPGDC_OFFSET))(this);
		}

		::System::Void NOJOEJIFAGC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_NOJOEJIFAGC_OFFSET))(this, a1);
		}

		::System::UInt32 OCMELHDBILD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_OCMELHDBILD_OFFSET))(this);
		}

		::System::Void PNLHBBDAGKE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_PNLHBBDAGKE_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* FFFJFCDDMBJ()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_FFFJFCDDMBJ_OFFSET))(this);
		}

		::System::Void JDBHEJAIBME(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_JDBHEJAIBME_OFFSET))(this, a1);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJEEIJDKBDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJEEIJDKBDP*))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJEEIJDKBDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJEEIJDKBDP*))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJEEIJDKBDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
