#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJFMGIPINNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJFMGIPINNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB3D470)
#define NJFMGIPINNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3D510)
#define NJFMGIPINNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB3D160)
#define NJFMGIPINNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB3D130)
#define NJFMGIPINNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3D120)
#define NJFMGIPINNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB3D270)
#define NJFMGIPINNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB3D1A0)
#define NJFMGIPINNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB3D3D0)
#define NJFMGIPINNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB3D0E0)
#define NJFMGIPINNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB3D4C0)
#define NJFMGIPINNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB3D490)
#define NJFMGIPINNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB3D110)
#define NJFMGIPINNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB3D400)
#define NJFMGIPINNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB3D460)

inline static constexpr unsigned int NJFMGIPINNK_TypeDefinitionIndex = 34449;

	class NJFMGIPINNK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NJFMGIPINNK")->GetStaticField(0x64BB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMGIPINNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJFMGIPINNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJFMGIPINNK*))((::PBYTE)hIl2Cpp + NJFMGIPINNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJFMGIPINNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NJFMGIPINNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMGIPINNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJFMGIPINNK* Clone()
		{
			return ((::NJFMGIPINNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMGIPINNK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJFMGIPINNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJFMGIPINNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJFMGIPINNK*))((::PBYTE)hIl2Cpp + NJFMGIPINNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMGIPINNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMGIPINNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJFMGIPINNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMGIPINNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJFMGIPINNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJFMGIPINNK*))((::PBYTE)hIl2Cpp + NJFMGIPINNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJFMGIPINNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
