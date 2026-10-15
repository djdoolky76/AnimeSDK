#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKHEHAMBLEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKHEHAMBLEB_ADIJABBONMK_OFFSET UNITYSDK_OFFSET(0x1E3CB4B0)
#define AKHEHAMBLEB_BIPGANGGAEC_OFFSET UNITYSDK_OFFSET(0x1E3CB4D0)
#define AKHEHAMBLEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3CB860)
#define AKHEHAMBLEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CBBE0)
#define AKHEHAMBLEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3CB430)
#define AKHEHAMBLEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3CB400)
#define AKHEHAMBLEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CB3F0)
#define AKHEHAMBLEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3CB5F0)
#define AKHEHAMBLEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3CB4E0)
#define AKHEHAMBLEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3CB6C0)
#define AKHEHAMBLEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3CB380)
#define AKHEHAMBLEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3CBA60)
#define AKHEHAMBLEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3CBA20)
#define AKHEHAMBLEB_NEJDALLPIMG_OFFSET UNITYSDK_OFFSET(0x1E3CB4C0)
#define AKHEHAMBLEB_OIKNCFIDMEM_OFFSET UNITYSDK_OFFSET(0x1E3CB4A0)
#define AKHEHAMBLEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3CB3E0)
#define AKHEHAMBLEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3CB720)
#define AKHEHAMBLEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3CB780)

inline static constexpr unsigned int AKHEHAMBLEB_TypeDefinitionIndex = 29258;

	class AKHEHAMBLEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 BIMKNFGLKPG; // 0x18
		::System::Int64 DPNKODHICIJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AKHEHAMBLEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKHEHAMBLEB*>**)UnitySDK::FromName("", "AKHEHAMBLEB")->GetStaticField(0x36980);
		}

		// static const ::System::Object MHLMDKGPFAK; // 0x0
		// static const ::System::Object ICGAGDOBKAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKHEHAMBLEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKHEHAMBLEB*))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKHEHAMBLEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKHEHAMBLEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKHEHAMBLEB*>*(*)())((::PBYTE)hIl2Cpp + AKHEHAMBLEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKHEHAMBLEB* Clone()
		{
			return ((::AKHEHAMBLEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_CLONE_OFFSET))(this);
		}

		::System::Int64 OIKNCFIDMEM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_OIKNCFIDMEM_OFFSET))(this);
		}

		::System::Void ADIJABBONMK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_ADIJABBONMK_OFFSET))(this, a1);
		}

		::System::Int64 NEJDALLPIMG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_NEJDALLPIMG_OFFSET))(this);
		}

		::System::Void BIPGANGGAEC(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_BIPGANGGAEC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKHEHAMBLEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKHEHAMBLEB*))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKHEHAMBLEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKHEHAMBLEB*))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKHEHAMBLEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
