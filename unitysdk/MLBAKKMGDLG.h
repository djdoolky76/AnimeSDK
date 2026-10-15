#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBMGIOIHEI;
class MLBAKKMGDLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLBAKKMGDLG_APDMNNNEHPN_OFFSET UNITYSDK_OFFSET(0x1EA50490)
#define MLBAKKMGDLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA50970)
#define MLBAKKMGDLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA50CE0)
#define MLBAKKMGDLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA50460)
#define MLBAKKMGDLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA50330)
#define MLBAKKMGDLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA502A0)
#define MLBAKKMGDLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA50500)
#define MLBAKKMGDLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA504D0)
#define MLBAKKMGDLG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA504B0)
#define MLBAKKMGDLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA50650)
#define MLBAKKMGDLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA50260)
#define MLBAKKMGDLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA50BA0)
#define MLBAKKMGDLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA50AE0)
#define MLBAKKMGDLG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA504A0)
#define MLBAKKMGDLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA50290)
#define MLBAKKMGDLG_PFPCADJDBII_OFFSET UNITYSDK_OFFSET(0x1EA504C0)
#define MLBAKKMGDLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA507A0)
#define MLBAKKMGDLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA50800)

inline static constexpr unsigned int MLBAKKMGDLG_TypeDefinitionIndex = 28997;

	class MLBAKKMGDLG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>* BPFMPOMLMOA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLBHBJIEBFM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HLHPPAEBALH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MLBAKKMGDLG")->GetStaticField(0x55980);
		}

		static ::Google::Protobuf::MessageParser_1<::MLBAKKMGDLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLBAKKMGDLG*>**)UnitySDK::FromName("", "MLBAKKMGDLG")->GetStaticField(0x55988);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPBMGIOIHEI*>** StaticGet_FHGCMHLAEEG()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPBMGIOIHEI*>**)UnitySDK::FromName("", "MLBAKKMGDLG")->GetStaticField(0x55990);
		}

		// static const ::System::Object CBGMMPIJCFC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JHBNJJHGGNM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLBAKKMGDLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLBAKKMGDLG*))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBAKKMGDLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLBAKKMGDLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLBAKKMGDLG*>*(*)())((::PBYTE)hIl2Cpp + MLBAKKMGDLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLBAKKMGDLG* Clone()
		{
			return ((::MLBAKKMGDLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>* APDMNNNEHPN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_APDMNNNEHPN_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PFPCADJDBII()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_PFPCADJDBII_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLBAKKMGDLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLBAKKMGDLG*))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLBAKKMGDLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLBAKKMGDLG*))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLBAKKMGDLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
