#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCCPHILOCC;
class MMIGPCKGBBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMIGPCKGBBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA5F410)
#define MMIGPCKGBBO_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1EA5EF90)
#define MMIGPCKGBBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5F780)
#define MMIGPCKGBBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA5EF30)
#define MMIGPCKGBBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA5EE60)
#define MMIGPCKGBBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5EE10)
#define MMIGPCKGBBO_DGLMLDMIJDL_OFFSET UNITYSDK_OFFSET(0x1EA5EFC0)
#define MMIGPCKGBBO_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1EA5EFA0)
#define MMIGPCKGBBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA5F000)
#define MMIGPCKGBBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA5EFD0)
#define MMIGPCKGBBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA5EF70)
#define MMIGPCKGBBO_FFGJAKAHAJF_OFFSET UNITYSDK_OFFSET(0x1EA5EF80)
#define MMIGPCKGBBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA5F140)
#define MMIGPCKGBBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA5EDD0)
#define MMIGPCKGBBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA5F670)
#define MMIGPCKGBBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA5F5B0)
#define MMIGPCKGBBO_NCKFBKNNGBM_OFFSET UNITYSDK_OFFSET(0x1EA5EFB0)
#define MMIGPCKGBBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA5EF60)
#define MMIGPCKGBBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA5EE00)
#define MMIGPCKGBBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA5F1C0)
#define MMIGPCKGBBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA5F220)

inline static constexpr unsigned int MMIGPCKGBBO_TypeDefinitionIndex = 32308;

	class MMIGPCKGBBO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>* BIKKFKPJFPA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 NBFPOGFBMFE; // 0x24
		::System::Boolean CLIAJJBLJBK; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::CDCCPHILOCC*>** StaticGet_OJFEDAFJGDF()
		{
			return (::Google::Protobuf::FieldCodec_1<::CDCCPHILOCC*>**)UnitySDK::FromName("", "MMIGPCKGBBO")->GetStaticField(0x57380);
		}

		static ::Google::Protobuf::MessageParser_1<::MMIGPCKGBBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMIGPCKGBBO*>**)UnitySDK::FromName("", "MMIGPCKGBBO")->GetStaticField(0x57388);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MEEEMLEBMJO; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object EKNOELBGANH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMIGPCKGBBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMIGPCKGBBO*))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMIGPCKGBBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMIGPCKGBBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMIGPCKGBBO*>*(*)())((::PBYTE)hIl2Cpp + MMIGPCKGBBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMIGPCKGBBO* Clone()
		{
			return ((::MMIGPCKGBBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>* FFGJAKAHAJF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_FFGJAKAHAJF_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean NCKFBKNNGBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_NCKFBKNNGBM_OFFSET))(this);
		}

		::System::Void DGLMLDMIJDL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_DGLMLDMIJDL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMIGPCKGBBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMIGPCKGBBO*))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMIGPCKGBBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMIGPCKGBBO*))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMIGPCKGBBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
