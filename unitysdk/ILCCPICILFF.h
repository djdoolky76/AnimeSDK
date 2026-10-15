#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGIIIEDAIDK.h"
#include "unitysdk/System/Object.h"
class ILCCPICILFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILCCPICILFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E67B780)
#define ILCCPICILFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67BB60)
#define ILCCPICILFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E67B340)
#define ILCCPICILFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E67B300)
#define ILCCPICILFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67B2F0)
#define ILCCPICILFF_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E67B3D0)
#define ILCCPICILFF_EMLGPKHMCAA_OFFSET UNITYSDK_OFFSET(0x1E67B3B0)
#define ILCCPICILFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E67B4D0)
#define ILCCPICILFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E67B3F0)
#define ILCCPICILFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E67B5A0)
#define ILCCPICILFF_GGLOBDDLDOI_OFFSET UNITYSDK_OFFSET(0x1E67B390)
#define ILCCPICILFF_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E67B3E0)
#define ILCCPICILFF_IEEAMJKIHMF_OFFSET UNITYSDK_OFFSET(0x1E67B3C0)
#define ILCCPICILFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E67B2B0)
#define ILCCPICILFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E67B9A0)
#define ILCCPICILFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E67B950)
#define ILCCPICILFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E67B2E0)
#define ILCCPICILFF_PNBMDNLGBKI_OFFSET UNITYSDK_OFFSET(0x1E67B3A0)
#define ILCCPICILFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E67B5D0)
#define ILCCPICILFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E67B630)

inline static constexpr unsigned int ILCCPICILFF_TypeDefinitionIndex = 34092;

	class ILCCPICILFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGEIEPEONLF; // 0x18
		::System::UInt32 IHOPNNAKAAE; // 0x1C
		::HGIIIEDAIDK EMHBAOIIKLC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ILCCPICILFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILCCPICILFF*>**)UnitySDK::FromName("", "ILCCPICILFF")->GetStaticField(0x51360);
		}

		// static const ::System::Object HJFKGCEMDDB; // 0x0
		// static const ::System::Object IALHPDFHIEG; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILCCPICILFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILCCPICILFF*))((::PBYTE)hIl2Cpp + ILCCPICILFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCCPICILFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILCCPICILFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILCCPICILFF*>*(*)())((::PBYTE)hIl2Cpp + ILCCPICILFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILCCPICILFF* Clone()
		{
			return ((::ILCCPICILFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGLOBDDLDOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_GGLOBDDLDOI_OFFSET))(this);
		}

		::System::Void PNBMDNLGBKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILCCPICILFF_PNBMDNLGBKI_OFFSET))(this, a1);
		}

		::System::UInt32 EMLGPKHMCAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_EMLGPKHMCAA_OFFSET))(this);
		}

		::System::Void IEEAMJKIHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILCCPICILFF_IEEAMJKIHMF_OFFSET))(this, a1);
		}

		::HGIIIEDAIDK EJDIMEGMAKG()
		{
			return ((::HGIIIEDAIDK(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::HGIIIEDAIDK a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGIIIEDAIDK))((::PBYTE)hIl2Cpp + ILCCPICILFF_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILCCPICILFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILCCPICILFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILCCPICILFF*))((::PBYTE)hIl2Cpp + ILCCPICILFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILCCPICILFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILCCPICILFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILCCPICILFF*))((::PBYTE)hIl2Cpp + ILCCPICILFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILCCPICILFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
