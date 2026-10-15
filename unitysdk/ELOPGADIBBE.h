#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOPGADIBBE;
class GAJFCLMAAAP;
class PAALDKHKOLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELOPGADIBBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2AC700)
#define ELOPGADIBBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2ACAC0)
#define ELOPGADIBBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2AC0D0)
#define ELOPGADIBBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2ABFF0)
#define ELOPGADIBBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2ABFB0)
#define ELOPGADIBBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2AC320)
#define ELOPGADIBBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2AC130)
#define ELOPGADIBBE_FABAPHBAKMA_OFFSET UNITYSDK_OFFSET(0x1E2AC110)
#define ELOPGADIBBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2AC4F0)
#define ELOPGADIBBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2ABF70)
#define ELOPGADIBBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2AC8F0)
#define ELOPGADIBBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2AC7E0)
#define ELOPGADIBBE_NHMLOKGHFFG_OFFSET UNITYSDK_OFFSET(0x1E2AC120)
#define ELOPGADIBBE_PBIJBAONHPC_OFFSET UNITYSDK_OFFSET(0x1E2AC100)
#define ELOPGADIBBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2ABFA0)
#define ELOPGADIBBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2AC580)
#define ELOPGADIBBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2AC5E0)

inline static constexpr unsigned int ELOPGADIBBE_TypeDefinitionIndex = 25966;

	class ELOPGADIBBE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PAALDKHKOLE*>* ACFDAEFPFGE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::GAJFCLMAAAP* DAHBKOPPOAM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ELOPGADIBBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELOPGADIBBE*>**)UnitySDK::FromName("", "ELOPGADIBBE")->GetStaticField(0x524C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::PAALDKHKOLE*>** StaticGet_GGENBKMANLO()
		{
			return (::Google::Protobuf::FieldCodec_1<::PAALDKHKOLE*>**)UnitySDK::FromName("", "ELOPGADIBBE")->GetStaticField(0x524C8);
		}

		// static const ::System::Object BCJHCICIDDG; // 0x0
		// static const ::System::Object FLGOKKBOLEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELOPGADIBBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOPGADIBBE*))((::PBYTE)hIl2Cpp + ELOPGADIBBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOPGADIBBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELOPGADIBBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELOPGADIBBE*>*(*)())((::PBYTE)hIl2Cpp + ELOPGADIBBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELOPGADIBBE* Clone()
		{
			return ((::ELOPGADIBBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PAALDKHKOLE*>* PBIJBAONHPC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PAALDKHKOLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE_PBIJBAONHPC_OFFSET))(this);
		}

		::GAJFCLMAAAP* FABAPHBAKMA()
		{
			return ((::GAJFCLMAAAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE_FABAPHBAKMA_OFFSET))(this);
		}

		::System::Void NHMLOKGHFFG(::GAJFCLMAAAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJFCLMAAAP*))((::PBYTE)hIl2Cpp + ELOPGADIBBE_NHMLOKGHFFG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELOPGADIBBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELOPGADIBBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELOPGADIBBE*))((::PBYTE)hIl2Cpp + ELOPGADIBBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELOPGADIBBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELOPGADIBBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOPGADIBBE*))((::PBYTE)hIl2Cpp + ELOPGADIBBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELOPGADIBBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
