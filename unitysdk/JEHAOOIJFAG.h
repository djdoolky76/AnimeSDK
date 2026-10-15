#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEHAOOIJFAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEHAOOIJFAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6ED8A0)
#define JEHAOOIJFAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EDB30)
#define JEHAOOIJFAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6ED270)
#define JEHAOOIJFAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6ED220)
#define JEHAOOIJFAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ED210)
#define JEHAOOIJFAG_EBPCOBLFCAB_OFFSET UNITYSDK_OFFSET(0x1E6ED2E0)
#define JEHAOOIJFAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6ED380)
#define JEHAOOIJFAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6ED350)
#define JEHAOOIJFAG_FKJFOIDMJII_OFFSET UNITYSDK_OFFSET(0x1E6ED2D0)
#define JEHAOOIJFAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6ED5A0)
#define JEHAOOIJFAG_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E6ED340)
#define JEHAOOIJFAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6ED1D0)
#define JEHAOOIJFAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6ED980)
#define JEHAOOIJFAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6ED920)
#define JEHAOOIJFAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6ED200)
#define JEHAOOIJFAG_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E6ED330)
#define JEHAOOIJFAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6ED740)
#define JEHAOOIJFAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6ED7A0)

inline static constexpr unsigned int JEHAOOIJFAG_TypeDefinitionIndex = 25445;

	class JEHAOOIJFAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* KBNOLMHICMH; // 0x18
		::System::Double BCLKCLDFMOA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JEHAOOIJFAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEHAOOIJFAG*>**)UnitySDK::FromName("", "JEHAOOIJFAG")->GetStaticField(0x2F170);
		}

		// static const ::System::Object LLOBJBMGFLP; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEHAOOIJFAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEHAOOIJFAG*))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEHAOOIJFAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEHAOOIJFAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEHAOOIJFAG*>*(*)())((::PBYTE)hIl2Cpp + JEHAOOIJFAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEHAOOIJFAG* Clone()
		{
			return ((::JEHAOOIJFAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_CLONE_OFFSET))(this);
		}

		::System::String* FKJFOIDMJII()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_FKJFOIDMJII_OFFSET))(this);
		}

		::System::Void EBPCOBLFCAB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_EBPCOBLFCAB_OFFSET))(this, a1);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEHAOOIJFAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEHAOOIJFAG*))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEHAOOIJFAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEHAOOIJFAG*))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEHAOOIJFAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
