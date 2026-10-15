#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMKBFMCOIHK;
class BPFGOALJLPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPFGOALJLPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E016730)
#define BPFGOALJLPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E016AD0)
#define BPFGOALJLPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E016280)
#define BPFGOALJLPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0161F0)
#define BPFGOALJLPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0161B0)
#define BPFGOALJLPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E016430)
#define BPFGOALJLPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0162E0)
#define BPFGOALJLPP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0162D0)
#define BPFGOALJLPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E016550)
#define BPFGOALJLPP_INJLCGGALGC_OFFSET UNITYSDK_OFFSET(0x1E0162B0)
#define BPFGOALJLPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E016170)
#define BPFGOALJLPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E016900)
#define BPFGOALJLPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E016860)
#define BPFGOALJLPP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0162C0)
#define BPFGOALJLPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0161A0)
#define BPFGOALJLPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0165C0)
#define BPFGOALJLPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E016620)

inline static constexpr unsigned int BPFGOALJLPP_TypeDefinitionIndex = 30863;

	class BPFGOALJLPP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AMKBFMCOIHK*>* EFHEPAJIOHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BPFGOALJLPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPFGOALJLPP*>**)UnitySDK::FromName("", "BPFGOALJLPP")->GetStaticField(0x5EC80);
		}

		static ::Google::Protobuf::FieldCodec_1<::AMKBFMCOIHK*>** StaticGet_NLAAEADFOIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::AMKBFMCOIHK*>**)UnitySDK::FromName("", "BPFGOALJLPP")->GetStaticField(0x5EC88);
		}

		// static const ::System::Object LDPIDBDJDLO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPFGOALJLPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPFGOALJLPP*))((::PBYTE)hIl2Cpp + BPFGOALJLPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPFGOALJLPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPFGOALJLPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPFGOALJLPP*>*(*)())((::PBYTE)hIl2Cpp + BPFGOALJLPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPFGOALJLPP* Clone()
		{
			return ((::BPFGOALJLPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AMKBFMCOIHK*>* INJLCGGALGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AMKBFMCOIHK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP_INJLCGGALGC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPFGOALJLPP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPFGOALJLPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPFGOALJLPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPFGOALJLPP*))((::PBYTE)hIl2Cpp + BPFGOALJLPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPFGOALJLPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPFGOALJLPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPFGOALJLPP*))((::PBYTE)hIl2Cpp + BPFGOALJLPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPFGOALJLPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
