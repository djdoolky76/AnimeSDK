#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILKADBIDKAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILKADBIDKAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206B6580)
#define ILKADBIDKAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B67E0)
#define ILKADBIDKAA_CLONE_OFFSET UNITYSDK_OFFSET(0x206B6190)
#define ILKADBIDKAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206B6150)
#define ILKADBIDKAA_CTOR_OFFSET UNITYSDK_OFFSET(0x206B6140)
#define ILKADBIDKAA_EPKNBMOGDIF_OFFSET UNITYSDK_OFFSET(0x206B61F0)
#define ILKADBIDKAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206B6300)
#define ILKADBIDKAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x206B6220)
#define ILKADBIDKAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206B63E0)
#define ILKADBIDKAA_GKEEEPODBJP_OFFSET UNITYSDK_OFFSET(0x206B6200)
#define ILKADBIDKAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206B6100)
#define ILKADBIDKAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206B6660)
#define ILKADBIDKAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206B6620)
#define ILKADBIDKAA_MHLEHGCBKOD_OFFSET UNITYSDK_OFFSET(0x206B6210)
#define ILKADBIDKAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206B6130)
#define ILKADBIDKAA_PKFNPIHFAME_OFFSET UNITYSDK_OFFSET(0x206B61E0)
#define ILKADBIDKAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206B6410)
#define ILKADBIDKAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x206B6470)

inline static constexpr unsigned int ILKADBIDKAA_TypeDefinitionIndex = 35451;

	class ILKADBIDKAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NKDIPABDIIO; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 PFMACMAPMFP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ILKADBIDKAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILKADBIDKAA*>**)UnitySDK::FromName("", "ILKADBIDKAA")->GetStaticField(0x11700);
		}

		// static const ::System::Object EKICJHILLNJ; // 0x0
		// static const ::System::Object FDNOENLLFGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILKADBIDKAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILKADBIDKAA*))((::PBYTE)hIl2Cpp + ILKADBIDKAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILKADBIDKAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILKADBIDKAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILKADBIDKAA*>*(*)())((::PBYTE)hIl2Cpp + ILKADBIDKAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILKADBIDKAA* Clone()
		{
			return ((::ILKADBIDKAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA_CLONE_OFFSET))(this);
		}

		::System::Boolean PKFNPIHFAME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA_PKFNPIHFAME_OFFSET))(this);
		}

		::System::Void EPKNBMOGDIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILKADBIDKAA_EPKNBMOGDIF_OFFSET))(this, a1);
		}

		::System::UInt32 GKEEEPODBJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA_GKEEEPODBJP_OFFSET))(this);
		}

		::System::Void MHLEHGCBKOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILKADBIDKAA_MHLEHGCBKOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILKADBIDKAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILKADBIDKAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILKADBIDKAA*))((::PBYTE)hIl2Cpp + ILKADBIDKAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILKADBIDKAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILKADBIDKAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILKADBIDKAA*))((::PBYTE)hIl2Cpp + ILKADBIDKAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILKADBIDKAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
