#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCBPJLLLJGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCBPJLLLJGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE0C500)
#define OCBPJLLLJGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0C7D0)
#define OCBPJLLLJGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBB65B0)
#define OCBPJLLLJGO_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EBB6620)
#define OCBPJLLLJGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBB6580)
#define OCBPJLLLJGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB6570)
#define OCBPJLLLJGO_EMMJPJAMEFL_OFFSET UNITYSDK_OFFSET(0x1EBB6600)
#define OCBPJLLLJGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE0C2C0)
#define OCBPJLLLJGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE0C1E0)
#define OCBPJLLLJGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE0C390)
#define OCBPJLLLJGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBB6530)
#define OCBPJLLLJGO_JLCKFMGKJPB_OFFSET UNITYSDK_OFFSET(0x1EBB6610)
#define OCBPJLLLJGO_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EBB6630)
#define OCBPJLLLJGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE0C650)
#define OCBPJLLLJGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE0C610)
#define OCBPJLLLJGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBB6560)
#define OCBPJLLLJGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE0C3C0)
#define OCBPJLLLJGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE0C420)

inline static constexpr unsigned int OCBPJLLLJGO_TypeDefinitionIndex = 33071;

	class OCBPJLLLJGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PBPJNDEHDNK; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OCBPJLLLJGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCBPJLLLJGO*>**)UnitySDK::FromName("", "OCBPJLLLJGO")->GetStaticField(0x11260);
		}

		// static const ::System::Object JOKMIFACEIK; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCBPJLLLJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPJLLLJGO*))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCBPJLLLJGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCBPJLLLJGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCBPJLLLJGO*>*(*)())((::PBYTE)hIl2Cpp + OCBPJLLLJGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCBPJLLLJGO* Clone()
		{
			return ((::OCBPJLLLJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMMJPJAMEFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_EMMJPJAMEFL_OFFSET))(this);
		}

		::System::Void JLCKFMGKJPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_JLCKFMGKJPB_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCBPJLLLJGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCBPJLLLJGO*))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCBPJLLLJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPJLLLJGO*))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCBPJLLLJGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
