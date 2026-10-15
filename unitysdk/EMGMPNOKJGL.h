#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJHKIIDEOOG.h"
#include "unitysdk/System/Object.h"
class EMGMPNOKJGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMGMPNOKJGL_BJKODHDFIFL_OFFSET UNITYSDK_OFFSET(0x1E2E0CC0)
#define EMGMPNOKJGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E11C0)
#define EMGMPNOKJGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E14B0)
#define EMGMPNOKJGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E0C40)
#define EMGMPNOKJGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E0BA0)
#define EMGMPNOKJGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E0B50)
#define EMGMPNOKJGL_EPFDENEPLOL_OFFSET UNITYSDK_OFFSET(0x1E2E0CB0)
#define EMGMPNOKJGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E0D70)
#define EMGMPNOKJGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E0CE0)
#define EMGMPNOKJGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2E0CA0)
#define EMGMPNOKJGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E0E80)
#define EMGMPNOKJGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E0B10)
#define EMGMPNOKJGL_KAGECHDNOGE_OFFSET UNITYSDK_OFFSET(0x1E2E0CD0)
#define EMGMPNOKJGL_KOHLODGNPIA_OFFSET UNITYSDK_OFFSET(0x1E2E0C70)
#define EMGMPNOKJGL_LFLOKFBJPOG_OFFSET UNITYSDK_OFFSET(0x1E2E0C80)
#define EMGMPNOKJGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E13C0)
#define EMGMPNOKJGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E1360)
#define EMGMPNOKJGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2E0C90)
#define EMGMPNOKJGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E0B40)
#define EMGMPNOKJGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E0F80)
#define EMGMPNOKJGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E0FE0)

	class EMGMPNOKJGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x18
		::PJHKIIDEOOG JEBPDFBGCCJ; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::Boolean ANCOGIJHDNC; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_IBOBFDAMEHC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EMGMPNOKJGL")->GetStaticField(0x52F70);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EMGMPNOKJGL")->GetStaticField(0x52F78);
		}

		// static const ::System::Object APFDKAHEPLG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AJPEEDNHODK; // 0x0
		// static const ::System::Object PGOIJMGMDEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMGMPNOKJGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMGMPNOKJGL*))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMGMPNOKJGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EMGMPNOKJGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMGMPNOKJGL* Clone()
		{
			return ((::EMGMPNOKJGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_CLONE_OFFSET))(this);
		}

		::PJHKIIDEOOG KOHLODGNPIA()
		{
			return ((::PJHKIIDEOOG(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_KOHLODGNPIA_OFFSET))(this);
		}

		::System::Void LFLOKFBJPOG(::PJHKIIDEOOG a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKIIDEOOG))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_LFLOKFBJPOG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPFDENEPLOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_EPFDENEPLOL_OFFSET))(this);
		}

		::System::Boolean BJKODHDFIFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_BJKODHDFIFL_OFFSET))(this);
		}

		::System::Void KAGECHDNOGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_KAGECHDNOGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMGMPNOKJGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMGMPNOKJGL*))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMGMPNOKJGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMGMPNOKJGL*))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMGMPNOKJGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
