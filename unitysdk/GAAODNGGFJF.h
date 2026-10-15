#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class GAAODNGGFJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define GAAODNGGFJF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E413450)
#define GAAODNGGFJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4137E0)
#define GAAODNGGFJF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E412C40)
#define GAAODNGGFJF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E412B90)
#define GAAODNGGFJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E412B80)
#define GAAODNGGFJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E412F20)
#define GAAODNGGFJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E412D80)
#define GAAODNGGFJF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E412D10)
#define GAAODNGGFJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E413160)
#define GAAODNGGFJF_GFHGDLDAJOP_OFFSET UNITYSDK_OFFSET(0x1E412D20)
#define GAAODNGGFJF_IFKGDPPBDEJ_OFFSET UNITYSDK_OFFSET(0x1E412D40)
#define GAAODNGGFJF_IKJEIEGDHLC_OFFSET UNITYSDK_OFFSET(0x1E412D70)
#define GAAODNGGFJF_IKNFGKDDGJI_OFFSET UNITYSDK_OFFSET(0x1E412D60)
#define GAAODNGGFJF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E412B40)
#define GAAODNGGFJF_JOAFKOHBCGK_OFFSET UNITYSDK_OFFSET(0x1E412D50)
#define GAAODNGGFJF_KKDCDAAHKII_OFFSET UNITYSDK_OFFSET(0x1E412D30)
#define GAAODNGGFJF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4136C0)
#define GAAODNGGFJF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4135D0)
#define GAAODNGGFJF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E412D00)
#define GAAODNGGFJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E412B70)
#define GAAODNGGFJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E413260)
#define GAAODNGGFJF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4132C0)

inline static constexpr unsigned int GAAODNGGFJF_TypeDefinitionIndex = 28090;

	class GAAODNGGFJF : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* FALCONHOFNM; // 0x10
		::Proto::ItemList* LEKJCPCNPBD; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 KJIAPIKIDOH; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GAAODNGGFJF")->GetStaticField(0x6BD40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KNMAPBKCDHE; // 0x0
		// static const ::System::Object FGDMAHNNGPI; // 0x0
		// static const ::System::Object BMKIHDODJPN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAAODNGGFJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAODNGGFJF*))((::PBYTE)hIl2Cpp + GAAODNGGFJF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAAODNGGFJF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GAAODNGGFJF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAAODNGGFJF* Clone()
		{
			return ((::GAAODNGGFJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAAODNGGFJF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* GFHGDLDAJOP()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_GFHGDLDAJOP_OFFSET))(this);
		}

		::System::Void KKDCDAAHKII(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + GAAODNGGFJF_KKDCDAAHKII_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* IFKGDPPBDEJ()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_IFKGDPPBDEJ_OFFSET))(this);
		}

		::System::Void JOAFKOHBCGK(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + GAAODNGGFJF_JOAFKOHBCGK_OFFSET))(this, a1);
		}

		::System::UInt32 IKNFGKDDGJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_IKNFGKDDGJI_OFFSET))(this);
		}

		::System::Void IKJEIEGDHLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAAODNGGFJF_IKJEIEGDHLC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAAODNGGFJF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAAODNGGFJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAAODNGGFJF*))((::PBYTE)hIl2Cpp + GAAODNGGFJF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAAODNGGFJF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAAODNGGFJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAODNGGFJF*))((::PBYTE)hIl2Cpp + GAAODNGGFJF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAAODNGGFJF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
