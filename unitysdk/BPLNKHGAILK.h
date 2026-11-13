#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPLNKHGAILK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPLNKHGAILK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2033F5F0)
#define BPLNKHGAILK_CCTOR_OFFSET UNITYSDK_OFFSET(0x2033F810)
#define BPLNKHGAILK_CLONE_OFFSET UNITYSDK_OFFSET(0x2033F240)
#define BPLNKHGAILK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2033F210)
#define BPLNKHGAILK_CTOR_OFFSET UNITYSDK_OFFSET(0x2033F200)
#define BPLNKHGAILK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2033F370)
#define BPLNKHGAILK_EQUALS_OFFSET UNITYSDK_OFFSET(0x2033F2A0)
#define BPLNKHGAILK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2033F4E0)
#define BPLNKHGAILK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2033F1C0)
#define BPLNKHGAILK_JOFMLPJKFBO_OFFSET UNITYSDK_OFFSET(0x2033F290)
#define BPLNKHGAILK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2033F6B0)
#define BPLNKHGAILK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2033F680)
#define BPLNKHGAILK_NJDBBHCEOLG_OFFSET UNITYSDK_OFFSET(0x2033F280)
#define BPLNKHGAILK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2033F1F0)
#define BPLNKHGAILK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2033F510)
#define BPLNKHGAILK_WRITETO_OFFSET UNITYSDK_OFFSET(0x2033F570)

inline static constexpr unsigned int BPLNKHGAILK_TypeDefinitionIndex = 33747;

	class BPLNKHGAILK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ACMGLOOCIND; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BPLNKHGAILK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPLNKHGAILK*>**)UnitySDK::FromName("", "BPLNKHGAILK")->GetStaticField(0x5E8C0);
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

		static ::Google::Protobuf::MessageParser_1<::BPLNKHGAILK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPLNKHGAILK*>*(*)())((::PBYTE)hIl2Cpp + BPLNKHGAILK_JJGHOBBFNJD_OFFSET))();
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
