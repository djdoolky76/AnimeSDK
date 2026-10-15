#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFMDKGLKCOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFMDKGLKCOF_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1E471610)
#define GFMDKGLKCOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E471960)
#define GFMDKGLKCOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E471C30)
#define GFMDKGLKCOF_CKNCGBKFJLM_OFFSET UNITYSDK_OFFSET(0x1E471620)
#define GFMDKGLKCOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4715B0)
#define GFMDKGLKCOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E471580)
#define GFMDKGLKCOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E471570)
#define GFMDKGLKCOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E471720)
#define GFMDKGLKCOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E471640)
#define GFMDKGLKCOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4717F0)
#define GFMDKGLKCOF_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1E471600)
#define GFMDKGLKCOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E471530)
#define GFMDKGLKCOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E471AB0)
#define GFMDKGLKCOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E471A70)
#define GFMDKGLKCOF_PAAPPKICAOF_OFFSET UNITYSDK_OFFSET(0x1E471630)
#define GFMDKGLKCOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E471560)
#define GFMDKGLKCOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E471820)
#define GFMDKGLKCOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E471880)

	class GFMDKGLKCOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OAJAKDPLAKG; // 0x18
		::System::UInt32 DEJFOEHNFJA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFMDKGLKCOF")->GetStaticField(0x14A40);
		}

		// static const ::System::Object EIDJNEEOOCF; // 0x0
		// static const ::System::Object EKHIBDEOALF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFMDKGLKCOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFMDKGLKCOF*))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMDKGLKCOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFMDKGLKCOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFMDKGLKCOF* Clone()
		{
			return ((::GFMDKGLKCOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 IDNFENJBNPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::UInt32 CKNCGBKFJLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_CKNCGBKFJLM_OFFSET))(this);
		}

		::System::Void PAAPPKICAOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_PAAPPKICAOF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFMDKGLKCOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFMDKGLKCOF*))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFMDKGLKCOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFMDKGLKCOF*))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFMDKGLKCOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
