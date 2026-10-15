#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNOJGAGPFBG;
class LPJOINCGBBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNOJGAGPFBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B60B0)
#define HNOJGAGPFBG_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E5B5BD0)
#define HNOJGAGPFBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B6540)
#define HNOJGAGPFBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B5B50)
#define HNOJGAGPFBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B5A50)
#define HNOJGAGPFBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B59D0)
#define HNOJGAGPFBG_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E5B5BE0)
#define HNOJGAGPFBG_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E5B5B80)
#define HNOJGAGPFBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B5C30)
#define HNOJGAGPFBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B5C00)
#define HNOJGAGPFBG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5B5BB0)
#define HNOJGAGPFBG_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E5B5B90)
#define HNOJGAGPFBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B5CF0)
#define HNOJGAGPFBG_HGCGGOGHCFJ_OFFSET UNITYSDK_OFFSET(0x1E5B5BC0)
#define HNOJGAGPFBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B5990)
#define HNOJGAGPFBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B63E0)
#define HNOJGAGPFBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B6300)
#define HNOJGAGPFBG_NONMHMACDDG_OFFSET UNITYSDK_OFFSET(0x1E5B5BF0)
#define HNOJGAGPFBG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5B5BA0)
#define HNOJGAGPFBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B59C0)
#define HNOJGAGPFBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B5E40)
#define HNOJGAGPFBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B5EA0)

inline static constexpr unsigned int HNOJGAGPFBG_TypeDefinitionIndex = 28652;

	class HNOJGAGPFBG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LPJOINCGBBP*>* FGGDAGFFDII; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ANPCJHALNMK; // 0x20
		::System::UInt32 NBFPOGFBMFE; // 0x28
		::System::UInt32 NOMDEJJPCMH; // 0x2C
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser_1<::HNOJGAGPFBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNOJGAGPFBG*>**)UnitySDK::FromName("", "HNOJGAGPFBG")->GetStaticField(0x3C0D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LPJOINCGBBP*>** StaticGet_LECKOJGONDK()
		{
			return (::Google::Protobuf::FieldCodec_1<::LPJOINCGBBP*>**)UnitySDK::FromName("", "HNOJGAGPFBG")->GetStaticField(0x3C0D8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_INFAHLBOJMO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HNOJGAGPFBG")->GetStaticField(0x3C0E0);
		}

		// static const ::System::Object GCDEHDAKDHL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CGNHFFIFCBO; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object ICEKAEFCFNM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNOJGAGPFBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOJGAGPFBG*))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNOJGAGPFBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNOJGAGPFBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNOJGAGPFBG*>*(*)())((::PBYTE)hIl2Cpp + HNOJGAGPFBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNOJGAGPFBG* Clone()
		{
			return ((::HNOJGAGPFBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HGCGGOGHCFJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_HGCGGOGHCFJ_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LPJOINCGBBP*>* NONMHMACDDG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LPJOINCGBBP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_NONMHMACDDG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNOJGAGPFBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNOJGAGPFBG*))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNOJGAGPFBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOJGAGPFBG*))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNOJGAGPFBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
