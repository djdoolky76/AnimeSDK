#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIONJNJEBBF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIONJNJEBBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E946580)
#define LIONJNJEBBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E946850)
#define LIONJNJEBBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9461D0)
#define LIONJNJEBBF_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E946240)
#define LIONJNJEBBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9461A0)
#define LIONJNJEBBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E946190)
#define LIONJNJEBBF_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E946220)
#define LIONJNJEBBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E946340)
#define LIONJNJEBBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E946260)
#define LIONJNJEBBF_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E946230)
#define LIONJNJEBBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E946410)
#define LIONJNJEBBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E946150)
#define LIONJNJEBBF_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E946250)
#define LIONJNJEBBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9466D0)
#define LIONJNJEBBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E946690)
#define LIONJNJEBBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E946180)
#define LIONJNJEBBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E946440)
#define LIONJNJEBBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9464A0)

inline static constexpr unsigned int LIONJNJEBBF_TypeDefinitionIndex = 34546;

	class LIONJNJEBBF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LIONJNJEBBF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LIONJNJEBBF*>**)UnitySDK::FromName("", "LIONJNJEBBF")->GetStaticField(0x1A740);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIONJNJEBBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIONJNJEBBF*))((::PBYTE)hIl2Cpp + LIONJNJEBBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIONJNJEBBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LIONJNJEBBF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LIONJNJEBBF*>*(*)())((::PBYTE)hIl2Cpp + LIONJNJEBBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIONJNJEBBF* Clone()
		{
			return ((::LIONJNJEBBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIONJNJEBBF_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIONJNJEBBF_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIONJNJEBBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIONJNJEBBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIONJNJEBBF*))((::PBYTE)hIl2Cpp + LIONJNJEBBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIONJNJEBBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIONJNJEBBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIONJNJEBBF*))((::PBYTE)hIl2Cpp + LIONJNJEBBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIONJNJEBBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
