#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIKICHNEPKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIKICHNEPKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F532960)
#define AIKICHNEPKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F532B80)
#define AIKICHNEPKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5325B0)
#define AIKICHNEPKE_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1F5325F0)
#define AIKICHNEPKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F532580)
#define AIKICHNEPKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F532570)
#define AIKICHNEPKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5326E0)
#define AIKICHNEPKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F532610)
#define AIKICHNEPKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F532850)
#define AIKICHNEPKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F532530)
#define AIKICHNEPKE_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1F532600)
#define AIKICHNEPKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F532A20)
#define AIKICHNEPKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5329F0)
#define AIKICHNEPKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F532560)
#define AIKICHNEPKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F532880)
#define AIKICHNEPKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5328E0)

inline static constexpr unsigned int AIKICHNEPKE_TypeDefinitionIndex = 29051;

	class AIKICHNEPKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AIKICHNEPKE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AIKICHNEPKE*>**)UnitySDK::FromName("", "AIKICHNEPKE")->GetStaticField(0x3D770);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIKICHNEPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIKICHNEPKE*))((::PBYTE)hIl2Cpp + AIKICHNEPKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIKICHNEPKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AIKICHNEPKE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AIKICHNEPKE*>*(*)())((::PBYTE)hIl2Cpp + AIKICHNEPKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIKICHNEPKE* Clone()
		{
			return ((::AIKICHNEPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIKICHNEPKE_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIKICHNEPKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIKICHNEPKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIKICHNEPKE*))((::PBYTE)hIl2Cpp + AIKICHNEPKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIKICHNEPKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIKICHNEPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIKICHNEPKE*))((::PBYTE)hIl2Cpp + AIKICHNEPKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIKICHNEPKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
