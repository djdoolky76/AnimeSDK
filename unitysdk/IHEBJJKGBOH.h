#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEBIIBBMNKG;
class IHEBJJKGBOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHEBJJKGBOH_ACAOINKFIDD_OFFSET UNITYSDK_OFFSET(0x1F97B510)
#define IHEBJJKGBOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F97BB40)
#define IHEBJJKGBOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97BE70)
#define IHEBJJKGBOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F97B4B0)
#define IHEBJJKGBOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F97B3E0)
#define IHEBJJKGBOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F97B390)
#define IHEBJJKGBOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F97B6A0)
#define IHEBJJKGBOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F97B550)
#define IHEBJJKGBOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F97B850)
#define IHEBJJKGBOH_ICBIEBJKECD_OFFSET UNITYSDK_OFFSET(0x1F97B500)
#define IHEBJJKGBOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F97B320)
#define IHEBJJKGBOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F97BD60)
#define IHEBJJKGBOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F97BCA0)
#define IHEBJJKGBOH_NCIDOPCFPOP_OFFSET UNITYSDK_OFFSET(0x1F97B520)
#define IHEBJJKGBOH_OJKOJFFGNDK_OFFSET UNITYSDK_OFFSET(0x1F97B530)
#define IHEBJJKGBOH_PAEAJNGCDFM_OFFSET UNITYSDK_OFFSET(0x1F97B540)
#define IHEBJJKGBOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F97B380)
#define IHEBJJKGBOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F97B970)
#define IHEBJJKGBOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F97B9D0)

inline static constexpr unsigned int IHEBJJKGBOH_TypeDefinitionIndex = 27009;

	class IHEBJJKGBOH : public ::System::Object
	{
	public:
		::HEBIIBBMNKG* FKAOMBKACGA; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EEBIGLPNIDO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 JMJHMCLLIJP; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MBAALDMILFH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IHEBJJKGBOH")->GetStaticField(0x4BC60);
		}

		static ::Google::Protobuf::MessageParser_1<::IHEBJJKGBOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IHEBJJKGBOH*>**)UnitySDK::FromName("", "IHEBJJKGBOH")->GetStaticField(0x4BC68);
		}

		// static const ::System::Object MDPKMIPMCLD; // 0x0
		// static const ::System::Object PKAEHCIHHPP; // 0x0
		// static const ::System::Object DEIJGADJJIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHEBJJKGBOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHEBJJKGBOH*))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHEBJJKGBOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IHEBJJKGBOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IHEBJJKGBOH*>*(*)())((::PBYTE)hIl2Cpp + IHEBJJKGBOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHEBJJKGBOH* Clone()
		{
			return ((::IHEBJJKGBOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ICBIEBJKECD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_ICBIEBJKECD_OFFSET))(this);
		}

		::System::UInt32 ACAOINKFIDD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_ACAOINKFIDD_OFFSET))(this);
		}

		::System::Void NCIDOPCFPOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_NCIDOPCFPOP_OFFSET))(this, a1);
		}

		::HEBIIBBMNKG* OJKOJFFGNDK()
		{
			return ((::HEBIIBBMNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_OJKOJFFGNDK_OFFSET))(this);
		}

		::System::Void PAEAJNGCDFM(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_PAEAJNGCDFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHEBJJKGBOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHEBJJKGBOH*))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHEBJJKGBOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHEBJJKGBOH*))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHEBJJKGBOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
