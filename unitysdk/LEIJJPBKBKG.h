#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDLGMIIOACH;
class LEIJJPBKBKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEIJJPBKBKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E904F10)
#define LEIJJPBKBKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E905220)
#define LEIJJPBKBKG_CIBEMIPAPLH_OFFSET UNITYSDK_OFFSET(0x1E904A30)
#define LEIJJPBKBKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E904960)
#define LEIJJPBKBKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9048E0)
#define LEIJJPBKBKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9048D0)
#define LEIJJPBKBKG_DBFHLAPFFPP_OFFSET UNITYSDK_OFFSET(0x1E904A20)
#define LEIJJPBKBKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E904C10)
#define LEIJJPBKBKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E904A60)
#define LEIJJPBKBKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E904D90)
#define LEIJJPBKBKG_GGJJJFGPHPG_OFFSET UNITYSDK_OFFSET(0x1E904A40)
#define LEIJJPBKBKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E904860)
#define LEIJJPBKBKG_JNKMMFGANEP_OFFSET UNITYSDK_OFFSET(0x1E904A50)
#define LEIJJPBKBKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E905070)
#define LEIJJPBKBKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E904FE0)
#define LEIJJPBKBKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9048C0)
#define LEIJJPBKBKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E904DD0)
#define LEIJJPBKBKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E904E30)

inline static constexpr unsigned int LEIJJPBKBKG_TypeDefinitionIndex = 28608;

	class LEIJJPBKBKG : public ::System::Object
	{
	public:
		::FDLGMIIOACH* CLNIKCBNDHL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OGLCKCMGDNJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LEIJJPBKBKG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEIJJPBKBKG*>**)UnitySDK::FromName("", "LEIJJPBKBKG")->GetStaticField(0x31D40);
		}

		// static const ::System::Object FAPGHBODPOE; // 0x0
		// static const ::System::Object LANGMKPEPJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEIJJPBKBKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEIJJPBKBKG*))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEIJJPBKBKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LEIJJPBKBKG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LEIJJPBKBKG*>*(*)())((::PBYTE)hIl2Cpp + LEIJJPBKBKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEIJJPBKBKG* Clone()
		{
			return ((::LEIJJPBKBKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_CLONE_OFFSET))(this);
		}

		::System::UInt32 DBFHLAPFFPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_DBFHLAPFFPP_OFFSET))(this);
		}

		::System::Void CIBEMIPAPLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_CIBEMIPAPLH_OFFSET))(this, a1);
		}

		::FDLGMIIOACH* GGJJJFGPHPG()
		{
			return ((::FDLGMIIOACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_GGJJJFGPHPG_OFFSET))(this);
		}

		::System::Void JNKMMFGANEP(::FDLGMIIOACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLGMIIOACH*))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_JNKMMFGANEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEIJJPBKBKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEIJJPBKBKG*))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEIJJPBKBKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEIJJPBKBKG*))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEIJJPBKBKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
