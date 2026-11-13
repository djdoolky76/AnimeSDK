#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKJCADFCHAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKJCADFCHAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAE4990)
#define BKJCADFCHAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAE4BB0)
#define BKJCADFCHAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAE45E0)
#define BKJCADFCHAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAE45B0)
#define BKJCADFCHAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE45A0)
#define BKJCADFCHAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAE4710)
#define BKJCADFCHAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAE4640)
#define BKJCADFCHAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAE4880)
#define BKJCADFCHAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAE4560)
#define BKJCADFCHAB_JPBKDLBPKKK_OFFSET UNITYSDK_OFFSET(0x1FAE4630)
#define BKJCADFCHAB_MBAJMGCICMJ_OFFSET UNITYSDK_OFFSET(0x1FAE4620)
#define BKJCADFCHAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAE4A50)
#define BKJCADFCHAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAE4A20)
#define BKJCADFCHAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAE4590)
#define BKJCADFCHAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAE48B0)
#define BKJCADFCHAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAE4910)

inline static constexpr unsigned int BKJCADFCHAB_TypeDefinitionIndex = 27986;

	class BKJCADFCHAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJGHODIGFNF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BKJCADFCHAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKJCADFCHAB*>**)UnitySDK::FromName("", "BKJCADFCHAB")->GetStaticField(0x44560);
		}

		// static const ::System::Object KJIEHNPKFEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKJCADFCHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKJCADFCHAB*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKJCADFCHAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKJCADFCHAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKJCADFCHAB*>*(*)())((::PBYTE)hIl2Cpp + BKJCADFCHAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKJCADFCHAB* Clone()
		{
			return ((::BKJCADFCHAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBAJMGCICMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_MBAJMGCICMJ_OFFSET))(this);
		}

		::System::Void JPBKDLBPKKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKJCADFCHAB_JPBKDLBPKKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKJCADFCHAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKJCADFCHAB*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKJCADFCHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKJCADFCHAB*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
