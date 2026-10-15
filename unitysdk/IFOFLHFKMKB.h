#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFOFLHFKMKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFOFLHFKMKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E646990)
#define IFOFLHFKMKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E646BB0)
#define IFOFLHFKMKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6465E0)
#define IFOFLHFKMKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6465B0)
#define IFOFLHFKMKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6465A0)
#define IFOFLHFKMKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E646710)
#define IFOFLHFKMKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E646640)
#define IFOFLHFKMKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E646880)
#define IFOFLHFKMKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E646560)
#define IFOFLHFKMKB_JPBKDLBPKKK_OFFSET UNITYSDK_OFFSET(0x1E646630)
#define IFOFLHFKMKB_MBAJMGCICMJ_OFFSET UNITYSDK_OFFSET(0x1E646620)
#define IFOFLHFKMKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E646A50)
#define IFOFLHFKMKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E646A20)
#define IFOFLHFKMKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E646590)
#define IFOFLHFKMKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6468B0)
#define IFOFLHFKMKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E646910)

inline static constexpr unsigned int IFOFLHFKMKB_TypeDefinitionIndex = 27461;

	class IFOFLHFKMKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJGHODIGFNF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IFOFLHFKMKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFOFLHFKMKB*>**)UnitySDK::FromName("", "IFOFLHFKMKB")->GetStaticField(0x4A3C0);
		}

		// static const ::System::Object KJIEHNPKFEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFOFLHFKMKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFOFLHFKMKB*))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFOFLHFKMKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFOFLHFKMKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFOFLHFKMKB*>*(*)())((::PBYTE)hIl2Cpp + IFOFLHFKMKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFOFLHFKMKB* Clone()
		{
			return ((::IFOFLHFKMKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBAJMGCICMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_MBAJMGCICMJ_OFFSET))(this);
		}

		::System::Void JPBKDLBPKKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_JPBKDLBPKKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFOFLHFKMKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFOFLHFKMKB*))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFOFLHFKMKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFOFLHFKMKB*))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFOFLHFKMKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
