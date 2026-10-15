#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPLNKHGAILK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPLNKHGAILK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E04D0C0)
#define BPLNKHGAILK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04D2E0)
#define BPLNKHGAILK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E04CD10)
#define BPLNKHGAILK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E04CCE0)
#define BPLNKHGAILK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04CCD0)
#define BPLNKHGAILK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E04CE40)
#define BPLNKHGAILK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E04CD70)
#define BPLNKHGAILK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E04CFB0)
#define BPLNKHGAILK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E04CC90)
#define BPLNKHGAILK_JOFMLPJKFBO_OFFSET UNITYSDK_OFFSET(0x1E04CD60)
#define BPLNKHGAILK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E04D180)
#define BPLNKHGAILK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E04D150)
#define BPLNKHGAILK_NJDBBHCEOLG_OFFSET UNITYSDK_OFFSET(0x1E04CD50)
#define BPLNKHGAILK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E04CCC0)
#define BPLNKHGAILK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E04CFE0)
#define BPLNKHGAILK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E04D040)

inline static constexpr unsigned int BPLNKHGAILK_TypeDefinitionIndex = 32832;

	class BPLNKHGAILK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ACMGLOOCIND; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPLNKHGAILK")->GetStaticField(0x556E0);
		}

		// static const ::System::Object DPMPBNHNKCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPLNKHGAILK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPLNKHGAILK*))((::PBYTE)hIl2Cpp + BPLNKHGAILK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPLNKHGAILK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPLNKHGAILK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPLNKHGAILK* Clone()
		{
			return ((::BPLNKHGAILK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK_CLONE_OFFSET))(this);
		}

		::System::UInt32 NJDBBHCEOLG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK_NJDBBHCEOLG_OFFSET))(this);
		}

		::System::Void JOFMLPJKFBO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPLNKHGAILK_JOFMLPJKFBO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPLNKHGAILK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPLNKHGAILK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPLNKHGAILK*))((::PBYTE)hIl2Cpp + BPLNKHGAILK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPLNKHGAILK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPLNKHGAILK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPLNKHGAILK*))((::PBYTE)hIl2Cpp + BPLNKHGAILK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPLNKHGAILK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
