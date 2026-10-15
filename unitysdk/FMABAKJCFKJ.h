#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMABAKJCFKJ;
class ILMHFEPPKFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMABAKJCFKJ_AJCDEHHJLBD_OFFSET UNITYSDK_OFFSET(0x1E3DE360)
#define FMABAKJCFKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DE860)
#define FMABAKJCFKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DEB70)
#define FMABAKJCFKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DE2C0)
#define FMABAKJCFKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DE230)
#define FMABAKJCFKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DE220)
#define FMABAKJCFKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DE520)
#define FMABAKJCFKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DE3A0)
#define FMABAKJCFKJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3DE390)
#define FMABAKJCFKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DE6A0)
#define FMABAKJCFKJ_HIPPAANGGHO_OFFSET UNITYSDK_OFFSET(0x1E3DE370)
#define FMABAKJCFKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DE1E0)
#define FMABAKJCFKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DE9E0)
#define FMABAKJCFKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DE930)
#define FMABAKJCFKJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3DE380)
#define FMABAKJCFKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DE210)
#define FMABAKJCFKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DE720)
#define FMABAKJCFKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DE780)

inline static constexpr unsigned int FMABAKJCFKJ_TypeDefinitionIndex = 26452;

	class FMABAKJCFKJ : public ::System::Object
	{
	public:
		::ILMHFEPPKFE* IEJICMOOJCH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FMABAKJCFKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FMABAKJCFKJ*>**)UnitySDK::FromName("", "FMABAKJCFKJ")->GetStaticField(0x64940);
		}

		// static const ::System::Object DFEFLJLMFCJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMABAKJCFKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMABAKJCFKJ*))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMABAKJCFKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FMABAKJCFKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FMABAKJCFKJ*>*(*)())((::PBYTE)hIl2Cpp + FMABAKJCFKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMABAKJCFKJ* Clone()
		{
			return ((::FMABAKJCFKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_CLONE_OFFSET))(this);
		}

		::ILMHFEPPKFE* AJCDEHHJLBD()
		{
			return ((::ILMHFEPPKFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_AJCDEHHJLBD_OFFSET))(this);
		}

		::System::Void HIPPAANGGHO(::ILMHFEPPKFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILMHFEPPKFE*))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_HIPPAANGGHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMABAKJCFKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMABAKJCFKJ*))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMABAKJCFKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMABAKJCFKJ*))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMABAKJCFKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
