#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDFEPMMIKDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDFEPMMIKDF_BJOCKPBCGAG_OFFSET UNITYSDK_OFFSET(0x1FC03360)
#define PDFEPMMIKDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC03780)
#define PDFEPMMIKDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC03A40)
#define PDFEPMMIKDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC032F0)
#define PDFEPMMIKDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC03260)
#define PDFEPMMIKDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC03210)
#define PDFEPMMIKDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC033F0)
#define PDFEPMMIKDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC03370)
#define PDFEPMMIKDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC034F0)
#define PDFEPMMIKDF_GMCDNCNMNOP_OFFSET UNITYSDK_OFFSET(0x1FC03340)
#define PDFEPMMIKDF_JEHNFPAOLPJ_OFFSET UNITYSDK_OFFSET(0x1FC03330)
#define PDFEPMMIKDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC031D0)
#define PDFEPMMIKDF_KCKNGLFCMBI_OFFSET UNITYSDK_OFFSET(0x1FC03320)
#define PDFEPMMIKDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC03950)
#define PDFEPMMIKDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC038F0)
#define PDFEPMMIKDF_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x1FC03350)
#define PDFEPMMIKDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC03200)
#define PDFEPMMIKDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC035F0)
#define PDFEPMMIKDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC03650)

inline static constexpr unsigned int PDFEPMMIKDF_TypeDefinitionIndex = 32461;

	class PDFEPMMIKDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAMHKIAMHAD; // 0x18
		::System::UInt32 DKNBMNHONNG; // 0x20
		::System::UInt32 NMPGFFDDEKJ; // 0x24
		static ::Google::Protobuf::MessageParser_1<::PDFEPMMIKDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDFEPMMIKDF*>**)UnitySDK::FromName("", "PDFEPMMIKDF")->GetStaticField(0x1A1E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DJJKMCIPPKK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PDFEPMMIKDF")->GetStaticField(0x1A1E8);
		}

		// static const ::System::Object ANNFMMNEMMJ; // 0x0
		// static const ::System::Object MBKKKHLNFDG; // 0x0
		// static const ::System::Object BOIOBAEGIAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDFEPMMIKDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDFEPMMIKDF*))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDFEPMMIKDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDFEPMMIKDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDFEPMMIKDF*>*(*)())((::PBYTE)hIl2Cpp + PDFEPMMIKDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDFEPMMIKDF* Clone()
		{
			return ((::PDFEPMMIKDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCKNGLFCMBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_KCKNGLFCMBI_OFFSET))(this);
		}

		::System::UInt32 JEHNFPAOLPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_JEHNFPAOLPJ_OFFSET))(this);
		}

		::System::Void GMCDNCNMNOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_GMCDNCNMNOP_OFFSET))(this, a1);
		}

		::System::UInt32 OPGLAKFNMLD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_OPGLAKFNMLD_OFFSET))(this);
		}

		::System::Void BJOCKPBCGAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_BJOCKPBCGAG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDFEPMMIKDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDFEPMMIKDF*))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDFEPMMIKDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDFEPMMIKDF*))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDFEPMMIKDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
