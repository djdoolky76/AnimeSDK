#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJLHJDPEEK;
class LPADDGPLIKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPADDGPLIKK_AFEPOLLLPHM_OFFSET UNITYSDK_OFFSET(0x200DD680)
#define LPADDGPLIKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200DDCB0)
#define LPADDGPLIKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x200DE220)
#define LPADDGPLIKK_CLLMMOCKCNH_OFFSET UNITYSDK_OFFSET(0x200DD610)
#define LPADDGPLIKK_CLONE_OFFSET UNITYSDK_OFFSET(0x200DD5E0)
#define LPADDGPLIKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200DD470)
#define LPADDGPLIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x200DD3B0)
#define LPADDGPLIKK_DEFOHBJCGBL_OFFSET UNITYSDK_OFFSET(0x200DD620)
#define LPADDGPLIKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x200DD6D0)
#define LPADDGPLIKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x200DD6A0)
#define LPADDGPLIKK_FEGCNIHKGMM_OFFSET UNITYSDK_OFFSET(0x200DD630)
#define LPADDGPLIKK_FIBECNCHPIA_OFFSET UNITYSDK_OFFSET(0x200DD660)
#define LPADDGPLIKK_FMMAEHOBNHO_OFFSET UNITYSDK_OFFSET(0x200DD690)
#define LPADDGPLIKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x200DD7C0)
#define LPADDGPLIKK_HDHIGEMFBMK_OFFSET UNITYSDK_OFFSET(0x200DD650)
#define LPADDGPLIKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200DD370)
#define LPADDGPLIKK_KDHGDMANFNL_OFFSET UNITYSDK_OFFSET(0x200DD640)
#define LPADDGPLIKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200DE050)
#define LPADDGPLIKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x200DDF50)
#define LPADDGPLIKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200DD3A0)
#define LPADDGPLIKK_PCEFJAAMPNO_OFFSET UNITYSDK_OFFSET(0x200DD670)
#define LPADDGPLIKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200DD9E0)
#define LPADDGPLIKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x200DDA40)

inline static constexpr unsigned int LPADDGPLIKK_TypeDefinitionIndex = 34560;

	class LPADDGPLIKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ADLKDPBKIBN; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::BDJLHJDPEEK*>* JMAKOGFJONL; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PEKKHCNPJLN; // 0x28
		::System::UInt32 JOHLIICKKBJ; // 0x30
		::System::UInt32 GLGAMAKKJNM; // 0x34
		::System::UInt32 KONKHDHDOCE; // 0x38
		static ::Google::Protobuf::FieldCodec_1<::BDJLHJDPEEK*>** StaticGet_MGLPOKJOOMC()
		{
			return (::Google::Protobuf::FieldCodec_1<::BDJLHJDPEEK*>**)UnitySDK::FromName("", "LPADDGPLIKK")->GetStaticField(0x45B00);
		}

		static ::Google::Protobuf::MessageParser_1<::LPADDGPLIKK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPADDGPLIKK*>**)UnitySDK::FromName("", "LPADDGPLIKK")->GetStaticField(0x45B08);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EHJOPINPJKB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LPADDGPLIKK")->GetStaticField(0x45B10);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EJEPLCLKMCP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LPADDGPLIKK")->GetStaticField(0x45B18);
		}

		// static const ::System::Object KEKJCHEOLGH; // 0x0
		// static const ::System::Object ODGFCJNBKNN; // 0x0
		// static const ::System::Object FAFINAPINMC; // 0x0
		// static const ::System::Object GOBGIOLHCMG; // 0x0
		// static const ::System::Object HDFDJHCLAHG; // 0x0
		// static const ::System::Object PECMPPFGMGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPADDGPLIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPADDGPLIKK*))((::PBYTE)hIl2Cpp + LPADDGPLIKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPADDGPLIKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPADDGPLIKK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPADDGPLIKK*>*(*)())((::PBYTE)hIl2Cpp + LPADDGPLIKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPADDGPLIKK* Clone()
		{
			return ((::LPADDGPLIKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLLMMOCKCNH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_CLLMMOCKCNH_OFFSET))(this);
		}

		::System::UInt32 DEFOHBJCGBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_DEFOHBJCGBL_OFFSET))(this);
		}

		::System::Void FEGCNIHKGMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPADDGPLIKK_FEGCNIHKGMM_OFFSET))(this, a1);
		}

		::System::UInt32 KDHGDMANFNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_KDHGDMANFNL_OFFSET))(this);
		}

		::System::Void HDHIGEMFBMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPADDGPLIKK_HDHIGEMFBMK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FIBECNCHPIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_FIBECNCHPIA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BDJLHJDPEEK*>* PCEFJAAMPNO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BDJLHJDPEEK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_PCEFJAAMPNO_OFFSET))(this);
		}

		::System::UInt32 AFEPOLLLPHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_AFEPOLLLPHM_OFFSET))(this);
		}

		::System::Void FMMAEHOBNHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPADDGPLIKK_FMMAEHOBNHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPADDGPLIKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPADDGPLIKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPADDGPLIKK*))((::PBYTE)hIl2Cpp + LPADDGPLIKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPADDGPLIKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPADDGPLIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPADDGPLIKK*))((::PBYTE)hIl2Cpp + LPADDGPLIKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPADDGPLIKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
