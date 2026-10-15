#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBPEMINKHEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBPEMINKHEN_AKCGHIOECFE_OFFSET UNITYSDK_OFFSET(0x1E8B2F30)
#define LBPEMINKHEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B3280)
#define LBPEMINKHEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3550)
#define LBPEMINKHEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B2ED0)
#define LBPEMINKHEN_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E8B2F40)
#define LBPEMINKHEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B2EA0)
#define LBPEMINKHEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2E90)
#define LBPEMINKHEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B3040)
#define LBPEMINKHEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B2F60)
#define LBPEMINKHEN_FBMICLGHCBD_OFFSET UNITYSDK_OFFSET(0x1E8B2F20)
#define LBPEMINKHEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B3110)
#define LBPEMINKHEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8B2E50)
#define LBPEMINKHEN_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E8B2F50)
#define LBPEMINKHEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B33D0)
#define LBPEMINKHEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B3390)
#define LBPEMINKHEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2E80)
#define LBPEMINKHEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B3140)
#define LBPEMINKHEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B31A0)

inline static constexpr unsigned int LBPEMINKHEN_TypeDefinitionIndex = 28167;

	class LBPEMINKHEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 KHNMADKENHN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LBPEMINKHEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBPEMINKHEN*>**)UnitySDK::FromName("", "LBPEMINKHEN")->GetStaticField(0x26200);
		}

		// static const ::System::Object CMDHAFJBKJF; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBPEMINKHEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBPEMINKHEN*))((::PBYTE)hIl2Cpp + LBPEMINKHEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBPEMINKHEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBPEMINKHEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBPEMINKHEN*>*(*)())((::PBYTE)hIl2Cpp + LBPEMINKHEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBPEMINKHEN* Clone()
		{
			return ((::LBPEMINKHEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN_CLONE_OFFSET))(this);
		}

		::System::UInt32 FBMICLGHCBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN_FBMICLGHCBD_OFFSET))(this);
		}

		::System::Void AKCGHIOECFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBPEMINKHEN_AKCGHIOECFE_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBPEMINKHEN_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBPEMINKHEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBPEMINKHEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBPEMINKHEN*))((::PBYTE)hIl2Cpp + LBPEMINKHEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBPEMINKHEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBPEMINKHEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBPEMINKHEN*))((::PBYTE)hIl2Cpp + LBPEMINKHEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBPEMINKHEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
