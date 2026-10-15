#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKCCLEEPELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKCCLEEPELM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE636F0)
#define OKCCLEEPELM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE639C0)
#define OKCCLEEPELM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE63340)
#define OKCCLEEPELM_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DE63390)
#define OKCCLEEPELM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE63310)
#define OKCCLEEPELM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE63300)
#define OKCCLEEPELM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE634B0)
#define OKCCLEEPELM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE633D0)
#define OKCCLEEPELM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE63580)
#define OKCCLEEPELM_ILBJPBNBHNO_OFFSET UNITYSDK_OFFSET(0x1DE633C0)
#define OKCCLEEPELM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE632C0)
#define OKCCLEEPELM_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DE633A0)
#define OKCCLEEPELM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE63840)
#define OKCCLEEPELM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE63800)
#define OKCCLEEPELM_OJLEEFOPKPO_OFFSET UNITYSDK_OFFSET(0x1DE633B0)
#define OKCCLEEPELM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE632F0)
#define OKCCLEEPELM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE635B0)
#define OKCCLEEPELM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE63610)

inline static constexpr unsigned int OKCCLEEPELM_TypeDefinitionIndex = 33075;

	class OKCCLEEPELM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 FGBHABOLIHO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OKCCLEEPELM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKCCLEEPELM*>**)UnitySDK::FromName("", "OKCCLEEPELM")->GetStaticField(0x11240);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object IEDEGHNPGIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKCCLEEPELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKCCLEEPELM*))((::PBYTE)hIl2Cpp + OKCCLEEPELM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKCCLEEPELM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKCCLEEPELM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKCCLEEPELM*>*(*)())((::PBYTE)hIl2Cpp + OKCCLEEPELM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKCCLEEPELM* Clone()
		{
			return ((::OKCCLEEPELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKCCLEEPELM_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 OJLEEFOPKPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM_OJLEEFOPKPO_OFFSET))(this);
		}

		::System::Void ILBJPBNBHNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKCCLEEPELM_ILBJPBNBHNO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKCCLEEPELM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKCCLEEPELM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKCCLEEPELM*))((::PBYTE)hIl2Cpp + OKCCLEEPELM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKCCLEEPELM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKCCLEEPELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKCCLEEPELM*))((::PBYTE)hIl2Cpp + OKCCLEEPELM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKCCLEEPELM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
