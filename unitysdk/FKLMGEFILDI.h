#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLMGEFILDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKLMGEFILDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3840F0)
#define FKLMGEFILDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E384310)
#define FKLMGEFILDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E383D40)
#define FKLMGEFILDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E383D10)
#define FKLMGEFILDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E383D00)
#define FKLMGEFILDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E383E70)
#define FKLMGEFILDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E383DA0)
#define FKLMGEFILDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E383FE0)
#define FKLMGEFILDI_JBICHJMDFMP_OFFSET UNITYSDK_OFFSET(0x1E383D90)
#define FKLMGEFILDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E383CC0)
#define FKLMGEFILDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3841B0)
#define FKLMGEFILDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E384180)
#define FKLMGEFILDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E383CF0)
#define FKLMGEFILDI_PMCHAPMFHMF_OFFSET UNITYSDK_OFFSET(0x1E383D80)
#define FKLMGEFILDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E384010)
#define FKLMGEFILDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E384070)

inline static constexpr unsigned int FKLMGEFILDI_TypeDefinitionIndex = 30255;

	class FKLMGEFILDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OMHPIDILPBL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FKLMGEFILDI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FKLMGEFILDI*>**)UnitySDK::FromName("", "FKLMGEFILDI")->GetStaticField(0x5ACE0);
		}

		// static const ::System::Object IDKBGOGIBDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKLMGEFILDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLMGEFILDI*))((::PBYTE)hIl2Cpp + FKLMGEFILDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKLMGEFILDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FKLMGEFILDI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FKLMGEFILDI*>*(*)())((::PBYTE)hIl2Cpp + FKLMGEFILDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKLMGEFILDI* Clone()
		{
			return ((::FKLMGEFILDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMCHAPMFHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI_PMCHAPMFHMF_OFFSET))(this);
		}

		::System::Void JBICHJMDFMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKLMGEFILDI_JBICHJMDFMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKLMGEFILDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKLMGEFILDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKLMGEFILDI*))((::PBYTE)hIl2Cpp + FKLMGEFILDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKLMGEFILDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKLMGEFILDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLMGEFILDI*))((::PBYTE)hIl2Cpp + FKLMGEFILDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKLMGEFILDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
