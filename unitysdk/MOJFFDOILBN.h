#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOJFFDOILBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOJFFDOILBN_AECLOHLJNNG_OFFSET UNITYSDK_OFFSET(0x1FF16450)
#define MOJFFDOILBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF16A00)
#define MOJFFDOILBN_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1FF16470)
#define MOJFFDOILBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF16E40)
#define MOJFFDOILBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF163E0)
#define MOJFFDOILBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF162E0)
#define MOJFFDOILBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF16250)
#define MOJFFDOILBN_DBLDIAKDPEB_OFFSET UNITYSDK_OFFSET(0x1FF16460)
#define MOJFFDOILBN_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1FF16480)
#define MOJFFDOILBN_DOAEMCBDFDG_OFFSET UNITYSDK_OFFSET(0x1FF164A0)
#define MOJFFDOILBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF16510)
#define MOJFFDOILBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF164B0)
#define MOJFFDOILBN_FIJKGMBEFAB_OFFSET UNITYSDK_OFFSET(0x1FF16430)
#define MOJFFDOILBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF165B0)
#define MOJFFDOILBN_HCHBMGKHFLA_OFFSET UNITYSDK_OFFSET(0x1FF16440)
#define MOJFFDOILBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF161E0)
#define MOJFFDOILBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF16CB0)
#define MOJFFDOILBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF16C30)
#define MOJFFDOILBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF16240)
#define MOJFFDOILBN_PMODNCNLBHF_OFFSET UNITYSDK_OFFSET(0x1FF16490)
#define MOJFFDOILBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF16780)
#define MOJFFDOILBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF167E0)

inline static constexpr unsigned int MOJFFDOILBN_TypeDefinitionIndex = 27737;

	class MOJFFDOILBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FGECFFMJCGJ; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HGFCCABPFPO; // 0x20
		::System::UInt32 PAPKMBOANON; // 0x28
		::System::UInt32 NBFPOGFBMFE; // 0x2C
		::System::UInt32 EKGNJDFEHAK; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IBMOGCIDJFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MOJFFDOILBN")->GetStaticField(0x15810);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MPJLABBNOJE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MOJFFDOILBN")->GetStaticField(0x15818);
		}

		static ::Google::Protobuf::MessageParser_1<::MOJFFDOILBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOJFFDOILBN*>**)UnitySDK::FromName("", "MOJFFDOILBN")->GetStaticField(0x15820);
		}

		// static const ::System::Object OIFHHEMLENE; // 0x0
		// static const ::System::Object BEJJOOLPNLO; // 0x0
		// static const ::System::Object AOAANLAACKL; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object BBOHCMPLPIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOJFFDOILBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJFFDOILBN*))((::PBYTE)hIl2Cpp + MOJFFDOILBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOJFFDOILBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOJFFDOILBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOJFFDOILBN*>*(*)())((::PBYTE)hIl2Cpp + MOJFFDOILBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOJFFDOILBN* Clone()
		{
			return ((::MOJFFDOILBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 FIJKGMBEFAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_FIJKGMBEFAB_OFFSET))(this);
		}

		::System::Void HCHBMGKHFLA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOJFFDOILBN_HCHBMGKHFLA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AECLOHLJNNG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_AECLOHLJNNG_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DBLDIAKDPEB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_DBLDIAKDPEB_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOJFFDOILBN_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::UInt32 PMODNCNLBHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_PMODNCNLBHF_OFFSET))(this);
		}

		::System::Void DOAEMCBDFDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOJFFDOILBN_DOAEMCBDFDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOJFFDOILBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOJFFDOILBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOJFFDOILBN*))((::PBYTE)hIl2Cpp + MOJFFDOILBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOJFFDOILBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOJFFDOILBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJFFDOILBN*))((::PBYTE)hIl2Cpp + MOJFFDOILBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOJFFDOILBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
