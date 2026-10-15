#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALIOECIFDKK_OJBCIJDEDJA.h"
#include "unitysdk/System/Object.h"
class ALIOECIFDKK;
class EKHHPLNOPCF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALIOECIFDKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E50F0A0)
#define ALIOECIFDKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50F4D0)
#define ALIOECIFDKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E50EC60)
#define ALIOECIFDKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E50EB10)
#define ALIOECIFDKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50EB00)
#define ALIOECIFDKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E50ECE0)
#define ALIOECIFDKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E50ECB0)
#define ALIOECIFDKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E50EEF0)
#define ALIOECIFDKK_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1E50ECA0)
#define ALIOECIFDKK_IABKIBJNNCA_OFFSET UNITYSDK_OFFSET(0x1E50EC40)
#define ALIOECIFDKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E50EAC0)
#define ALIOECIFDKK_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1E50EC90)
#define ALIOECIFDKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E50F2B0)
#define ALIOECIFDKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E50F140)
#define ALIOECIFDKK_ONFLAHNAHKF_OFFSET UNITYSDK_OFFSET(0x1E50EBE0)
#define ALIOECIFDKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E50EAF0)
#define ALIOECIFDKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E50EF70)
#define ALIOECIFDKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E50EFD0)

inline static constexpr unsigned int ALIOECIFDKK_TypeDefinitionIndex = 26854;

	class ALIOECIFDKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* JEFEMOPFJOP; // 0x18
		::ALIOECIFDKK_OJBCIJDEDJA NPIBMNININN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALIOECIFDKK")->GetStaticField(0x39200);
		}

		// static const ::System::Object JAIOCFMOGLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALIOECIFDKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIOECIFDKK*))((::PBYTE)hIl2Cpp + ALIOECIFDKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALIOECIFDKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALIOECIFDKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALIOECIFDKK* Clone()
		{
			return ((::ALIOECIFDKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_CLONE_OFFSET))(this);
		}

		::EKHHPLNOPCF* ONFLAHNAHKF()
		{
			return ((::EKHHPLNOPCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_ONFLAHNAHKF_OFFSET))(this);
		}

		::System::Void IABKIBJNNCA(::EKHHPLNOPCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKHHPLNOPCF*))((::PBYTE)hIl2Cpp + ALIOECIFDKK_IABKIBJNNCA_OFFSET))(this, a1);
		}

		::ALIOECIFDKK_OJBCIJDEDJA KFLDFIGDABN()
		{
			return ((::ALIOECIFDKK_OJBCIJDEDJA(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALIOECIFDKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALIOECIFDKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALIOECIFDKK*))((::PBYTE)hIl2Cpp + ALIOECIFDKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALIOECIFDKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALIOECIFDKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIOECIFDKK*))((::PBYTE)hIl2Cpp + ALIOECIFDKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALIOECIFDKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
