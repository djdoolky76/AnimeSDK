#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAJOCEIKAGK.h"
#include "unitysdk/System/Object.h"
class EOBONCLPPLM;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOBONCLPPLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2F8360)
#define EOBONCLPPLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F8720)
#define EOBONCLPPLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2F7D40)
#define EOBONCLPPLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2F7C80)
#define EOBONCLPPLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F7C40)
#define EOBONCLPPLM_DOBEKFBKHDE_OFFSET UNITYSDK_OFFSET(0x1E2F7D70)
#define EOBONCLPPLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2F7F90)
#define EOBONCLPPLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2F7DA0)
#define EOBONCLPPLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2F8160)
#define EOBONCLPPLM_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E2F7D80)
#define EOBONCLPPLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2F7C00)
#define EOBONCLPPLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2F8540)
#define EOBONCLPPLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2F8440)
#define EOBONCLPPLM_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E2F7D90)
#define EOBONCLPPLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2F7C30)
#define EOBONCLPPLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2F81E0)
#define EOBONCLPPLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2F8240)

	class EOBONCLPPLM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OAJOCEIKAGK>* GGODOJAJJOH; // 0x10
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EOBONCLPPLM")->GetStaticField(0x54A70);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_ABKPFMHNFFH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EOBONCLPPLM")->GetStaticField(0x54A78);
		}

		// static const ::System::Object OCKGGIIFIKP; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOBONCLPPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOBONCLPPLM*))((::PBYTE)hIl2Cpp + EOBONCLPPLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOBONCLPPLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EOBONCLPPLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOBONCLPPLM* Clone()
		{
			return ((::EOBONCLPPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OAJOCEIKAGK>* DOBEKFBKHDE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OAJOCEIKAGK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM_DOBEKFBKHDE_OFFSET))(this);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + EOBONCLPPLM_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOBONCLPPLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOBONCLPPLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOBONCLPPLM*))((::PBYTE)hIl2Cpp + EOBONCLPPLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOBONCLPPLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOBONCLPPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOBONCLPPLM*))((::PBYTE)hIl2Cpp + EOBONCLPPLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOBONCLPPLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
